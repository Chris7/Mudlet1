/********************************************************************************
** Form generated from reading UI file 'actions_main_area.ui'
**
** Created: Sat Oct 22 10:04:25 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACTIONS_MAIN_AREA_H
#define UI_ACTIONS_MAIN_AREA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_actions_main_area
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_action_name;
    QLineEdit *lineEdit_action_name;
    QLabel *label;
    QLineEdit *lineEdit_action_button_down;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_action_name_4;
    QPlainTextEdit *css;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_chose_icon;
    QPushButton *pushButton_color;
    QLineEdit *lineEdit_action_icon;
    QWidget *optionsArea;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_toolBar;
    QGridLayout *gridLayout;
    QComboBox *comboBox_orientation;
    QLabel *label_action_name_6;
    QLineEdit *buttonColumns;
    QComboBox *comboBox_location;
    QGroupBox *groupBox_appearance;
    QFormLayout *formLayout;
    QLabel *label_action_name_5;
    QComboBox *buttonRotation;
    QGroupBox *checkBox_pushdownbutton;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit_action_button_up;
    QGroupBox *useCustomLayout;
    QGridLayout *gridLayout_2;
    QLabel *label_action_name_7;
    QLineEdit *buttonSizeX;
    QLabel *label_action_name_8;
    QLineEdit *buttonSizeY;
    QLabel *label_action_name_9;
    QLineEdit *buttonPosX;
    QLabel *label_action_name_10;
    QLineEdit *buttonPosY;

    void setupUi(QWidget *actions_main_area)
    {
        if (actions_main_area->objectName().isEmpty())
            actions_main_area->setObjectName(QString::fromUtf8("actions_main_area"));
        actions_main_area->resize(900, 205);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(actions_main_area->sizePolicy().hasHeightForWidth());
        actions_main_area->setSizePolicy(sizePolicy);
        actions_main_area->setMinimumSize(QSize(0, 200));
        actions_main_area->setMaximumSize(QSize(16777215, 205));
        verticalLayout_2 = new QVBoxLayout(actions_main_area);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(actions_main_area);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(9);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_action_name = new QLabel(widget);
        label_action_name->setObjectName(QString::fromUtf8("label_action_name"));

        horizontalLayout_2->addWidget(label_action_name);

        lineEdit_action_name = new QLineEdit(widget);
        lineEdit_action_name->setObjectName(QString::fromUtf8("lineEdit_action_name"));

        horizontalLayout_2->addWidget(lineEdit_action_name);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_action_button_down = new QLineEdit(widget);
        lineEdit_action_button_down->setObjectName(QString::fromUtf8("lineEdit_action_button_down"));

        horizontalLayout_2->addWidget(lineEdit_action_button_down);


        verticalLayout_2->addWidget(widget);

        widget_2 = new QWidget(actions_main_area);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setSpacing(9);
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_action_name_4 = new QLabel(widget_2);
        label_action_name_4->setObjectName(QString::fromUtf8("label_action_name_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_action_name_4->sizePolicy().hasHeightForWidth());
        label_action_name_4->setSizePolicy(sizePolicy2);
        label_action_name_4->setMinimumSize(QSize(0, 70));
        label_action_name_4->setMaximumSize(QSize(77, 16777215));
        label_action_name_4->setWordWrap(true);

        horizontalLayout_3->addWidget(label_action_name_4);

        css = new QPlainTextEdit(widget_2);
        css->setObjectName(QString::fromUtf8("css"));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Vera Sans Mono"));
        font.setPointSize(8);
        css->setFont(font);

        horizontalLayout_3->addWidget(css);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy3);
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_chose_icon = new QPushButton(widget_3);
        pushButton_chose_icon->setObjectName(QString::fromUtf8("pushButton_chose_icon"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pushButton_chose_icon->sizePolicy().hasHeightForWidth());
        pushButton_chose_icon->setSizePolicy(sizePolicy4);
        pushButton_chose_icon->setMaximumSize(QSize(80, 16777215));

        verticalLayout->addWidget(pushButton_chose_icon);

        pushButton_color = new QPushButton(widget_3);
        pushButton_color->setObjectName(QString::fromUtf8("pushButton_color"));
        sizePolicy4.setHeightForWidth(pushButton_color->sizePolicy().hasHeightForWidth());
        pushButton_color->setSizePolicy(sizePolicy4);
        pushButton_color->setMaximumSize(QSize(80, 16777215));

        verticalLayout->addWidget(pushButton_color);


        horizontalLayout_3->addWidget(widget_3);


        verticalLayout_2->addWidget(widget_2);

        lineEdit_action_icon = new QLineEdit(actions_main_area);
        lineEdit_action_icon->setObjectName(QString::fromUtf8("lineEdit_action_icon"));
        lineEdit_action_icon->setEnabled(false);
        lineEdit_action_icon->setMaximumSize(QSize(0, 0));

        verticalLayout_2->addWidget(lineEdit_action_icon);

        optionsArea = new QWidget(actions_main_area);
        optionsArea->setObjectName(QString::fromUtf8("optionsArea"));
        sizePolicy1.setHeightForWidth(optionsArea->sizePolicy().hasHeightForWidth());
        optionsArea->setSizePolicy(sizePolicy1);
        optionsArea->setMaximumSize(QSize(16777215, 131));
        horizontalLayout = new QHBoxLayout(optionsArea);
        horizontalLayout->setSpacing(9);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_toolBar = new QGroupBox(optionsArea);
        groupBox_toolBar->setObjectName(QString::fromUtf8("groupBox_toolBar"));
        sizePolicy1.setHeightForWidth(groupBox_toolBar->sizePolicy().hasHeightForWidth());
        groupBox_toolBar->setSizePolicy(sizePolicy1);
        groupBox_toolBar->setMinimumSize(QSize(0, 0));
        groupBox_toolBar->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(groupBox_toolBar);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        comboBox_orientation = new QComboBox(groupBox_toolBar);
        comboBox_orientation->setObjectName(QString::fromUtf8("comboBox_orientation"));
        sizePolicy.setHeightForWidth(comboBox_orientation->sizePolicy().hasHeightForWidth());
        comboBox_orientation->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBox_orientation, 0, 0, 1, 2);

        label_action_name_6 = new QLabel(groupBox_toolBar);
        label_action_name_6->setObjectName(QString::fromUtf8("label_action_name_6"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_action_name_6->sizePolicy().hasHeightForWidth());
        label_action_name_6->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(label_action_name_6, 1, 0, 1, 1);

        buttonColumns = new QLineEdit(groupBox_toolBar);
        buttonColumns->setObjectName(QString::fromUtf8("buttonColumns"));
        sizePolicy.setHeightForWidth(buttonColumns->sizePolicy().hasHeightForWidth());
        buttonColumns->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(8);
        buttonColumns->setFont(font1);

        gridLayout->addWidget(buttonColumns, 1, 1, 1, 1);

        comboBox_location = new QComboBox(groupBox_toolBar);
        comboBox_location->setObjectName(QString::fromUtf8("comboBox_location"));
        sizePolicy.setHeightForWidth(comboBox_location->sizePolicy().hasHeightForWidth());
        comboBox_location->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBox_location, 2, 0, 1, 2);


        horizontalLayout->addWidget(groupBox_toolBar);

        groupBox_appearance = new QGroupBox(optionsArea);
        groupBox_appearance->setObjectName(QString::fromUtf8("groupBox_appearance"));
        sizePolicy1.setHeightForWidth(groupBox_appearance->sizePolicy().hasHeightForWidth());
        groupBox_appearance->setSizePolicy(sizePolicy1);
        groupBox_appearance->setMinimumSize(QSize(0, 0));
        formLayout = new QFormLayout(groupBox_appearance);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_action_name_5 = new QLabel(groupBox_appearance);
        label_action_name_5->setObjectName(QString::fromUtf8("label_action_name_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_action_name_5);

        buttonRotation = new QComboBox(groupBox_appearance);
        buttonRotation->setObjectName(QString::fromUtf8("buttonRotation"));
        sizePolicy.setHeightForWidth(buttonRotation->sizePolicy().hasHeightForWidth());
        buttonRotation->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::FieldRole, buttonRotation);

        checkBox_pushdownbutton = new QGroupBox(groupBox_appearance);
        checkBox_pushdownbutton->setObjectName(QString::fromUtf8("checkBox_pushdownbutton"));
        sizePolicy1.setHeightForWidth(checkBox_pushdownbutton->sizePolicy().hasHeightForWidth());
        checkBox_pushdownbutton->setSizePolicy(sizePolicy1);
        checkBox_pushdownbutton->setCheckable(true);
        horizontalLayout_4 = new QHBoxLayout(checkBox_pushdownbutton);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(checkBox_pushdownbutton);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setScaledContents(true);
        label_2->setWordWrap(true);

        horizontalLayout_4->addWidget(label_2);

        lineEdit_action_button_up = new QLineEdit(checkBox_pushdownbutton);
        lineEdit_action_button_up->setObjectName(QString::fromUtf8("lineEdit_action_button_up"));
        sizePolicy1.setHeightForWidth(lineEdit_action_button_up->sizePolicy().hasHeightForWidth());
        lineEdit_action_button_up->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(lineEdit_action_button_up);


        formLayout->setWidget(1, QFormLayout::SpanningRole, checkBox_pushdownbutton);


        horizontalLayout->addWidget(groupBox_appearance);

        useCustomLayout = new QGroupBox(optionsArea);
        useCustomLayout->setObjectName(QString::fromUtf8("useCustomLayout"));
        sizePolicy1.setHeightForWidth(useCustomLayout->sizePolicy().hasHeightForWidth());
        useCustomLayout->setSizePolicy(sizePolicy1);
        useCustomLayout->setMinimumSize(QSize(0, 0));
        useCustomLayout->setMaximumSize(QSize(16777215, 16777215));
        useCustomLayout->setAutoFillBackground(false);
        useCustomLayout->setCheckable(true);
        useCustomLayout->setChecked(false);
        gridLayout_2 = new QGridLayout(useCustomLayout);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(5, 5, 5, 5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_action_name_7 = new QLabel(useCustomLayout);
        label_action_name_7->setObjectName(QString::fromUtf8("label_action_name_7"));

        gridLayout_2->addWidget(label_action_name_7, 0, 0, 1, 1);

        buttonSizeX = new QLineEdit(useCustomLayout);
        buttonSizeX->setObjectName(QString::fromUtf8("buttonSizeX"));
        buttonSizeX->setFont(font1);

        gridLayout_2->addWidget(buttonSizeX, 0, 1, 1, 1);

        label_action_name_8 = new QLabel(useCustomLayout);
        label_action_name_8->setObjectName(QString::fromUtf8("label_action_name_8"));

        gridLayout_2->addWidget(label_action_name_8, 1, 0, 1, 1);

        buttonSizeY = new QLineEdit(useCustomLayout);
        buttonSizeY->setObjectName(QString::fromUtf8("buttonSizeY"));
        buttonSizeY->setFont(font1);

        gridLayout_2->addWidget(buttonSizeY, 1, 1, 1, 1);

        label_action_name_9 = new QLabel(useCustomLayout);
        label_action_name_9->setObjectName(QString::fromUtf8("label_action_name_9"));

        gridLayout_2->addWidget(label_action_name_9, 2, 0, 1, 1);

        buttonPosX = new QLineEdit(useCustomLayout);
        buttonPosX->setObjectName(QString::fromUtf8("buttonPosX"));
        buttonPosX->setFont(font1);

        gridLayout_2->addWidget(buttonPosX, 2, 1, 1, 1);

        label_action_name_10 = new QLabel(useCustomLayout);
        label_action_name_10->setObjectName(QString::fromUtf8("label_action_name_10"));

        gridLayout_2->addWidget(label_action_name_10, 3, 0, 1, 1);

        buttonPosY = new QLineEdit(useCustomLayout);
        buttonPosY->setObjectName(QString::fromUtf8("buttonPosY"));
        buttonPosY->setFont(font1);

        gridLayout_2->addWidget(buttonPosY, 3, 1, 1, 1);


        horizontalLayout->addWidget(useCustomLayout);


        verticalLayout_2->addWidget(optionsArea);

        lineEdit_action_icon->raise();
        optionsArea->raise();
        widget->raise();
        widget_2->raise();

        retranslateUi(actions_main_area);

        QMetaObject::connectSlotsByName(actions_main_area);
    } // setupUi

    void retranslateUi(QWidget *actions_main_area)
    {
        actions_main_area->setWindowTitle(QApplication::translate("actions_main_area", "Form", 0, QApplication::UnicodeUTF8));
        label_action_name->setText(QApplication::translate("actions_main_area", "Button Name:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("actions_main_area", "Command on Button Down", 0, QApplication::UnicodeUTF8));
        label_action_name_4->setText(QApplication::translate("actions_main_area", "Button CSS Style Sheet", 0, QApplication::UnicodeUTF8));
        pushButton_chose_icon->setText(QApplication::translate("actions_main_area", "Choose Icon", 0, QApplication::UnicodeUTF8));
        pushButton_color->setText(QApplication::translate("actions_main_area", "Color", 0, QApplication::UnicodeUTF8));
        groupBox_toolBar->setTitle(QApplication::translate("actions_main_area", "Button Bar", 0, QApplication::UnicodeUTF8));
        comboBox_orientation->clear();
        comboBox_orientation->insertItems(0, QStringList()
         << QApplication::translate("actions_main_area", "Orientation Horizontal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("actions_main_area", "Orientation Vertical", 0, QApplication::UnicodeUTF8)
        );
        label_action_name_6->setText(QApplication::translate("actions_main_area", "Number of columns or rows", 0, QApplication::UnicodeUTF8));
        comboBox_location->clear();
        comboBox_location->insertItems(0, QStringList()
         << QApplication::translate("actions_main_area", "Dock Area Top", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("actions_main_area", "Dock Area Left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("actions_main_area", "Dock Area Right", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("actions_main_area", "Floating Toolbar", 0, QApplication::UnicodeUTF8)
        );
        groupBox_appearance->setTitle(QApplication::translate("actions_main_area", "Button Appearance", 0, QApplication::UnicodeUTF8));
        label_action_name_5->setText(QApplication::translate("actions_main_area", "Button Rotation:", 0, QApplication::UnicodeUTF8));
        buttonRotation->clear();
        buttonRotation->insertItems(0, QStringList()
         << QApplication::translate("actions_main_area", "no rotation", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("actions_main_area", "90\302\260 rotation to the left", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("actions_main_area", "90\302\260 rotation to the right", 0, QApplication::UnicodeUTF8)
        );
        checkBox_pushdownbutton->setTitle(QApplication::translate("actions_main_area", "Push Down Button", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("actions_main_area", "Command on Button Up:", 0, QApplication::UnicodeUTF8));
        useCustomLayout->setTitle(QApplication::translate("actions_main_area", "use custom layout", 0, QApplication::UnicodeUTF8));
        label_action_name_7->setText(QApplication::translate("actions_main_area", "Size X:", 0, QApplication::UnicodeUTF8));
        label_action_name_8->setText(QApplication::translate("actions_main_area", "Size Y:", 0, QApplication::UnicodeUTF8));
        label_action_name_9->setText(QApplication::translate("actions_main_area", "Position X:", 0, QApplication::UnicodeUTF8));
        label_action_name_10->setText(QApplication::translate("actions_main_area", "Position Y:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class actions_main_area: public Ui_actions_main_area {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACTIONS_MAIN_AREA_H
