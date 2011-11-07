/********************************************************************************
** Form generated from reading UI file 'triggers_main_area.ui'
**
** Created: Sat Oct 29 20:50:44 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIGGERS_MAIN_AREA_H
#define UI_TRIGGERS_MAIN_AREA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_trigger_main_area
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_trigger_name;
    QLabel *label_5;
    QLineEdit *trigger_command;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *patternArea;
    QHBoxLayout *horizontalLayout_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *checkBox_stayOpen;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox_stayOpen;
    QLabel *label_6;
    QGroupBox *soundTrigger;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_16;
    QLineEdit *lineEdit_soundFile;
    QPushButton *pushButtonSound;
    QSpacerItem *verticalSpacer;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_13;
    QGridLayout *gridLayout_5;
    QGroupBox *checkBox_multlinetrigger;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpinBox *spinBox_linemargin;
    QWidget *widget_12;
    QGridLayout *gridLayout_9;
    QGroupBox *filterTrigger;
    QGridLayout *gridLayout_6;
    QLabel *label_15;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *perlSlashGOption;
    QGridLayout *gridLayout_7;
    QLabel *label_17;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *colorizerTrigger;
    QGridLayout *gridLayout;
    QPushButton *pushButtonFgColor;
    QLabel *label_9;
    QPushButton *pushButtonBgColor;
    QLabel *label_10;

    void setupUi(QWidget *trigger_main_area)
    {
        if (trigger_main_area->objectName().isEmpty())
            trigger_main_area->setObjectName(QString::fromUtf8("trigger_main_area"));
        trigger_main_area->resize(592, 230);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(trigger_main_area->sizePolicy().hasHeightForWidth());
        trigger_main_area->setSizePolicy(sizePolicy);
        trigger_main_area->setMinimumSize(QSize(0, 230));
        trigger_main_area->setMaximumSize(QSize(16777215, 240));
        verticalLayout_2 = new QVBoxLayout(trigger_main_area);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_6 = new QWidget(trigger_main_area);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy1);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(225, 255, 254, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        widget_6->setPalette(palette);
        widget_6->setAutoFillBackground(true);
        horizontalLayout_5 = new QHBoxLayout(widget_6);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(6, 2, 6, 2);
        label_4 = new QLabel(widget_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(51, 0));
        label_4->setMaximumSize(QSize(51, 16777215));

        horizontalLayout_5->addWidget(label_4);

        lineEdit_trigger_name = new QLineEdit(widget_6);
        lineEdit_trigger_name->setObjectName(QString::fromUtf8("lineEdit_trigger_name"));
        lineEdit_trigger_name->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_5->addWidget(lineEdit_trigger_name);

        label_5 = new QLabel(widget_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        trigger_command = new QLineEdit(widget_6);
        trigger_command->setObjectName(QString::fromUtf8("trigger_command"));
        trigger_command->setMinimumSize(QSize(0, 0));

        horizontalLayout_5->addWidget(trigger_command);


        verticalLayout_2->addWidget(widget_6);

        widget = new QWidget(trigger_main_area);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        widget->setMinimumSize(QSize(0, 120));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(1);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        patternArea = new QWidget(widget);
        patternArea->setObjectName(QString::fromUtf8("patternArea"));
        sizePolicy2.setHeightForWidth(patternArea->sizePolicy().hasHeightForWidth());
        patternArea->setSizePolicy(sizePolicy2);
        patternArea->setAutoFillBackground(true);
        horizontalLayout_3 = new QHBoxLayout(patternArea);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        scrollArea = new QScrollArea(patternArea);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 483, 139));
        scrollArea->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout_3->addWidget(scrollArea);

        widget_4 = new QWidget(patternArea);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy3);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush2(QColor(203, 239, 207, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        widget_4->setPalette(palette1);
        widget_4->setAutoFillBackground(true);
        verticalLayout_5 = new QVBoxLayout(widget_4);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(1, 1, 1, 1);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        checkBox_stayOpen = new QGroupBox(widget_4);
        checkBox_stayOpen->setObjectName(QString::fromUtf8("checkBox_stayOpen"));
        sizePolicy2.setHeightForWidth(checkBox_stayOpen->sizePolicy().hasHeightForWidth());
        checkBox_stayOpen->setSizePolicy(sizePolicy2);
        checkBox_stayOpen->setMinimumSize(QSize(0, 0));
        checkBox_stayOpen->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush3(QColor(255, 224, 192, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        checkBox_stayOpen->setPalette(palette2);
        checkBox_stayOpen->setAutoFillBackground(true);
        checkBox_stayOpen->setCheckable(false);
        checkBox_stayOpen->setChecked(false);
        horizontalLayout = new QHBoxLayout(checkBox_stayOpen);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 0, 5);
        spinBox_stayOpen = new QSpinBox(checkBox_stayOpen);
        spinBox_stayOpen->setObjectName(QString::fromUtf8("spinBox_stayOpen"));
        sizePolicy2.setHeightForWidth(spinBox_stayOpen->sizePolicy().hasHeightForWidth());
        spinBox_stayOpen->setSizePolicy(sizePolicy2);
        spinBox_stayOpen->setMaximum(1000);

        horizontalLayout->addWidget(spinBox_stayOpen);

        label_6 = new QLabel(checkBox_stayOpen);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setScaledContents(true);
        label_6->setWordWrap(true);
        label_6->setIndent(0);

        horizontalLayout->addWidget(label_6);


        verticalLayout_5->addWidget(checkBox_stayOpen);

        soundTrigger = new QGroupBox(widget_4);
        soundTrigger->setObjectName(QString::fromUtf8("soundTrigger"));
        sizePolicy1.setHeightForWidth(soundTrigger->sizePolicy().hasHeightForWidth());
        soundTrigger->setSizePolicy(sizePolicy1);
        soundTrigger->setMinimumSize(QSize(0, 0));
        soundTrigger->setMaximumSize(QSize(16777215, 16777215));
        soundTrigger->setCheckable(true);
        soundTrigger->setChecked(false);
        horizontalLayout_6 = new QHBoxLayout(soundTrigger);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(5, 5, 9, 5);
        label_16 = new QLabel(soundTrigger);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy4);
        label_16->setMinimumSize(QSize(0, 11));

        horizontalLayout_6->addWidget(label_16);

        lineEdit_soundFile = new QLineEdit(soundTrigger);
        lineEdit_soundFile->setObjectName(QString::fromUtf8("lineEdit_soundFile"));
        lineEdit_soundFile->setMaximumSize(QSize(1, 0));
        QFont font;
        font.setPointSize(6);
        lineEdit_soundFile->setFont(font);

        horizontalLayout_6->addWidget(lineEdit_soundFile);

        pushButtonSound = new QPushButton(soundTrigger);
        pushButtonSound->setObjectName(QString::fromUtf8("pushButtonSound"));
        sizePolicy2.setHeightForWidth(pushButtonSound->sizePolicy().hasHeightForWidth());
        pushButtonSound->setSizePolicy(sizePolicy2);
        pushButtonSound->setMinimumSize(QSize(0, 16));
        pushButtonSound->setMaximumSize(QSize(16777215, 16));

        horizontalLayout_6->addWidget(pushButtonSound);


        verticalLayout_5->addWidget(soundTrigger);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        horizontalLayout_3->addWidget(widget_4);


        verticalLayout->addWidget(patternArea);


        verticalLayout_2->addWidget(widget);

        widget_3 = new QWidget(trigger_main_area);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy5);
        widget_3->setMinimumSize(QSize(0, 65));
        widget_3->setMaximumSize(QSize(16777215, 65));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush4(QColor(239, 239, 239, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        widget_3->setPalette(palette3);
        widget_3->setAutoFillBackground(true);
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 1);
        widget_13 = new QWidget(widget_3);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush5(QColor(255, 254, 215, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        widget_13->setPalette(palette4);
        widget_13->setAutoFillBackground(true);
        gridLayout_5 = new QGridLayout(widget_13);
        gridLayout_5->setSpacing(1);
        gridLayout_5->setContentsMargins(1, 1, 1, 1);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        checkBox_multlinetrigger = new QGroupBox(widget_13);
        checkBox_multlinetrigger->setObjectName(QString::fromUtf8("checkBox_multlinetrigger"));
        sizePolicy2.setHeightForWidth(checkBox_multlinetrigger->sizePolicy().hasHeightForWidth());
        checkBox_multlinetrigger->setSizePolicy(sizePolicy2);
        checkBox_multlinetrigger->setMinimumSize(QSize(0, 0));
        checkBox_multlinetrigger->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Base, brush);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        checkBox_multlinetrigger->setPalette(palette5);
        checkBox_multlinetrigger->setAutoFillBackground(true);
        checkBox_multlinetrigger->setCheckable(true);
        checkBox_multlinetrigger->setChecked(false);
        horizontalLayout_4 = new QHBoxLayout(checkBox_multlinetrigger);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(5, 9, 3, 9);
        label_3 = new QLabel(checkBox_multlinetrigger);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setMinimumSize(QSize(0, 25));
        label_3->setScaledContents(true);
        label_3->setWordWrap(true);
        label_3->setIndent(0);

        horizontalLayout_4->addWidget(label_3);

        spinBox_linemargin = new QSpinBox(checkBox_multlinetrigger);
        spinBox_linemargin->setObjectName(QString::fromUtf8("spinBox_linemargin"));
        sizePolicy2.setHeightForWidth(spinBox_linemargin->sizePolicy().hasHeightForWidth());
        spinBox_linemargin->setSizePolicy(sizePolicy2);
        spinBox_linemargin->setMinimumSize(QSize(0, 15));
        spinBox_linemargin->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(spinBox_linemargin);


        gridLayout_5->addWidget(checkBox_multlinetrigger, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(widget_13);

        widget_12 = new QWidget(widget_3);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(widget_12->sizePolicy().hasHeightForWidth());
        widget_12->setSizePolicy(sizePolicy6);
        widget_12->setMinimumSize(QSize(150, 0));
        widget_12->setBaseSize(QSize(0, 0));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush6(QColor(248, 217, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        widget_12->setPalette(palette6);
        widget_12->setAutoFillBackground(true);
        gridLayout_9 = new QGridLayout(widget_12);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(5, 1, 3, 1);
        filterTrigger = new QGroupBox(widget_12);
        filterTrigger->setObjectName(QString::fromUtf8("filterTrigger"));
        sizePolicy1.setHeightForWidth(filterTrigger->sizePolicy().hasHeightForWidth());
        filterTrigger->setSizePolicy(sizePolicy1);
        filterTrigger->setMinimumSize(QSize(0, 0));
        filterTrigger->setCheckable(true);
        filterTrigger->setChecked(false);
        gridLayout_6 = new QGridLayout(filterTrigger);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(5, 5, 1, 1);
        label_15 = new QLabel(filterTrigger);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy2.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy2);
        label_15->setMinimumSize(QSize(0, 0));
        label_15->setMaximumSize(QSize(16777215, 16777215));
        label_15->setScaledContents(true);
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_15->setWordWrap(true);
        label_15->setIndent(0);

        gridLayout_6->addWidget(label_15, 0, 0, 1, 1);


        gridLayout_9->addWidget(filterTrigger, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(widget_12);

        widget_11 = new QWidget(widget_3);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(widget_11->sizePolicy().hasHeightForWidth());
        widget_11->setSizePolicy(sizePolicy7);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush7(QColor(255, 206, 217, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        widget_11->setPalette(palette7);
        widget_11->setAutoFillBackground(true);
        verticalLayout_9 = new QVBoxLayout(widget_11);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(5, 1, 5, 1);
        perlSlashGOption = new QGroupBox(widget_11);
        perlSlashGOption->setObjectName(QString::fromUtf8("perlSlashGOption"));
        perlSlashGOption->setMinimumSize(QSize(0, 0));
        perlSlashGOption->setCheckable(true);
        perlSlashGOption->setChecked(false);
        gridLayout_7 = new QGridLayout(perlSlashGOption);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(5, 5, 1, 1);
        label_17 = new QLabel(perlSlashGOption);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy2.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy2);
        label_17->setMinimumSize(QSize(0, 0));
        label_17->setMaximumSize(QSize(16777215, 16777215));
        label_17->setScaledContents(true);
        label_17->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_17->setWordWrap(true);
        label_17->setIndent(0);

        gridLayout_7->addWidget(label_17, 0, 0, 1, 1);


        verticalLayout_9->addWidget(perlSlashGOption);


        horizontalLayout_2->addWidget(widget_11);

        widget_10 = new QWidget(widget_3);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        sizePolicy2.setHeightForWidth(widget_10->sizePolicy().hasHeightForWidth());
        widget_10->setSizePolicy(sizePolicy2);
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush8(QColor(220, 223, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush8);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        widget_10->setPalette(palette8);
        widget_10->setAutoFillBackground(true);
        verticalLayout_3 = new QVBoxLayout(widget_10);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, 1, 5, 1);
        colorizerTrigger = new QGroupBox(widget_10);
        colorizerTrigger->setObjectName(QString::fromUtf8("colorizerTrigger"));
        sizePolicy1.setHeightForWidth(colorizerTrigger->sizePolicy().hasHeightForWidth());
        colorizerTrigger->setSizePolicy(sizePolicy1);
        colorizerTrigger->setMinimumSize(QSize(0, 0));
        colorizerTrigger->setMaximumSize(QSize(16777215, 16777215));
        colorizerTrigger->setCheckable(true);
        colorizerTrigger->setChecked(false);
        gridLayout = new QGridLayout(colorizerTrigger);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 0, 5);
        pushButtonFgColor = new QPushButton(colorizerTrigger);
        pushButtonFgColor->setObjectName(QString::fromUtf8("pushButtonFgColor"));
        sizePolicy2.setHeightForWidth(pushButtonFgColor->sizePolicy().hasHeightForWidth());
        pushButtonFgColor->setSizePolicy(sizePolicy2);
        pushButtonFgColor->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lucida Grande"));
        pushButtonFgColor->setFont(font1);

        gridLayout->addWidget(pushButtonFgColor, 0, 1, 1, 1);

        label_9 = new QLabel(colorizerTrigger);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy5.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy5);
        label_9->setMinimumSize(QSize(0, 13));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        pushButtonBgColor = new QPushButton(colorizerTrigger);
        pushButtonBgColor->setObjectName(QString::fromUtf8("pushButtonBgColor"));
        sizePolicy2.setHeightForWidth(pushButtonBgColor->sizePolicy().hasHeightForWidth());
        pushButtonBgColor->setSizePolicy(sizePolicy2);
        pushButtonBgColor->setMaximumSize(QSize(16777215, 16777215));
        QFont font2;
        font2.setPointSize(13);
        pushButtonBgColor->setFont(font2);
        pushButtonBgColor->setFlat(false);

        gridLayout->addWidget(pushButtonBgColor, 4, 1, 1, 1);

        label_10 = new QLabel(colorizerTrigger);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy5.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy5);
        label_10->setMinimumSize(QSize(0, 13));

        gridLayout->addWidget(label_10, 4, 0, 1, 1);


        verticalLayout_3->addWidget(colorizerTrigger);


        horizontalLayout_2->addWidget(widget_10);


        verticalLayout_2->addWidget(widget_3);

#ifndef QT_NO_SHORTCUT
        label_4->setBuddy(lineEdit_trigger_name);
        label_5->setBuddy(trigger_command);
#endif // QT_NO_SHORTCUT

        retranslateUi(trigger_main_area);

        QMetaObject::connectSlotsByName(trigger_main_area);
    } // setupUi

    void retranslateUi(QWidget *trigger_main_area)
    {
        trigger_main_area->setWindowTitle(QApplication::translate("trigger_main_area", "Form", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("trigger_main_area", "name:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEdit_trigger_name->setToolTip(QApplication::translate("trigger_main_area", "Chose a good name for your trigger. This name will be displayed in the trigger tree.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("trigger_main_area", "send plain text:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        trigger_command->setToolTip(QApplication::translate("trigger_main_area", "Type in what command you want the trigger to send to the MUD if it fires. (optional)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBox_stayOpen->setToolTip(QApplication::translate("trigger_main_area", "Keep firing the script for x more lines, after the trigger or chain has matched.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBox_stayOpen->setTitle(QApplication::translate("trigger_main_area", "fire length", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinBox_stayOpen->setToolTip(QApplication::translate("trigger_main_area", "Within how many lines must all condition be true to fire the trigger?", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("trigger_main_area", "more lines", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        soundTrigger->setToolTip(QApplication::translate("trigger_main_area", "play a wave sound file if the trigger fires", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        soundTrigger->setTitle(QApplication::translate("trigger_main_area", "play sound", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("trigger_main_area", "chose file:", 0, QApplication::UnicodeUTF8));
        pushButtonSound->setText(QString());
#ifndef QT_NO_TOOLTIP
        checkBox_multlinetrigger->setToolTip(QApplication::translate("trigger_main_area", "The trigger will only fire if all conditions on the list \n"
"have been met within the specified line margin. \n"
"If this option is not set the trigger will fire if any \n"
"conditon on the list has been met. Read more \n"
"about the additional implications in the manual \n"
"as this is a complex topic.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBox_multlinetrigger->setTitle(QApplication::translate("trigger_main_area", "multiline / AND Trigger", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("trigger_main_area", "line delta", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinBox_linemargin->setToolTip(QApplication::translate("trigger_main_area", "Within how many lines must all condition be true to fire the trigger?", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        filterTrigger->setToolTip(QApplication::translate("trigger_main_area", "act as filter, i.e. only pass matches to its children to trigger on, instead of the original line from the MUD", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        filterTrigger->setTitle(QApplication::translate("trigger_main_area", "filter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_15->setToolTip(QApplication::translate("trigger_main_area", "Only the filtered content (=capture groups) will be passed on to child triggers, not the initial line (see manual on filters)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_15->setText(QApplication::translate("trigger_main_area", "only pass matches to children as trigger input", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        perlSlashGOption->setToolTip(QApplication::translate("trigger_main_area", "Chose this option if you want to include all possible matches of the pattern in the line. \n"
"Without this option, the pattern matching will stop after the first successful match.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        perlSlashGOption->setTitle(QApplication::translate("trigger_main_area", "match all", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_17->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label_17->setText(QApplication::translate("trigger_main_area", "match all occurences of the pattern in the line", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        colorizerTrigger->setToolTip(QApplication::translate("trigger_main_area", "highlight the capture groups if there are any\n"
"otherwise highlight the entire match", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        colorizerTrigger->setTitle(QApplication::translate("trigger_main_area", "highlight", 0, QApplication::UnicodeUTF8));
        pushButtonFgColor->setText(QString());
        label_9->setText(QApplication::translate("trigger_main_area", "fg color", 0, QApplication::UnicodeUTF8));
        pushButtonBgColor->setText(QString());
        label_10->setText(QApplication::translate("trigger_main_area", "bg color", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class trigger_main_area: public Ui_trigger_main_area {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIGGERS_MAIN_AREA_H
