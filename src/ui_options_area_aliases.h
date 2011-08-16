/********************************************************************************
** Form generated from reading UI file 'options_area_aliases.ui'
**
** Created: Tue Aug 16 19:22:37 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_AREA_ALIASES_H
#define UI_OPTIONS_AREA_ALIASES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_options_area_aliases
{
public:

    void setupUi(QWidget *options_area_aliases)
    {
        if (options_area_aliases->objectName().isEmpty())
            options_area_aliases->setObjectName(QString::fromUtf8("options_area_aliases"));
        options_area_aliases->resize(230, 48);

        retranslateUi(options_area_aliases);

        QMetaObject::connectSlotsByName(options_area_aliases);
    } // setupUi

    void retranslateUi(QWidget *options_area_aliases)
    {
        options_area_aliases->setWindowTitle(QApplication::translate("options_area_aliases", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class options_area_aliases: public Ui_options_area_aliases {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_AREA_ALIASES_H
