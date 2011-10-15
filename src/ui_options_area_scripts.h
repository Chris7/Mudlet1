/********************************************************************************
** Form generated from reading UI file 'options_area_scripts.ui'
**
** Created: Sat Oct 15 13:23:43 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_AREA_SCRIPTS_H
#define UI_OPTIONS_AREA_SCRIPTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_options_area_scripts
{
public:

    void setupUi(QWidget *options_area_scripts)
    {
        if (options_area_scripts->objectName().isEmpty())
            options_area_scripts->setObjectName(QString::fromUtf8("options_area_scripts"));
        options_area_scripts->resize(200, 29);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(options_area_scripts->sizePolicy().hasHeightForWidth());
        options_area_scripts->setSizePolicy(sizePolicy);
        options_area_scripts->setMinimumSize(QSize(0, 0));
        options_area_scripts->setMaximumSize(QSize(16777215, 16777215));

        retranslateUi(options_area_scripts);

        QMetaObject::connectSlotsByName(options_area_scripts);
    } // setupUi

    void retranslateUi(QWidget *options_area_scripts)
    {
        options_area_scripts->setWindowTitle(QApplication::translate("options_area_scripts", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class options_area_scripts: public Ui_options_area_scripts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_AREA_SCRIPTS_H
