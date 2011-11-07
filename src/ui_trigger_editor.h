/********************************************************************************
** Form generated from reading UI file 'trigger_editor.ui'
**
** Created: Sat Oct 29 20:50:44 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIGGER_EDITOR_H
#define UI_TRIGGER_EDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QStatusBar>
#include <QtGui/QToolButton>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "TTreeWidget.h"

QT_BEGIN_NAMESPACE

class Ui_trigger_editor
{
public:
    QAction *actionAlias;
    QAction *toolButton_add_trigger_menu;
    QAction *actionVariable;
    QAction *actionAlias_2;
    QAction *toolButton_delete_trigger_menu;
    QAction *actionVariable_2;
    QAction *toolButton_add_trigger_group_menu;
    QAction *actionGroup;
    QAction *actionAliases;
    QAction *actionTriggers;
    QAction *actionVariables;
    QAction *actionScript_options;
    QAction *toolButton_search_area_2_menu;
    QAction *actionExpert_mode_menu;
    QWidget *randomwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_8;
    QSplitter *splitter;
    QFrame *left_frame;
    QVBoxLayout *verticalLayout_3;
    TTreeWidget *treeWidget_timers;
    TTreeWidget *treeWidget_keys;
    TTreeWidget *treeWidget_alias;
    TTreeWidget *treeWidget_actions;
    TTreeWidget *treeWidget_scripts;
    TTreeWidget *treeWidget;
    QWidget *mpSearchArea;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *comboBox_search_triggers;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_7;
    QToolButton *messageAreaCloseButton;
    QSpacerItem *verticalSpacer;
    QTreeWidget *tree_widget_search_results_main;
    QFrame *right_frame;
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter_3;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_5;
    QWidget *mainArea;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_4;
    QWidget *popupArea;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *trigger_editor)
    {
        if (trigger_editor->objectName().isEmpty())
            trigger_editor->setObjectName(QString::fromUtf8("trigger_editor"));
        trigger_editor->resize(636, 688);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(trigger_editor->sizePolicy().hasHeightForWidth());
        trigger_editor->setSizePolicy(sizePolicy);
        actionAlias = new QAction(trigger_editor);
        actionAlias->setObjectName(QString::fromUtf8("actionAlias"));
        toolButton_add_trigger_menu = new QAction(trigger_editor);
        toolButton_add_trigger_menu->setObjectName(QString::fromUtf8("toolButton_add_trigger_menu"));
        actionVariable = new QAction(trigger_editor);
        actionVariable->setObjectName(QString::fromUtf8("actionVariable"));
        actionAlias_2 = new QAction(trigger_editor);
        actionAlias_2->setObjectName(QString::fromUtf8("actionAlias_2"));
        toolButton_delete_trigger_menu = new QAction(trigger_editor);
        toolButton_delete_trigger_menu->setObjectName(QString::fromUtf8("toolButton_delete_trigger_menu"));
        actionVariable_2 = new QAction(trigger_editor);
        actionVariable_2->setObjectName(QString::fromUtf8("actionVariable_2"));
        toolButton_add_trigger_group_menu = new QAction(trigger_editor);
        toolButton_add_trigger_group_menu->setObjectName(QString::fromUtf8("toolButton_add_trigger_group_menu"));
        actionGroup = new QAction(trigger_editor);
        actionGroup->setObjectName(QString::fromUtf8("actionGroup"));
        actionAliases = new QAction(trigger_editor);
        actionAliases->setObjectName(QString::fromUtf8("actionAliases"));
        actionAliases->setCheckable(true);
        actionTriggers = new QAction(trigger_editor);
        actionTriggers->setObjectName(QString::fromUtf8("actionTriggers"));
        actionTriggers->setCheckable(true);
        actionVariables = new QAction(trigger_editor);
        actionVariables->setObjectName(QString::fromUtf8("actionVariables"));
        actionVariables->setCheckable(true);
        actionScript_options = new QAction(trigger_editor);
        actionScript_options->setObjectName(QString::fromUtf8("actionScript_options"));
        actionScript_options->setCheckable(true);
        toolButton_search_area_2_menu = new QAction(trigger_editor);
        toolButton_search_area_2_menu->setObjectName(QString::fromUtf8("toolButton_search_area_2_menu"));
        toolButton_search_area_2_menu->setCheckable(true);
        actionExpert_mode_menu = new QAction(trigger_editor);
        actionExpert_mode_menu->setObjectName(QString::fromUtf8("actionExpert_mode_menu"));
        randomwidget = new QWidget(trigger_editor);
        randomwidget->setObjectName(QString::fromUtf8("randomwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(randomwidget->sizePolicy().hasHeightForWidth());
        randomwidget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(randomwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(randomwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 0, 3, 0);
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        verticalLayout_8 = new QVBoxLayout(widget_3);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        splitter = new QSplitter(widget_3);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        sizePolicy1.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy1);
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setLineWidth(0);
        splitter->setMidLineWidth(5);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(true);
        splitter->setHandleWidth(5);
        left_frame = new QFrame(splitter);
        left_frame->setObjectName(QString::fromUtf8("left_frame"));
        sizePolicy1.setHeightForWidth(left_frame->sizePolicy().hasHeightForWidth());
        left_frame->setSizePolicy(sizePolicy1);
        left_frame->setMinimumSize(QSize(0, 0));
        left_frame->setBaseSize(QSize(0, 0));
        left_frame->setFrameShape(QFrame::NoFrame);
        left_frame->setFrameShadow(QFrame::Plain);
        left_frame->setLineWidth(1);
        verticalLayout_3 = new QVBoxLayout(left_frame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        treeWidget_timers = new TTreeWidget(left_frame);
        treeWidget_timers->setObjectName(QString::fromUtf8("treeWidget_timers"));
        treeWidget_timers->setFrameShape(QFrame::NoFrame);
        treeWidget_timers->setMidLineWidth(4);
        treeWidget_timers->setDragDropMode(QAbstractItemView::InternalMove);
        treeWidget_timers->setAlternatingRowColors(false);
        treeWidget_timers->setIconSize(QSize(32, 32));
        treeWidget_timers->setRootIsDecorated(true);
        treeWidget_timers->setAllColumnsShowFocus(true);
        treeWidget_timers->setWordWrap(false);
        treeWidget_timers->setHeaderHidden(false);
        treeWidget_timers->setExpandsOnDoubleClick(false);

        verticalLayout_3->addWidget(treeWidget_timers);

        treeWidget_keys = new TTreeWidget(left_frame);
        treeWidget_keys->setObjectName(QString::fromUtf8("treeWidget_keys"));
        treeWidget_keys->setFrameShape(QFrame::NoFrame);
        treeWidget_keys->setMidLineWidth(4);
        treeWidget_keys->setDragDropMode(QAbstractItemView::InternalMove);
        treeWidget_keys->setAlternatingRowColors(false);
        treeWidget_keys->setIconSize(QSize(32, 32));
        treeWidget_keys->setRootIsDecorated(true);
        treeWidget_keys->setSortingEnabled(false);
        treeWidget_keys->setAnimated(true);
        treeWidget_keys->setAllColumnsShowFocus(true);
        treeWidget_keys->setWordWrap(false);
        treeWidget_keys->setHeaderHidden(false);
        treeWidget_keys->setExpandsOnDoubleClick(false);

        verticalLayout_3->addWidget(treeWidget_keys);

        treeWidget_alias = new TTreeWidget(left_frame);
        treeWidget_alias->setObjectName(QString::fromUtf8("treeWidget_alias"));
        treeWidget_alias->setFrameShape(QFrame::NoFrame);
        treeWidget_alias->setMidLineWidth(4);
        treeWidget_alias->setDragDropMode(QAbstractItemView::InternalMove);
        treeWidget_alias->setAlternatingRowColors(false);
        treeWidget_alias->setIconSize(QSize(32, 32));
        treeWidget_alias->setRootIsDecorated(true);
        treeWidget_alias->setAnimated(true);
        treeWidget_alias->setAllColumnsShowFocus(true);
        treeWidget_alias->setWordWrap(false);
        treeWidget_alias->setHeaderHidden(false);
        treeWidget_alias->setExpandsOnDoubleClick(false);

        verticalLayout_3->addWidget(treeWidget_alias);

        treeWidget_actions = new TTreeWidget(left_frame);
        treeWidget_actions->setObjectName(QString::fromUtf8("treeWidget_actions"));
        treeWidget_actions->setFrameShape(QFrame::NoFrame);
        treeWidget_actions->setMidLineWidth(4);
        treeWidget_actions->setDragDropMode(QAbstractItemView::InternalMove);
        treeWidget_actions->setAlternatingRowColors(false);
        treeWidget_actions->setIconSize(QSize(32, 32));
        treeWidget_actions->setRootIsDecorated(true);
        treeWidget_actions->setAnimated(true);
        treeWidget_actions->setAllColumnsShowFocus(true);
        treeWidget_actions->setWordWrap(false);
        treeWidget_actions->setHeaderHidden(false);
        treeWidget_actions->setExpandsOnDoubleClick(false);

        verticalLayout_3->addWidget(treeWidget_actions);

        treeWidget_scripts = new TTreeWidget(left_frame);
        treeWidget_scripts->setObjectName(QString::fromUtf8("treeWidget_scripts"));
        treeWidget_scripts->setFrameShape(QFrame::NoFrame);
        treeWidget_scripts->setMidLineWidth(4);
        treeWidget_scripts->setDragDropMode(QAbstractItemView::InternalMove);
        treeWidget_scripts->setAlternatingRowColors(false);
        treeWidget_scripts->setIconSize(QSize(32, 32));
        treeWidget_scripts->setRootIsDecorated(true);
        treeWidget_scripts->setAnimated(true);
        treeWidget_scripts->setAllColumnsShowFocus(true);
        treeWidget_scripts->setWordWrap(false);
        treeWidget_scripts->setHeaderHidden(false);
        treeWidget_scripts->setExpandsOnDoubleClick(false);

        verticalLayout_3->addWidget(treeWidget_scripts);

        treeWidget = new TTreeWidget(left_frame);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setFrameShape(QFrame::NoFrame);
        treeWidget->setMidLineWidth(4);
        treeWidget->setDragDropMode(QAbstractItemView::InternalMove);
        treeWidget->setAlternatingRowColors(false);
        treeWidget->setIconSize(QSize(32, 32));
        treeWidget->setRootIsDecorated(true);
        treeWidget->setSortingEnabled(false);
        treeWidget->setAnimated(true);
        treeWidget->setAllColumnsShowFocus(true);
        treeWidget->setWordWrap(false);
        treeWidget->setHeaderHidden(false);
        treeWidget->setExpandsOnDoubleClick(false);

        verticalLayout_3->addWidget(treeWidget);

        mpSearchArea = new QWidget(left_frame);
        mpSearchArea->setObjectName(QString::fromUtf8("mpSearchArea"));
        verticalLayout_6 = new QVBoxLayout(mpSearchArea);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        widget_5 = new QWidget(mpSearchArea);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy2);
        widget_5->setMaximumSize(QSize(16777215, 30));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(255, 234, 218, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        widget_5->setPalette(palette);
        widget_5->setAutoFillBackground(true);
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        widget_7 = new QWidget(widget_5);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_3 = new QHBoxLayout(widget_7);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(widget_7);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setMinimumSize(QSize(60, 0));

        horizontalLayout_3->addWidget(label);

        comboBox_search_triggers = new QComboBox(widget_7);
        comboBox_search_triggers->setObjectName(QString::fromUtf8("comboBox_search_triggers"));
        sizePolicy2.setHeightForWidth(comboBox_search_triggers->sizePolicy().hasHeightForWidth());
        comboBox_search_triggers->setSizePolicy(sizePolicy2);
        comboBox_search_triggers->setMinimumSize(QSize(50, 20));
        comboBox_search_triggers->setMaximumSize(QSize(16777215, 28));
        comboBox_search_triggers->setEditable(true);
        comboBox_search_triggers->setInsertPolicy(QComboBox::InsertAtTop);
        comboBox_search_triggers->setDuplicatesEnabled(true);
        comboBox_search_triggers->setFrame(false);

        horizontalLayout_3->addWidget(comboBox_search_triggers);

        horizontalSpacer_2 = new QSpacerItem(10, 13, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        horizontalLayout_5->addWidget(widget_7);

        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy4);
        widget_6->setMinimumSize(QSize(16, 0));
        widget_6->setMaximumSize(QSize(16, 16777215));
        verticalLayout_7 = new QVBoxLayout(widget_6);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        messageAreaCloseButton = new QToolButton(widget_6);
        messageAreaCloseButton->setObjectName(QString::fromUtf8("messageAreaCloseButton"));
        messageAreaCloseButton->setMinimumSize(QSize(16, 16));
        messageAreaCloseButton->setMaximumSize(QSize(16, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Sans Serif"));
        font.setPointSize(9);
        messageAreaCloseButton->setFont(font);
        messageAreaCloseButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        messageAreaCloseButton->setIcon(icon);
        messageAreaCloseButton->setAutoRaise(true);

        verticalLayout_7->addWidget(messageAreaCloseButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);


        horizontalLayout_5->addWidget(widget_6);


        verticalLayout_6->addWidget(widget_5);

        tree_widget_search_results_main = new QTreeWidget(mpSearchArea);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(2, QString::fromUtf8("3"));
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        tree_widget_search_results_main->setHeaderItem(__qtreewidgetitem);
        tree_widget_search_results_main->setObjectName(QString::fromUtf8("tree_widget_search_results_main"));
        tree_widget_search_results_main->setFrameShape(QFrame::NoFrame);
        tree_widget_search_results_main->setMidLineWidth(4);
        tree_widget_search_results_main->setAlternatingRowColors(false);
        tree_widget_search_results_main->setIconSize(QSize(16, 16));
        tree_widget_search_results_main->setTextElideMode(Qt::ElideRight);
        tree_widget_search_results_main->setRootIsDecorated(true);
        tree_widget_search_results_main->setUniformRowHeights(true);
        tree_widget_search_results_main->setSortingEnabled(true);
        tree_widget_search_results_main->setAnimated(true);
        tree_widget_search_results_main->setHeaderHidden(false);
        tree_widget_search_results_main->setColumnCount(3);
        tree_widget_search_results_main->header()->setVisible(true);
        tree_widget_search_results_main->header()->setDefaultSectionSize(80);
        tree_widget_search_results_main->header()->setMinimumSectionSize(20);

        verticalLayout_6->addWidget(tree_widget_search_results_main);


        verticalLayout_3->addWidget(mpSearchArea);

        splitter->addWidget(left_frame);
        right_frame = new QFrame(splitter);
        right_frame->setObjectName(QString::fromUtf8("right_frame"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(right_frame->sizePolicy().hasHeightForWidth());
        right_frame->setSizePolicy(sizePolicy5);
        right_frame->setBaseSize(QSize(0, 0));
        QFont font1;
        font1.setStyleStrategy(QFont::PreferAntialias);
        right_frame->setFont(font1);
        right_frame->setFrameShape(QFrame::NoFrame);
        right_frame->setFrameShadow(QFrame::Plain);
        right_frame->setLineWidth(1);
        horizontalLayout_2 = new QHBoxLayout(right_frame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        splitter_3 = new QSplitter(right_frame);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        sizePolicy1.setHeightForWidth(splitter_3->sizePolicy().hasHeightForWidth());
        splitter_3->setSizePolicy(sizePolicy1);
        splitter_3->setMinimumSize(QSize(0, 0));
        splitter_3->setMaximumSize(QSize(16777215, 16777215));
        splitter_3->setFont(font1);
        splitter_3->setFrameShape(QFrame::NoFrame);
        splitter_3->setLineWidth(9);
        splitter_3->setOrientation(Qt::Vertical);
        splitter_3->setHandleWidth(5);
        splitter_3->setChildrenCollapsible(true);
        frame_9 = new QFrame(splitter_3);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        sizePolicy1.setHeightForWidth(frame_9->sizePolicy().hasHeightForWidth());
        frame_9->setSizePolicy(sizePolicy1);
        frame_9->setMinimumSize(QSize(0, 0));
        frame_9->setBaseSize(QSize(0, 0));
        frame_9->setAutoFillBackground(false);
        frame_9->setFrameShape(QFrame::NoFrame);
        frame_9->setFrameShadow(QFrame::Plain);
        verticalLayout_5 = new QVBoxLayout(frame_9);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        mainArea = new QWidget(frame_9);
        mainArea->setObjectName(QString::fromUtf8("mainArea"));
        sizePolicy1.setHeightForWidth(mainArea->sizePolicy().hasHeightForWidth());
        mainArea->setSizePolicy(sizePolicy1);
        mainArea->setAutoFillBackground(false);

        verticalLayout_5->addWidget(mainArea);

        splitter_3->addWidget(frame_9);
        frame_4 = new QFrame(splitter_3);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setEnabled(true);
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy6);
        frame_4->setMinimumSize(QSize(0, 0));
        frame_4->setMaximumSize(QSize(16777215, 175));
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Plain);
        frame_4->setMidLineWidth(4);
        verticalLayout_4 = new QVBoxLayout(frame_4);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        popupArea = new QWidget(frame_4);
        popupArea->setObjectName(QString::fromUtf8("popupArea"));
        sizePolicy1.setHeightForWidth(popupArea->sizePolicy().hasHeightForWidth());
        popupArea->setSizePolicy(sizePolicy1);
        popupArea->setMinimumSize(QSize(0, 0));
        popupArea->setMaximumSize(QSize(16777215, 16777215));
        popupArea->setFont(font1);

        verticalLayout_4->addWidget(popupArea);

        splitter_3->addWidget(frame_4);

        horizontalLayout_2->addWidget(splitter_3);

        splitter->addWidget(right_frame);

        verticalLayout_8->addWidget(splitter);


        verticalLayout_2->addWidget(widget_3);


        gridLayout_2->addWidget(widget_2, 0, 0, 1, 1);


        verticalLayout->addWidget(widget);

        trigger_editor->setCentralWidget(randomwidget);
        statusbar = new QStatusBar(trigger_editor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setEnabled(false);
        QSizePolicy sizePolicy7(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(statusbar->sizePolicy().hasHeightForWidth());
        statusbar->setSizePolicy(sizePolicy7);
        statusbar->setMaximumSize(QSize(16777215, 0));
        trigger_editor->setStatusBar(statusbar);

        retranslateUi(trigger_editor);

        QMetaObject::connectSlotsByName(trigger_editor);
    } // setupUi

    void retranslateUi(QMainWindow *trigger_editor)
    {
        trigger_editor->setWindowTitle(QApplication::translate("trigger_editor", "Script editor", 0, QApplication::UnicodeUTF8));
        actionAlias->setText(QApplication::translate("trigger_editor", "Alias", 0, QApplication::UnicodeUTF8));
        toolButton_add_trigger_menu->setText(QApplication::translate("trigger_editor", "Trigger", 0, QApplication::UnicodeUTF8));
        actionVariable->setText(QApplication::translate("trigger_editor", "Variable", 0, QApplication::UnicodeUTF8));
        actionAlias_2->setText(QApplication::translate("trigger_editor", "Alias", 0, QApplication::UnicodeUTF8));
        toolButton_delete_trigger_menu->setText(QApplication::translate("trigger_editor", "Trigger", 0, QApplication::UnicodeUTF8));
        actionVariable_2->setText(QApplication::translate("trigger_editor", "Variable", 0, QApplication::UnicodeUTF8));
        toolButton_add_trigger_group_menu->setText(QApplication::translate("trigger_editor", "Group", 0, QApplication::UnicodeUTF8));
        actionGroup->setText(QApplication::translate("trigger_editor", "Group", 0, QApplication::UnicodeUTF8));
        actionAliases->setText(QApplication::translate("trigger_editor", "Aliases", 0, QApplication::UnicodeUTF8));
        actionTriggers->setText(QApplication::translate("trigger_editor", "Triggers", 0, QApplication::UnicodeUTF8));
        actionVariables->setText(QApplication::translate("trigger_editor", "Variables", 0, QApplication::UnicodeUTF8));
        actionScript_options->setText(QApplication::translate("trigger_editor", "Script options", 0, QApplication::UnicodeUTF8));
        toolButton_search_area_2_menu->setText(QApplication::translate("trigger_editor", "Search results", 0, QApplication::UnicodeUTF8));
        actionExpert_mode_menu->setText(QApplication::translate("trigger_editor", "Expert mode", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_timers->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("trigger_editor", "1", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget_keys->headerItem();
        ___qtreewidgetitem1->setText(0, QApplication::translate("trigger_editor", "1", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget_alias->headerItem();
        ___qtreewidgetitem2->setText(0, QApplication::translate("trigger_editor", "1", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget_actions->headerItem();
        ___qtreewidgetitem3->setText(0, QApplication::translate("trigger_editor", "1", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = treeWidget_scripts->headerItem();
        ___qtreewidgetitem4->setText(0, QApplication::translate("trigger_editor", "1", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->headerItem();
        ___qtreewidgetitem5->setText(0, QApplication::translate("trigger_editor", "1", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("trigger_editor", "Search:", 0, QApplication::UnicodeUTF8));
        messageAreaCloseButton->setText(QApplication::translate("trigger_editor", "...", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem6 = tree_widget_search_results_main->headerItem();
        ___qtreewidgetitem6->setText(0, QApplication::translate("trigger_editor", "1", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class trigger_editor: public Ui_trigger_editor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIGGER_EDITOR_H
