#ifndef TGRAPHICSVIEW_H
#define TGRAPHICSVIEW_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <TMap.h>
#include <Host.h>

class TGraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    explicit TGraphicsView(QWidget *parent = 0);
    void repopulateMap();
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseDoubleClickEvent(QMouseEvent *event);
    void wheelEvent(QWheelEvent *event);
    void resizeEvent(QResizeEvent *event);
    void setCenter(const QPointF& centerPoint);
    void setCenter(int);
    TMap * mpMap;
    Host * mpHost;
    QGraphicsScene * scene;
    int x;
    int y;
    int z;
    int zPlane;
    int rSize;
    int eSize;
    bool mLeftDown;
    bool mRightDown;
    QPoint mPressedAt;
    QPoint mReleasedAt;
    QPoint lastPoint;
    QPointF mCenterPoint;
signals:
    
public slots:
    void shiftZup();
    void shiftZdown();
    
};

#endif // TGRAPHICSVIEW_H
