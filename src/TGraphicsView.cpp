#include "TGraphicsView.h"

#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include <QTextStream>
#include <QScrollBar>
#include <QMouseEvent>
#include <QWheelEvent>
#include <QDebug>
#include <QListIterator>
#include <QFontMetrics>

#include "TArea.h"
#include "TRoom.h"

TGraphicsView::TGraphicsView(QWidget *parent) :
    QGraphicsView(parent)
{
//    setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
    /*for(int x = 0; x < 1000; x = x + 25) {
        for(int y = 0; y < 1000; y = y + 25) {

            if(x % 100 == 0 && y % 100 == 0) {
                scene->addRect(x, y, 2, 2);

                QString pointString;
                QTextStream stream(&pointString);
                stream << "(" << x << "," << y << ")";
                QGraphicsTextItem* item = scene->addText(pointString);
                item->setPos(x, y);
            } else {
                scene->addRect(x, y, 1, 1);
            }
        }
    }

    setSceneRect(0, 0, 1000, 1000);
    setCenter(QPointF(500.0, 500.0)); //A modified version of setCenter(), handles special cases
    //setCursor(Qt::OpenHandCursor);
    */
    setViewport(new QGLWidget());
    zPlane=0;
    rSize=1;
}

void TGraphicsView::repopulateMap(){
    //This function redraws the entire map -- it's meant to be called at the first load of an area
    if (!mpMap)
        return;
    int mRID = mpMap->mRoomId;
    int mAID = mpMap->rooms[mRID]->area;
    if (cAID != mAID || !scenes.contains(mAID)){
        if (scenes.contains(mAID)){
            scene = scenes[mAID];
            setScene(scene);
        }
        else{
            scene = new QGraphicsScene(this);
            setScene(scene);
            TArea * pArea = mpMap->areas[mAID];
            QListIterator<int> itr(pArea->rooms);
            float rs = (float)rSize;
            while (itr.hasNext()){
                //draw rooms
                int nRID = itr.next();
                TRoom * pR = mpMap->rooms[nRID];
                int x = pR->x;
                int y = pR->y*-1;
                int z = pR->z;
                if (z != zPlane){
                    qDebug()<<nRID<<"out of plane";
                    continue;
                }
                QGraphicsRectItem * rect = scene->addRect(x,y,rSize,rSize,QPen(QColor(255,0,0,255)),QBrush(QColor(255,0,0,255)));
                rect->setZValue(1);
                //draw exits
                QPointF p1(x+rs/2,y+rs/2);
                QList<int> exitList;
                if( pR->north > 0 )
                    exitList.push_back( pR->north );
                if( pR->northwest > 0 )
                    exitList.push_back( pR->northwest );
                if( pR->east > 0 )
                    exitList.push_back( pR->east );
                if( pR->southeast > 0 )
                    exitList.push_back( pR->southeast );
                if( pR->south > 0 )
                    exitList.push_back( pR->south );
                if( pR->southwest > 0 )
                    exitList.push_back( pR->southwest );
                if( pR->west > 0 )
                    exitList.push_back( pR->west );
                if( pR->northeast > 0 )
                    exitList.push_back( pR->northeast );
                for (int k=0;k<exitList.size();k++)
                {
                    int rID = exitList[k];
                    if( rID <= 0 ) continue;

                    bool areaExit;

                    TRoom * pE = mpMap->rooms[rID];
                    if( pE->area != mAID )
                    {
                        areaExit = true;
                    }
                    else
                        areaExit = false;
                    float ex = pE->x;
                    float ey = pE->y*-1;
                    QPointF p2(ex+rs/2,ey+rs/2);
                    int ez = pE->z;
                    if( ! areaExit )
                    {
                       QGraphicsLineItem * line = scene->addLine(p1.x(),p1.y(),p2.x(),p2.y(),QPen(QColor(0,0,0,255)));
                       line->setZValue(0);
                    }
                }
            }
            //draw labels
            QMapIterator<int, TMapLabel> it(mpMap->mapLabels[mAID]);
            while( it.hasNext() )
            {
                it.next();
                if( it.value().pos.z() != zPlane ) continue;
                int mx = it.value().pos.x();
                int my = it.value().pos.y()*-1;
                QFont f = QFont();
                f.setPointSize(1);
                QFontMetrics fm(f);
                QGraphicsSimpleTextItem * ti = scene->addSimpleText(it.value().text);
                ti->setFont(f);
                ti->setPos(mx, my);
                ti->setBrush(QBrush(it.value().fgColor));
                ti->setZValue(7);
                QGraphicsRectItem * rect = scene->addRect(mx, my, fm.width(it.value().text), fm.height(),QPen(it.value().bgColor), QBrush(it.value().bgColor));
                rect->setZValue(6);
        //        QPolygonF bgr = mapToScene(QRect(mx, my, br.width(), br.height()));
        //        QGraphicsPolygonItem * pg = scene->addPolygon(bgr,QPen(it.value().bgColor), QBrush(it.value().bgColor));
        //        pg->setZValue(6);
        //        //they're coming from old labels, might as well draw an old label
        //        QRectF lr = QRectF( 0, 0, 1000, 100 );
        //        //lr.normalized().toRect();
        //        QPixmap pix(lr.size().toSize());
        //        pix.fill(it.value().bgColor);
        //        QPainter lp( &pix );
        //        QPen lpen;
        //        lpen.setColor( it.value().fgColor );
        //        lp.setPen( lpen );
        //        QRectF br;
        //        lp.drawText( lr, Qt::AlignLeft, it.value().text, &br );
        //        scene->addPixmap(pix);
            }
            makeMargins();
            scenes.insert(mAID,scene);
        }
    }
}

