/********************************************************************************
** Form generated from reading UI file 'color_trigger.ui'
**
** Created: Fri Sep 16 19:12:07 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLOR_TRIGGER_H
#define UI_COLOR_TRIGGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_color_trigger_dlg
{
public:
    QPushButton *closeButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_8;
    QGridLayout *gridLayout_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *pushButton_black;
    QPushButton *pushButton_red;
    QPushButton *pushButton_green;
    QPushButton *pushButton_yellow;
    QPushButton *pushButton_blue;
    QPushButton *pushButton_magenta;
    QPushButton *pushButton_cyan;
    QPushButton *pushButton_white;
    QLabel *label_4;
    QGridLayout *gridLayout_3;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_9;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *pushButton_Lblack;
    QPushButton *pushButton_Lred;
    QPushButton *pushButton_Lgreen;
    QPushButton *pushButton_Lyellow;
    QPushButton *pushButton_Lblue;
    QPushButton *pushButton_Lmagenta;
    QPushButton *pushButton_Lcyan;
    QLabel *label_10;
    QPushButton *pushButton_Lwhite;

    void setupUi(QDialog *color_trigger_dlg)
    {
        if (color_trigger_dlg->objectName().isEmpty())
            color_trigger_dlg->setObjectName(QString::fromUtf8("color_trigger_dlg"));
        color_trigger_dlg->setWindowModality(Qt::ApplicationModal);
        color_trigger_dlg->resize(364, 270);
        color_trigger_dlg->setModal(true);
        closeButton = new QPushButton(color_trigger_dlg);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(270, 240, 81, 20));
        groupBox_2 = new QGroupBox(color_trigger_dlg);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 0, 341, 231));
        gridLayout_8 = new QGridLayout(groupBox_2);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_4->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_4->addWidget(label_3, 2, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 4, 0, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 5, 0, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 6, 0, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 7, 0, 1, 1);

        pushButton_black = new QPushButton(groupBox_2);
        pushButton_black->setObjectName(QString::fromUtf8("pushButton_black"));
        pushButton_black->setAutoFillBackground(true);

        gridLayout_4->addWidget(pushButton_black, 0, 1, 1, 1);

        pushButton_red = new QPushButton(groupBox_2);
        pushButton_red->setObjectName(QString::fromUtf8("pushButton_red"));
        pushButton_red->setAutoFillBackground(true);

        gridLayout_4->addWidget(pushButton_red, 1, 1, 1, 1);

        pushButton_green = new QPushButton(groupBox_2);
        pushButton_green->setObjectName(QString::fromUtf8("pushButton_green"));
        pushButton_green->setAutoFillBackground(true);

        gridLayout_4->addWidget(pushButton_green, 2, 1, 1, 1);

        pushButton_yellow = new QPushButton(groupBox_2);
        pushButton_yellow->setObjectName(QString::fromUtf8("pushButton_yellow"));
        pushButton_yellow->setAutoFillBackground(true);

        gridLayout_4->addWidget(pushButton_yellow, 3, 1, 1, 1);

        pushButton_blue = new QPushButton(groupBox_2);
        pushButton_blue->setObjectName(QString::fromUtf8("pushButton_blue"));
        pushButton_blue->setAutoFillBackground(true);

        gridLayout_4->addWidget(pushButton_blue, 4, 1, 1, 1);

        pushButton_magenta = new QPushButton(groupBox_2);
        pushButton_magenta->setObjectName(QString::fromUtf8("pushButton_magenta"));
        pushButton_magenta->setAutoFillBackground(true);

        gridLayout_4->addWidget(pushButton_magenta, 5, 1, 1, 1);

        pushButton_cyan = new QPushButton(groupBox_2);
        pushButton_cyan->setObjectName(QString::fromUtf8("pushButton_cyan"));
        pushButton_cyan->setAutoFillBackground(true);

        gridLayout_4->addWidget(pushButton_cyan, 6, 1, 1, 1);

        pushButton_white = new QPushButton(groupBox_2);
        pushButton_white->setObjectName(QString::fromUtf8("pushButton_white"));
        pushButton_white->setAutoFillBackground(true);

        gridLayout_4->addWidget(pushButton_white, 7, 1, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 3, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_4, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 0, 0, 1, 1);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 1, 0, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 2, 0, 1, 1);

        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 3, 0, 1, 1);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_3->addWidget(label_16, 4, 0, 1, 1);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 5, 0, 1, 1);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 6, 0, 1, 1);

        pushButton_Lblack = new QPushButton(groupBox_2);
        pushButton_Lblack->setObjectName(QString::fromUtf8("pushButton_Lblack"));
        pushButton_Lblack->setAutoFillBackground(true);

        gridLayout_3->addWidget(pushButton_Lblack, 0, 1, 1, 1);

        pushButton_Lred = new QPushButton(groupBox_2);
        pushButton_Lred->setObjectName(QString::fromUtf8("pushButton_Lred"));
        pushButton_Lred->setAutoFillBackground(true);

        gridLayout_3->addWidget(pushButton_Lred, 1, 1, 1, 1);

        pushButton_Lgreen = new QPushButton(groupBox_2);
        pushButton_Lgreen->setObjectName(QString::fromUtf8("pushButton_Lgreen"));
        pushButton_Lgreen->setAutoFillBackground(true);

        gridLayout_3->addWidget(pushButton_Lgreen, 2, 1, 1, 1);

        pushButton_Lyellow = new QPushButton(groupBox_2);
        pushButton_Lyellow->setObjectName(QString::fromUtf8("pushButton_Lyellow"));
        pushButton_Lyellow->setAutoFillBackground(true);

        gridLayout_3->addWidget(pushButton_Lyellow, 3, 1, 1, 1);

        pushButton_Lblue = new QPushButton(groupBox_2);
        pushButton_Lblue->setObjectName(QString::fromUtf8("pushButton_Lblue"));
        pushButton_Lblue->setAutoFillBackground(true);

        gridLayout_3->addWidget(pushButton_Lblue, 4, 1, 1, 1);

        pushButton_Lmagenta = new QPushButton(groupBox_2);
        pushButton_Lmagenta->setObjectName(QString::fromUtf8("pushButton_Lmagenta"));
        pushButton_Lmagenta->setAutoFillBackground(true);

        gridLayout_3->addWidget(pushButton_Lmagenta, 5, 1, 1, 1);

        pushButton_Lcyan = new QPushButton(groupBox_2);
        pushButton_Lcyan->setObjectName(QString::fromUtf8("pushButton_Lcyan"));
        pushButton_Lcyan->setAutoFillBackground(true);

        gridLayout_3->addWidget(pushButton_Lcyan, 6, 1, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 7, 0, 1, 1);

        pushButton_Lwhite = new QPushButton(groupBox_2);
        pushButton_Lwhite->setObjectName(QString::fromUtf8("pushButton_Lwhite"));
        pushButton_Lwhite->setAutoFillBackground(true);

        gridLayout_3->addWidget(pushButton_Lwhite, 7, 1, 1, 1);


        gridLayout_8->addLayout(gridLayout_3, 0, 1, 1, 1);


        retranslateUi(color_trigger_dlg);

        QMetaObject::connectSlotsByName(color_trigger_dlg);
    } // setupUi

    void retranslateUi(QDialog *color_trigger_dlg)
    {
        color_trigger_dlg->setWindowTitle(QApplication::translate("color_trigger_dlg", "Dialog", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("color_trigger_dlg", "cancel", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("color_trigger_dlg", "chose color to trigger on", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("color_trigger_dlg", "Black:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("color_trigger_dlg", "Red:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("color_trigger_dlg", "Green:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("color_trigger_dlg", "Blue:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("color_trigger_dlg", "Magenta:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("color_trigger_dlg", "Cyan:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("color_trigger_dlg", "White:", 0, QApplication::UnicodeUTF8));
        pushButton_black->setText(QString());
        pushButton_red->setText(QString());
        pushButton_green->setText(QString());
        pushButton_yellow->setText(QString());
        pushButton_blue->setText(QString());
        pushButton_magenta->setText(QString());
        pushButton_cyan->setText(QString());
        pushButton_white->setText(QString());
        label_4->setText(QApplication::translate("color_trigger_dlg", "Yellow:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("color_trigger_dlg", "Light black:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("color_trigger_dlg", "Light red:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("color_trigger_dlg", "Light green:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("color_trigger_dlg", "Light yellow:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("color_trigger_dlg", "Light blue:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("color_trigger_dlg", "Light magenta:", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("color_trigger_dlg", "Light cyan:", 0, QApplication::UnicodeUTF8));
        pushButton_Lblack->setText(QString());
        pushButton_Lred->setText(QString());
        pushButton_Lgreen->setText(QString());
        pushButton_Lyellow->setText(QString());
        pushButton_Lblue->setText(QString());
        pushButton_Lmagenta->setText(QString());
        pushButton_Lcyan->setText(QString());
        label_10->setText(QApplication::translate("color_trigger_dlg", "Light white:", 0, QApplication::UnicodeUTF8));
        pushButton_Lwhite->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class color_trigger_dlg: public Ui_color_trigger_dlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLOR_TRIGGER_H
