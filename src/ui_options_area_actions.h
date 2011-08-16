/********************************************************************************
** Form generated from reading UI file 'options_area_actions.ui'
**
** Created: Mon Aug 15 14:54:54 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_AREA_ACTIONS_H
#define UI_OPTIONS_AREA_ACTIONS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_options_area_actions
{
public:

    void setupUi(QWidget *options_area_actions)
    {
        if (options_area_actions->objectName().isEmpty())
            options_area_actions->setObjectName(QString::fromUtf8("options_area_actions"));
        options_area_actions->resize(200, 29);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(options_area_actions->sizePolicy().hasHeightForWidth());
        options_area_actions->setSizePolicy(sizePolicy);
        options_area_actions->setMinimumSize(QSize(0, 0));
        options_area_actions->setMaximumSize(QSize(16777215, 16777215));

        retranslateUi(options_area_actions);

        QMetaObject::connectSlotsByName(options_area_actions);
    } // setupUi

    void retranslateUi(QWidget *options_area_actions)
    {
        options_area_actions->setWindowTitle(QApplication::translate("options_area_actions", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class options_area_actions: public Ui_options_area_actions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_AREA_ACTIONS_H
