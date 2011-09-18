/********************************************************************************
** Form generated from reading UI file 'scripts_main_area.ui'
**
** Created: Fri Sep 16 19:12:07 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCRIPTS_MAIN_AREA_H
#define UI_SCRIPTS_MAIN_AREA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_scripts_main_area
{
public:
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLineEdit *lineEdit_scripts_name;
    QLabel *label;
    QListWidget *listWidget_registered_event_handlers;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QToolButton *toolButton_add;
    QToolButton *toolButton_remove;

    void setupUi(QWidget *scripts_main_area)
    {
        if (scripts_main_area->objectName().isEmpty())
            scripts_main_area->setObjectName(QString::fromUtf8("scripts_main_area"));
        scripts_main_area->resize(643, 92);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scripts_main_area->sizePolicy().hasHeightForWidth());
        scripts_main_area->setSizePolicy(sizePolicy);
        scripts_main_area->setMinimumSize(QSize(0, 80));
        scripts_main_area->setMaximumSize(QSize(16777215, 92));
        gridLayout = new QGridLayout(scripts_main_area);
        gridLayout->setSpacing(3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, 0);
        label_6 = new QLabel(scripts_main_area);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 65));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        lineEdit_scripts_name = new QLineEdit(scripts_main_area);
        lineEdit_scripts_name->setObjectName(QString::fromUtf8("lineEdit_scripts_name"));

        gridLayout->addWidget(lineEdit_scripts_name, 0, 1, 1, 4);

        label = new QLabel(scripts_main_area);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(200, 0));
        label->setScaledContents(true);
        label->setWordWrap(true);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        listWidget_registered_event_handlers = new QListWidget(scripts_main_area);
        listWidget_registered_event_handlers->setObjectName(QString::fromUtf8("listWidget_registered_event_handlers"));
        sizePolicy.setHeightForWidth(listWidget_registered_event_handlers->sizePolicy().hasHeightForWidth());
        listWidget_registered_event_handlers->setSizePolicy(sizePolicy);
        listWidget_registered_event_handlers->setMinimumSize(QSize(150, 0));
        listWidget_registered_event_handlers->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setPointSize(6);
        listWidget_registered_event_handlers->setFont(font);

        gridLayout->addWidget(listWidget_registered_event_handlers, 1, 1, 1, 4);

        label_2 = new QLabel(scripts_main_area);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(200, 0));
        label_2->setScaledContents(true);
        label_2->setWordWrap(true);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        lineEdit = new QLineEdit(scripts_main_area);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 2, 1, 1, 2);

        toolButton_add = new QToolButton(scripts_main_area);
        toolButton_add->setObjectName(QString::fromUtf8("toolButton_add"));
        toolButton_add->setMinimumSize(QSize(15, 15));
        toolButton_add->setMaximumSize(QSize(15, 15));

        gridLayout->addWidget(toolButton_add, 2, 3, 1, 1);

        toolButton_remove = new QToolButton(scripts_main_area);
        toolButton_remove->setObjectName(QString::fromUtf8("toolButton_remove"));
        toolButton_remove->setMinimumSize(QSize(15, 15));
        toolButton_remove->setMaximumSize(QSize(15, 15));
        QFont font1;
        font1.setPointSize(11);
        toolButton_remove->setFont(font1);

        gridLayout->addWidget(toolButton_remove, 2, 4, 1, 1);


        retranslateUi(scripts_main_area);

        QMetaObject::connectSlotsByName(scripts_main_area);
    } // setupUi

    void retranslateUi(QWidget *scripts_main_area)
    {
        scripts_main_area->setWindowTitle(QApplication::translate("scripts_main_area", "Form", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("scripts_main_area", "Script name:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("scripts_main_area", "Registered Event Handlers:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("scripts_main_area", "Add User Defined Event Handler:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_add->setToolTip(QApplication::translate("scripts_main_area", "add event handler to list", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_add->setText(QApplication::translate("scripts_main_area", "+", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolButton_remove->setToolTip(QApplication::translate("scripts_main_area", "remove event handler from list", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolButton_remove->setText(QApplication::translate("scripts_main_area", "-", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class scripts_main_area: public Ui_scripts_main_area {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCRIPTS_MAIN_AREA_H
