/********************************************************************************
** Form generated from reading UI file 'options_area_timers.ui'
**
** Created: Sun Aug 21 15:41:54 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_AREA_TIMERS_H
#define UI_OPTIONS_AREA_TIMERS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_options_area_timers
{
public:

    void setupUi(QWidget *options_area_timers)
    {
        if (options_area_timers->objectName().isEmpty())
            options_area_timers->setObjectName(QString::fromUtf8("options_area_timers"));
        options_area_timers->resize(453, 16);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(options_area_timers->sizePolicy().hasHeightForWidth());
        options_area_timers->setSizePolicy(sizePolicy);
        options_area_timers->setMinimumSize(QSize(0, 0));
        options_area_timers->setMaximumSize(QSize(16777215, 16));

        retranslateUi(options_area_timers);

        QMetaObject::connectSlotsByName(options_area_timers);
    } // setupUi

    void retranslateUi(QWidget *options_area_timers)
    {
        options_area_timers->setWindowTitle(QApplication::translate("options_area_timers", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class options_area_timers: public Ui_options_area_timers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_AREA_TIMERS_H
