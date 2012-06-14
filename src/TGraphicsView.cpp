#include "TGraphicsView.h"

#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include <QTextStream>
#include <QScrollBar>
#include <QMouseEvent>
#include <QWheelEvent>
#include <QDebug>
#include <QListIterator>

#include "TArea.h"
#include "TRoom.h"

TGraphicsView::TGraphicsView(QWidget *parent) :
    QGraphicsView(parent)
{
    setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
    scene = new QGraphicsScene(this);
    setScene(scene);
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
    zPlane=0;
    rSize=1;
}

void TGraphicsView::repopulateMap(){
    if (!mpMap)
        return;
    int mRID = mpMap->mRoomId;
    int mAID = mpMap->rooms[mRID]->area;
    TArea * pArea = mpMap->areas[mAID];
    QListIterator<int> it(pArea->rooms);
    while (it.hasNext()){
        //draw rooms
        int nRID = it.next();
        TRoom * pR = mpMap->rooms[nRID];
        int x = pR->x;
        int y = pR->y;
        int z = pR->z;
        if (z != zPlane){
            qDebug()<<nRID<<"out of plane";
            continue;
        }
        scene->addRect(x,y,rSize,rSize,QPen(QColor(255,0,0,255)),QBrush(QColor(255,0,0,255)));
    }
    QRectF sR = scene->sceneRect();
    sR.setX(sR.x()-sR.width()/4);
    sR.setY(sR.y()-sR.height()/4);
    sR.setWidth(sR.width()*1.5);
    sR.setHeight(sR.height()*1.5);
    scene->setSceneRect(sR);
    TRoom * pR = mpMap->rooms[mRID];
    setCenter(QPointF(pR->x, pR->y));
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
        setCenter(mCenterPoint+delta);
    }

}

void TGraphicsView::setCenter(const QPointF &centerPoint){
    //Get the rectangle of the visible area in scene coords
    QRectF visibleArea = mapToScene(rect()).boundingRect();

    //Get the scene area
    QRectF sceneBounds = sceneRect();

    double boundX = visibleArea.width() / 2.0;
    double boundY = visibleArea.height() / 2.0;
    double boundWidth = sceneBounds.width() - 2.0 * boundX;
    double boundHeight = sceneBounds.height() - 2.0 * boundY;

    //The max boundary that the centerPoint can be to
    QRectF bounds(boundX, boundY, boundWidth, boundHeight);

    /*if(bounds.contains(centerPoint)) {
        //We are within the bounds
        mCenterPoint = centerPoint;
    } else {
        //We need to clamp or use the center of the screen
        if(visibleArea.contains(sceneBounds)) {
            //Use the center of scene ie. we can see the whole scene
            mCenterPoint = sceneBounds.center();
        } else {*/

            mCenterPoint = centerPoint;

            //We need to clamp the center. The centerPoint is too large
            /*qDebug()<<"info";
            qDebug()<<centerPoint;
            qDebug()<<bounds;
            qDebug()<<sceneBounds;*/
            //qDebug()<<mapToScene(sceneBounds);
            if(centerPoint.x() > bounds.x() + bounds.width()) {
                mCenterPoint.setX(bounds.x() + bounds.width());
            } else if(centerPoint.x() < bounds.x()) {
                if (centerPoint.x()<sceneBounds.x()/4)
                    mCenterPoint.setX(sceneBounds.x()/4);
                else
                    mCenterPoint.setX((bounds.x()-(bounds.x()-centerPoint.x())));
            }

            if(centerPoint.y() > bounds.y() + bounds.height()) {
                mCenterPoint.setY(bounds.y() + bounds.height());
            } else if(centerPoint.y() < bounds.y()) {
                if (centerPoint.y()<sceneBounds.y()/4)
                    mCenterPoint.setY(sceneBounds.y()/4);
                else
                    mCenterPoint.setY((bounds.y()-(bounds.y()-centerPoint.y())));
            }

//        }
//    }

    //Update the scrollbars
    centerOn(mCenterPoint);
}

void TGraphicsView::mouseDoubleClickEvent(QMouseEvent *event){

}

void TGraphicsView::wheelEvent(QWheelEvent *event){
    if (event->delta() > 0){
        //zoom in
        scale(1.15,1.15);
    }
    else{
        //zoom out
        scale(0.9,0.9);
    }
    //setCenter(event->pos());
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