void TGraphicsView::makeMargins(){
    //put some margins around us
    QRectF sR = scene->sceneRect();
    sR.setX(sR.x()-sR.width()/4);
    sR.setY(sR.y()-sR.height()/4);
    sR.setWidth(sR.width()*1.5);
    sR.setHeight(sR.height()*1.5);
    scene->setSceneRect(sR);
}

void TGraphicsView::setCenter(int room){
    if (!mpMap->rooms.contains(room))
        return;
    TRoom * pR = mpMap->rooms[room];
    int area = pR->area;
    if (area != cAID)
        repopulateMap();
    setCenter(QPointF(pR->x, pR->y*-1));
}

void TGraphicsView::drawPlayerLocation(int room){
    if (!mpMap->rooms.contains(room))
        return;
    repopulateMap();
    TRoom * pR = mpMap->rooms[room];
    int x = pR->x;
    int y = pR->y*-1;
    if (pLocs.contains(0)){
        //remove old circle
        delete pLocs[0];
    }
    QGraphicsEllipseItem * el = scene->addEllipse(x-rSize,y-rSize,rSize*2,rSize*2,QPen(QColor(255,0,0,125)), QBrush(QColor(255,0,0125)));
    el->setZValue(5);
    pLocs.insert(0,el);
}

void TGraphicsView::mouseReleaseEvent(QMouseEvent *event){
    mReleasedAt = event->pos();
    if (mLeftDown){
        mLeftDown=false;
    }
    if (mRightDown){
        mRightDown=false;
    }
}

void TGraphicsView::mousePressEvent(QMouseEvent *event){
    mPressedAt = event->pos();
    lastPoint = event->pos();
    if (event->buttons() & Qt::LeftButton)
        mLeftDown = true;
    if (event->buttons() & Qt::RightButton)
        mRightDown = true;
}

void TGraphicsView::mouseMoveEvent(QMouseEvent *event){
    if (mLeftDown){
        QPointF delta = mapToScene(lastPoint) - mapToScene(event->pos());
        lastPoint = event->pos();
        qDebug()<<lastPoint;
        qDebug()<<mCenterPoint;
        qDebug()<<delta;
        setCenter(mCenterPoint+delta);
    }

}

void TGraphicsView::setCenter(const QPointF &centerPoint){
    //Get the rectangle of the visible area in scene coords
    QRectF visibleArea = mapToScene(rect()).boundingRect();

    //Get the scene area
    QRectF sceneBounds = sceneRect();

    double boundX = visibleArea.width() / 2.0+ sceneBounds.x();;
    double boundY = visibleArea.height() / 2.0+ sceneBounds.y();;
    double boundWidth = sceneBounds.width() - 2.0 * boundX;
    double boundHeight = sceneBounds.height() - 2.0 * boundY;

    //The max boundary that the centerPoint can be to
    QRectF bounds(boundX, boundY, boundWidth, boundHeight);
    double xMin = bounds.x()-boundWidth;
    double xMax = bounds.x()+boundWidth;
    double yMin = bounds.y()-boundHeight;
    double yMax = bounds.y()+boundHeight;
    mCenterPoint = centerPoint;

    //We need to clamp the center. The centerPoint is too large
//    qDebug()<<"info";
//    qDebug()<<centerPoint;
//    qDebug()<<xMin<<xMax;
//    qDebug()<<yMin<<yMax;
    //qDebug()<<mapToScene(sceneBounds);
    if(centerPoint.x() > xMax)
        mCenterPoint.setX(xMax);
    else if(centerPoint.x() < xMin)
        mCenterPoint.setX(xMin);
    if(centerPoint.y() > yMax)
        mCenterPoint.setY(yMax);
    else if(centerPoint.y() < yMin)
        mCenterPoint.setY(yMin);


    //Update the scrollbars
    centerOn(mCenterPoint);
}

void TGraphicsView::mouseDoubleClickEvent(QMouseEvent *event){

}

void TGraphicsView::wheelEvent(QWheelEvent *event){
    setTransformationAnchor(QGraphicsView::NoAnchor);
    if (event->delta() > 0){
        //zoom in
        scale(1.15,1.15);
    }
    else{
        //zoom out
        scale(0.9,0.9);
    }
    setTransformationAnchor(QGraphicsView::AnchorViewCenter);
//    setCenter(event->pos());
}

void TGraphicsView::shiftZup(){
    zPlane++;
    repopulateMap();
}

void TGraphicsView::shiftZdown(){
    zPlane--;
    repopulateMap();
}

void TGraphicsView::resizeEvent(QResizeEvent *event){

}
