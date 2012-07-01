#ifndef TGRAPHICSVIEW_H
#define TGRAPHICSVIEW_H

#include <QAction>
#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QGraphicsSceneMouseEvent>
#include <TMap.h>
#include <Host.h>
class TGraphicsScene;
class TGraphicsItemRoom;
class TGraphicsItemLine;

class TGraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    explicit TGraphicsView(QWidget *parent = 0);
    void repopulateMap();
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
//    void mouseDoubleClickEvent(QMouseEvent *event);
    void wheelEvent(QWheelEvent *event);
//    void resizeEvent(QResizeEvent *event);
    void setCenter(const QPointF& centerPoint);
    void setCenter(int);
    void makeMargins();
    void drawPlayerLocation(int);
    TMap * mpMap;
    Host * mpHost;
    TGraphicsScene * scene;
    int x;
    int y;
    int z;
    int zPlane;
    int rSize;
    int eSize;
    bool mLeftDown;
    bool mRightDown;
    QPoint lastPoint;
    QPointF mCenterPoint;
    QMap<int, QMap<int, TGraphicsScene *> > scenes;
    QMap<int, QGraphicsEllipseItem *> pLocs;
    int cAID;
    QGraphicsItem * selectedItem;
    QGraphicsItemGroup * selectedItemGroup;
signals:

public slots:
    void shiftZup();
    void shiftZdown();

};

class TGraphicsScene : public QGraphicsScene{
    Q_OBJECT
public:
    explicit TGraphicsScene(QObject * parent = 0);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mouseGrabberItem();
    void contextMenuEvent(QGraphicsSceneContextMenuEvent *event);
    bool mLeftDown;
    bool mRightDown;
    TGraphicsItemRoom * roomPressed;
    TGraphicsItemRoom * roomReleased;
    TGraphicsItemLine * linePressed;
    TGraphicsItemLine * lineReleased;
    QPoint mPressedAt;
    QPoint mReleasedAt;
    QPointF lastPoint;
    TGraphicsView * view;
public slots:
    void slot_roomMenuClicked(QAction*);
    void slot_sceneMenuClicked(QAction*);
    void slot_lineMenuClicked(QAction*);
};

class TGraphicsItemRoom : public QGraphicsItem{
public:
    TGraphicsItemRoom(QGraphicsItem *parent = 0, TGraphicsScene *s = 0, TRoom * = 0);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void contextMenuEvent(QGraphicsSceneContextMenuEvent *event);
    void setRect(qreal w, qreal h);
    void setEllipse(qreal major, qreal minor);
    void setCircle(qreal r);
    void getType();
    TRoom * room;
    int roomType;
    bool selected;
    qreal rWidth;
    qreal rHeight;
    qreal majorAxis;
    qreal minorAxis;
    qreal radius;
    TGraphicsScene * scene;
};

class TGraphicsItemLine : public QGraphicsPathItem{
public:
    TGraphicsItemLine(QGraphicsItem *parent = 0, TGraphicsScene *s = 0, TRoom * = 0, TRoom * = 0);
    //QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
//    void mousePressEvent(QGraphicsSceneMouseEvent *event);
//    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
//    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
//    void contextMenuEvent(QGraphicsSceneContextMenuEvent *event);
    TRoom * roomFrom;
    TRoom * roomTo;
    bool selected;
    TGraphicsScene * scene;
    QList<QPointF> points;
};

#endif // TGRAPHICSVIEW_H
