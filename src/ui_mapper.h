/********************************************************************************
** Form generated from reading UI file 'mapper.ui'
**
** Created: Sat Oct 22 10:04:25 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPPER_H
#define UI_MAPPER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <T2DMap.h>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_mapper
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    T2DMap *mp2dMap;
    GLWidget *glWidget;
    QToolButton *togglePanel;
    QWidget *panel;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *shiftLeft;
    QPushButton *shiftUp;
    QPushButton *shiftDown;
    QPushButton *shiftRight;
    QPushButton *shiftZup;
    QPushButton *shiftZdown;
    QToolButton *dim2;
    QLabel *label_4;
    QComboBox *showArea;
    QWidget *a;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpinBox *roomSize;
    QLabel *label_3;
    QSpinBox *lineSize;
    QCheckBox *bubbles;
    QCheckBox *grid;
    QCheckBox *showInfo;
    QCheckBox *showRoomIDs;
    QCheckBox *strongHighlight;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QWidget *d3buttons;
    QGridLayout *gridLayout;
    QSlider *zRot;
    QSlider *yRot;
    QSlider *xRot;
    QToolButton *increaseTop;
    QToolButton *increaseBottom;
    QToolButton *reduceBottom;
    QToolButton *reduceTop;
    QToolButton *singleLevel;
    QToolButton *defaultView;
    QToolButton *topView;
    QToolButton *sideView;
    QToolButton *ortho;
    QSlider *scale;

    void setupUi(QWidget *mapper)
    {
        if (mapper->objectName().isEmpty())
            mapper->setObjectName(QString::fromUtf8("mapper"));
        mapper->resize(295, 387);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mapper->sizePolicy().hasHeightForWidth());
        mapper->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(mapper);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(mapper);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(230, 230, 230, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        widget->setPalette(palette);
        widget->setAutoFillBackground(true);
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mp2dMap = new T2DMap(widget);
        mp2dMap->setObjectName(QString::fromUtf8("mp2dMap"));
        sizePolicy.setHeightForWidth(mp2dMap->sizePolicy().hasHeightForWidth());
        mp2dMap->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(mp2dMap);

        glWidget = new GLWidget(widget);
        glWidget->setObjectName(QString::fromUtf8("glWidget"));
        sizePolicy.setHeightForWidth(glWidget->sizePolicy().hasHeightForWidth());
        glWidget->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(glWidget);

        togglePanel = new QToolButton(widget);
        togglePanel->setObjectName(QString::fromUtf8("togglePanel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(togglePanel->sizePolicy().hasHeightForWidth());
        togglePanel->setSizePolicy(sizePolicy1);
        togglePanel->setMaximumSize(QSize(16777215, 15));
        togglePanel->setCheckable(true);
        togglePanel->setChecked(true);

        verticalLayout_2->addWidget(togglePanel);

        panel = new QWidget(widget);
        panel->setObjectName(QString::fromUtf8("panel"));
        sizePolicy1.setHeightForWidth(panel->sizePolicy().hasHeightForWidth());
        panel->setSizePolicy(sizePolicy1);
        panel->setMaximumSize(QSize(16777215, 200));
        panel->setAutoFillBackground(true);
        verticalLayout_5 = new QVBoxLayout(panel);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        widget_4 = new QWidget(panel);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setMinimumSize(QSize(0, 0));
        widget_4->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(widget_4);
        horizontalLayout->setSpacing(1);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget_6 = new QWidget(widget_4);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        sizePolicy1.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy1);
        widget_6->setMaximumSize(QSize(200, 22));
        horizontalLayout_2 = new QHBoxLayout(widget_6);
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        shiftLeft = new QPushButton(widget_6);
        shiftLeft->setObjectName(QString::fromUtf8("shiftLeft"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(shiftLeft->sizePolicy().hasHeightForWidth());
        shiftLeft->setSizePolicy(sizePolicy2);
        shiftLeft->setMinimumSize(QSize(20, 20));
        shiftLeft->setMaximumSize(QSize(30, 20));
        shiftLeft->setBaseSize(QSize(0, 0));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        shiftLeft->setFont(font);
        shiftLeft->setAutoRepeat(true);
        shiftLeft->setAutoRepeatDelay(100);
        shiftLeft->setAutoRepeatInterval(1);

        horizontalLayout_2->addWidget(shiftLeft);

        shiftUp = new QPushButton(widget_6);
        shiftUp->setObjectName(QString::fromUtf8("shiftUp"));
        sizePolicy2.setHeightForWidth(shiftUp->sizePolicy().hasHeightForWidth());
        shiftUp->setSizePolicy(sizePolicy2);
        shiftUp->setMinimumSize(QSize(20, 20));
        shiftUp->setMaximumSize(QSize(30, 20));
        shiftUp->setBaseSize(QSize(0, 0));
        shiftUp->setAutoRepeat(true);
        shiftUp->setAutoRepeatDelay(100);
        shiftUp->setAutoRepeatInterval(1);

        horizontalLayout_2->addWidget(shiftUp);

        shiftDown = new QPushButton(widget_6);
        shiftDown->setObjectName(QString::fromUtf8("shiftDown"));
        sizePolicy2.setHeightForWidth(shiftDown->sizePolicy().hasHeightForWidth());
        shiftDown->setSizePolicy(sizePolicy2);
        shiftDown->setMinimumSize(QSize(20, 20));
        shiftDown->setMaximumSize(QSize(30, 20));
        shiftDown->setBaseSize(QSize(0, 0));
        shiftDown->setAutoRepeat(true);
        shiftDown->setAutoRepeatDelay(100);
        shiftDown->setAutoRepeatInterval(1);

        horizontalLayout_2->addWidget(shiftDown);

        shiftRight = new QPushButton(widget_6);
        shiftRight->setObjectName(QString::fromUtf8("shiftRight"));
        sizePolicy2.setHeightForWidth(shiftRight->sizePolicy().hasHeightForWidth());
        shiftRight->setSizePolicy(sizePolicy2);
        shiftRight->setMinimumSize(QSize(25, 20));
        shiftRight->setMaximumSize(QSize(30, 20));
        shiftRight->setBaseSize(QSize(0, 0));
        shiftRight->setAutoRepeat(true);
        shiftRight->setAutoRepeatDelay(100);
        shiftRight->setAutoRepeatInterval(1);

        horizontalLayout_2->addWidget(shiftRight);

        shiftZup = new QPushButton(widget_6);
        shiftZup->setObjectName(QString::fromUtf8("shiftZup"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(25);
        sizePolicy3.setVerticalStretch(20);
        sizePolicy3.setHeightForWidth(shiftZup->sizePolicy().hasHeightForWidth());
        shiftZup->setSizePolicy(sizePolicy3);
        shiftZup->setMinimumSize(QSize(25, 20));
        shiftZup->setMaximumSize(QSize(30, 20));
        shiftZup->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        shiftZup->setFont(font1);

        horizontalLayout_2->addWidget(shiftZup);

        shiftZdown = new QPushButton(widget_6);
        shiftZdown->setObjectName(QString::fromUtf8("shiftZdown"));
        sizePolicy2.setHeightForWidth(shiftZdown->sizePolicy().hasHeightForWidth());
        shiftZdown->setSizePolicy(sizePolicy2);
        shiftZdown->setMinimumSize(QSize(30, 20));
        shiftZdown->setMaximumSize(QSize(30, 20));
        shiftZdown->setBaseSize(QSize(0, 0));
        shiftZdown->setFont(font1);

        horizontalLayout_2->addWidget(shiftZdown);


        horizontalLayout->addWidget(widget_6);

        dim2 = new QToolButton(widget_4);
        dim2->setObjectName(QString::fromUtf8("dim2"));
        sizePolicy1.setHeightForWidth(dim2->sizePolicy().hasHeightForWidth());
        dim2->setSizePolicy(sizePolicy1);
        dim2->setMaximumSize(QSize(56, 20));

        horizontalLayout->addWidget(dim2);

        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setMaximumSize(QSize(16777215, 20));

        horizontalLayout->addWidget(label_4);

        showArea = new QComboBox(widget_4);
        showArea->setObjectName(QString::fromUtf8("showArea"));
        sizePolicy1.setHeightForWidth(showArea->sizePolicy().hasHeightForWidth());
        showArea->setSizePolicy(sizePolicy1);
        showArea->setMaximumSize(QSize(16777215, 20));
        showArea->setInsertPolicy(QComboBox::InsertAlphabetically);
        showArea->setModelColumn(0);

        horizontalLayout->addWidget(showArea);


        verticalLayout_5->addWidget(widget_4);

        a = new QWidget(panel);
        a->setObjectName(QString::fromUtf8("a"));
        sizePolicy1.setHeightForWidth(a->sizePolicy().hasHeightForWidth());
        a->setSizePolicy(sizePolicy1);
        horizontalLayout_3 = new QHBoxLayout(a);
        horizontalLayout_3->setSpacing(1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(2, 0, 0, 0);
        label_2 = new QLabel(a);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        roomSize = new QSpinBox(a);
        roomSize->setObjectName(QString::fromUtf8("roomSize"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(roomSize->sizePolicy().hasHeightForWidth());
        roomSize->setSizePolicy(sizePolicy4);
        roomSize->setAlignment(Qt::AlignCenter);
        roomSize->setMinimum(1);
        roomSize->setMaximum(10);
        roomSize->setValue(5);

        horizontalLayout_3->addWidget(roomSize);

        label_3 = new QLabel(a);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineSize = new QSpinBox(a);
        lineSize->setObjectName(QString::fromUtf8("lineSize"));
        sizePolicy4.setHeightForWidth(lineSize->sizePolicy().hasHeightForWidth());
        lineSize->setSizePolicy(sizePolicy4);
        lineSize->setAlignment(Qt::AlignCenter);
        lineSize->setMinimum(2);
        lineSize->setMaximum(20);
        lineSize->setValue(7);

        horizontalLayout_3->addWidget(lineSize);

        bubbles = new QCheckBox(a);
        bubbles->setObjectName(QString::fromUtf8("bubbles"));

        horizontalLayout_3->addWidget(bubbles);

        grid = new QCheckBox(a);
        grid->setObjectName(QString::fromUtf8("grid"));

        horizontalLayout_3->addWidget(grid);

        showInfo = new QCheckBox(a);
        showInfo->setObjectName(QString::fromUtf8("showInfo"));
        sizePolicy2.setHeightForWidth(showInfo->sizePolicy().hasHeightForWidth());
        showInfo->setSizePolicy(sizePolicy2);
        showInfo->setMinimumSize(QSize(50, 0));
        showInfo->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(showInfo);

        showRoomIDs = new QCheckBox(a);
        showRoomIDs->setObjectName(QString::fromUtf8("showRoomIDs"));
        sizePolicy4.setHeightForWidth(showRoomIDs->sizePolicy().hasHeightForWidth());
        showRoomIDs->setSizePolicy(sizePolicy4);
        showRoomIDs->setMaximumSize(QSize(16777215, 16777215));
        showRoomIDs->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_3->addWidget(showRoomIDs);

        strongHighlight = new QCheckBox(a);
        strongHighlight->setObjectName(QString::fromUtf8("strongHighlight"));
        sizePolicy1.setHeightForWidth(strongHighlight->sizePolicy().hasHeightForWidth());
        strongHighlight->setSizePolicy(sizePolicy1);
        strongHighlight->setMaximumSize(QSize(16777215, 16777215));
        strongHighlight->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_3->addWidget(strongHighlight);


        verticalLayout_5->addWidget(a);

        widget_2 = new QWidget(panel);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        d3buttons = new QWidget(widget_3);
        d3buttons->setObjectName(QString::fromUtf8("d3buttons"));
        sizePolicy1.setHeightForWidth(d3buttons->sizePolicy().hasHeightForWidth());
        d3buttons->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(d3buttons);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(2);
        gridLayout->setVerticalSpacing(0);
        zRot = new QSlider(d3buttons);
        zRot->setObjectName(QString::fromUtf8("zRot"));
        zRot->setMaximumSize(QSize(16777215, 25));
        zRot->setMinimum(-360);
        zRot->setMaximum(360);
        zRot->setPageStep(1);
        zRot->setValue(10);
        zRot->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(zRot, 4, 1, 1, 1);

        yRot = new QSlider(d3buttons);
        yRot->setObjectName(QString::fromUtf8("yRot"));
        yRot->setMaximumSize(QSize(16777215, 25));
        yRot->setMinimum(-360);
        yRot->setMaximum(360);
        yRot->setPageStep(1);
        yRot->setValue(5);
        yRot->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(yRot, 4, 2, 1, 1);

        xRot = new QSlider(d3buttons);
        xRot->setObjectName(QString::fromUtf8("xRot"));
        xRot->setMaximumSize(QSize(16777215, 25));
        xRot->setMinimum(-100);
        xRot->setMaximum(100);
        xRot->setPageStep(1);
        xRot->setValue(1);
        xRot->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(xRot, 4, 3, 1, 1);

        increaseTop = new QToolButton(d3buttons);
        increaseTop->setObjectName(QString::fromUtf8("increaseTop"));
        sizePolicy1.setHeightForWidth(increaseTop->sizePolicy().hasHeightForWidth());
        increaseTop->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(increaseTop, 1, 3, 1, 1);

        increaseBottom = new QToolButton(d3buttons);
        increaseBottom->setObjectName(QString::fromUtf8("increaseBottom"));
        sizePolicy1.setHeightForWidth(increaseBottom->sizePolicy().hasHeightForWidth());
        increaseBottom->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(increaseBottom, 1, 1, 1, 1);

        reduceBottom = new QToolButton(d3buttons);
        reduceBottom->setObjectName(QString::fromUtf8("reduceBottom"));
        sizePolicy1.setHeightForWidth(reduceBottom->sizePolicy().hasHeightForWidth());
        reduceBottom->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(reduceBottom, 1, 2, 1, 1);

        reduceTop = new QToolButton(d3buttons);
        reduceTop->setObjectName(QString::fromUtf8("reduceTop"));
        sizePolicy1.setHeightForWidth(reduceTop->sizePolicy().hasHeightForWidth());
        reduceTop->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(reduceTop, 1, 4, 1, 1);

        singleLevel = new QToolButton(d3buttons);
        singleLevel->setObjectName(QString::fromUtf8("singleLevel"));
        sizePolicy1.setHeightForWidth(singleLevel->sizePolicy().hasHeightForWidth());
        singleLevel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(singleLevel, 1, 0, 1, 1);

        defaultView = new QToolButton(d3buttons);
        defaultView->setObjectName(QString::fromUtf8("defaultView"));
        sizePolicy1.setHeightForWidth(defaultView->sizePolicy().hasHeightForWidth());
        defaultView->setSizePolicy(sizePolicy1);
        defaultView->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(defaultView, 0, 0, 1, 1);

        topView = new QToolButton(d3buttons);
        topView->setObjectName(QString::fromUtf8("topView"));
        sizePolicy1.setHeightForWidth(topView->sizePolicy().hasHeightForWidth());
        topView->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(topView, 0, 1, 1, 1);

        sideView = new QToolButton(d3buttons);
        sideView->setObjectName(QString::fromUtf8("sideView"));
        sizePolicy1.setHeightForWidth(sideView->sizePolicy().hasHeightForWidth());
        sideView->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(sideView, 0, 2, 1, 1);

        ortho = new QToolButton(d3buttons);
        ortho->setObjectName(QString::fromUtf8("ortho"));
        sizePolicy1.setHeightForWidth(ortho->sizePolicy().hasHeightForWidth());
        ortho->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(ortho, 0, 3, 1, 1);

        scale = new QSlider(d3buttons);
        scale->setObjectName(QString::fromUtf8("scale"));
        scale->setMaximumSize(QSize(16777215, 25));
        scale->setMinimum(0);
        scale->setMaximum(1000);
        scale->setPageStep(1);
        scale->setValue(1);
        scale->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(scale, 4, 0, 1, 1);


        verticalLayout_3->addWidget(d3buttons);


        verticalLayout_4->addWidget(widget_3);


        verticalLayout_5->addWidget(widget_2);


        verticalLayout_2->addWidget(panel);


        verticalLayout->addWidget(widget);


        retranslateUi(mapper);

        QMetaObject::connectSlotsByName(mapper);
    } // setupUi

    void retranslateUi(QWidget *mapper)
    {
        togglePanel->setText(QApplication::translate("mapper", "^", 0, QApplication::UnicodeUTF8));
        shiftLeft->setText(QApplication::translate("mapper", "\342\227\200", 0, QApplication::UnicodeUTF8));
        shiftUp->setText(QApplication::translate("mapper", "\342\226\274", 0, QApplication::UnicodeUTF8));
        shiftDown->setText(QApplication::translate("mapper", "\342\226\262", 0, QApplication::UnicodeUTF8));
        shiftRight->setText(QApplication::translate("mapper", "\342\226\272", 0, QApplication::UnicodeUTF8));
        shiftZup->setText(QApplication::translate("mapper", "+", 0, QApplication::UnicodeUTF8));
        shiftZdown->setText(QApplication::translate("mapper", "-", 0, QApplication::UnicodeUTF8));
        dim2->setText(QApplication::translate("mapper", "2D/3D", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("mapper", "Area:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("mapper", "Rooms", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("mapper", "Exits", 0, QApplication::UnicodeUTF8));
        bubbles->setText(QApplication::translate("mapper", "Round", 0, QApplication::UnicodeUTF8));
        grid->setText(QApplication::translate("mapper", "Grid", 0, QApplication::UnicodeUTF8));
        showInfo->setText(QApplication::translate("mapper", "Info", 0, QApplication::UnicodeUTF8));
        showRoomIDs->setText(QApplication::translate("mapper", "Room IDs", 0, QApplication::UnicodeUTF8));
        strongHighlight->setText(QApplication::translate("mapper", "Strong position highlight", 0, QApplication::UnicodeUTF8));
        increaseTop->setText(QApplication::translate("mapper", "top + 1", 0, QApplication::UnicodeUTF8));
        increaseBottom->setText(QApplication::translate("mapper", "bottom + 1", 0, QApplication::UnicodeUTF8));
        reduceBottom->setText(QApplication::translate("mapper", "bottom -1", 0, QApplication::UnicodeUTF8));
        reduceTop->setText(QApplication::translate("mapper", "top - 1", 0, QApplication::UnicodeUTF8));
        singleLevel->setText(QApplication::translate("mapper", "1 level", 0, QApplication::UnicodeUTF8));
        defaultView->setText(QApplication::translate("mapper", "default", 0, QApplication::UnicodeUTF8));
        topView->setText(QApplication::translate("mapper", "top view", 0, QApplication::UnicodeUTF8));
        sideView->setText(QApplication::translate("mapper", "side view", 0, QApplication::UnicodeUTF8));
        ortho->setText(QApplication::translate("mapper", "all levels", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(mapper);
    } // retranslateUi

};

namespace Ui {
    class mapper: public Ui_mapper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPPER_H
