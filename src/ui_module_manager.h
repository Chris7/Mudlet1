/********************************************************************************
** Form generated from reading UI file 'module_manager.ui'
**
** Created: Sat Oct 22 15:00:28 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULE_MANAGER_H
#define UI_MODULE_MANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_packageDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *moduleTable;
    QTextBrowser *textBrowser;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;
    QPushButton *installButton;
    QPushButton *uninstallButton;

    void setupUi(QDialog *packageDialog)
    {
        if (packageDialog->objectName().isEmpty())
            packageDialog->setObjectName(QString::fromUtf8("packageDialog"));
        packageDialog->resize(652, 490);
        verticalLayout_3 = new QVBoxLayout(packageDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget = new QWidget(packageDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        moduleTable = new QTableWidget(widget);
        if (moduleTable->columnCount() < 4)
            moduleTable->setColumnCount(4);
        moduleTable->setObjectName(QString::fromUtf8("moduleTable"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(moduleTable->sizePolicy().hasHeightForWidth());
        moduleTable->setSizePolicy(sizePolicy1);
        moduleTable->setSortingEnabled(true);
        moduleTable->setRowCount(0);
        moduleTable->setColumnCount(4);
        moduleTable->horizontalHeader()->setCascadingSectionResizes(false);
        moduleTable->horizontalHeader()->setStretchLastSection(true);
        moduleTable->verticalHeader()->setStretchLastSection(false);

        verticalLayout_2->addWidget(moduleTable);

        textBrowser = new QTextBrowser(widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(100);
        sizePolicy2.setVerticalStretch(200);
        sizePolicy2.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy2);
        textBrowser->setFrameShape(QFrame::Box);
        textBrowser->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(textBrowser);


        verticalLayout_3->addWidget(widget);

        widget_2 = new QWidget(packageDialog);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy3);
        widget_2->setLayoutDirection(Qt::RightToLeft);
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonBox = new QDialogButtonBox(widget_2);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy4);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        horizontalLayout->addWidget(buttonBox);

        installButton = new QPushButton(widget_2);
        installButton->setObjectName(QString::fromUtf8("installButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(installButton->sizePolicy().hasHeightForWidth());
        installButton->setSizePolicy(sizePolicy5);

        horizontalLayout->addWidget(installButton);

        uninstallButton = new QPushButton(widget_2);
        uninstallButton->setObjectName(QString::fromUtf8("uninstallButton"));
        sizePolicy5.setHeightForWidth(uninstallButton->sizePolicy().hasHeightForWidth());
        uninstallButton->setSizePolicy(sizePolicy5);

        horizontalLayout->addWidget(uninstallButton);


        verticalLayout_3->addWidget(widget_2);


        retranslateUi(packageDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), packageDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), packageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(packageDialog);
    } // setupUi

    void retranslateUi(QDialog *packageDialog)
    {
        packageDialog->setWindowTitle(QApplication::translate("packageDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("packageDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Modules are a way to utilize a common package across many sessions.  The priority system is the order is which modules are loaded, modules with the same priority will be loaded alphabetically.  The 'save &amp; sync' option, if it is enabled, will save the module to disk, and then reload the module for all open sessions which also are using that module.  For each save operation, modules are backed up to a directory, moduleBackups, within your mudlet directory.</p></body></html>", 0, QApplication::UnicodeUTF8));
        installButton->setText(QApplication::translate("packageDialog", "Install", 0, QApplication::UnicodeUTF8));
        uninstallButton->setText(QApplication::translate("packageDialog", "Uninstall", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class packageDialog: public Ui_packageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULE_MANAGER_H
