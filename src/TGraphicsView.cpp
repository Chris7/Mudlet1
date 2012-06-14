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
    centerOn(QPointF(500.0, 500.0)); //A modified version of centerOn(), handles special cases
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
    TRoom * pR = mpMap->rooms[mRID];
    centerOn(QPointF(pR->x, pR->y));
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
    qDebug()<<event->buttons();
    if (event->buttons() & Qt::LeftButton)
        mLeftDown = true;
    if (event->buttons() & Qt::RightButton)
        mRightDown = true;
}

void TGraphicsView::mouseMoveEvent(QMouseEvent *event){
    if (mLeftDown){
        QPointF delta = mapToScene(lastPoint) - mapToScene(event->pos());
        lastPoint = event->pos();
        centerOn(lastPoint);
    }

}

void TGraphicsView::setCenter(const QPointF &centerPoint){
//    centerOn
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
