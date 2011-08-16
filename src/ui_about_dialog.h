/********************************************************************************
** Form generated from reading UI file 'about_dialog.ui'
**
** Created: Mon Aug 15 14:54:54 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_DIALOG_H
#define UI_ABOUT_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTabWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_about_dialog
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;

    void setupUi(QDialog *about_dialog)
    {
        if (about_dialog->objectName().isEmpty())
            about_dialog->setObjectName(QString::fromUtf8("about_dialog"));
        about_dialog->resize(781, 380);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(about_dialog->sizePolicy().hasHeightForWidth());
        about_dialog->setSizePolicy(sizePolicy);
        about_dialog->setMinimumSize(QSize(0, 380));
        about_dialog->setMaximumSize(QSize(800, 380));
        QPalette palette;
        QBrush brush(QColor(255, 254, 215, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(188, 170, 145, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        about_dialog->setPalette(palette);
        about_dialog->setAutoFillBackground(true);
        horizontalLayout = new QHBoxLayout(about_dialog);
        horizontalLayout->setSpacing(9);
#ifndef Q_OS_MAC
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
#endif
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(about_dialog);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setPixmap(QPixmap(QString::fromUtf8(":/Mudlet_splashscreen_main.png")));
        label->setScaledContents(false);

        horizontalLayout->addWidget(label);

        tabWidget = new QTabWidget(about_dialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QPalette palette1;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(127, 127, 107, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(170, 169, 143, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        QBrush brush6(QColor(255, 254, 235, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        tabWidget->setPalette(palette1);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textBrowser = new QTextBrowser(tab);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy1);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        textBrowser->setPalette(palette2);
        textBrowser->setAutoFillBackground(true);
        textBrowser->setFrameShape(QFrame::NoFrame);
        textBrowser->setOpenExternalLinks(true);

        verticalLayout_2->addWidget(textBrowser);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setFrameShape(QFrame::NoFrame);

        verticalLayout->addWidget(textEdit);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(about_dialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(about_dialog);
    } // setupUi

    void retranslateUi(QDialog *about_dialog)
    {
        about_dialog->setWindowTitle(QApplication::translate("about_dialog", "About Mudlet", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        textBrowser->setHtml(QApplication::translate("about_dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:10pt; font-weight:600; text-decoration: underline; color:#005500;\">Mudlet 2.0 June 12, 2011</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'DejaVu Sans'; font-size:10pt; font-weigh"
                        "t:600; text-decoration: underline; color:#005500;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:600; color:#000000;\">homepage and forum at: </span><a href=\"http://mudlet.sourceforge.net\"><span style=\" font-family:'Sans Serif'; font-size:9pt; text-decoration: underline; color:#0000ff;\">mudlet.sourceforge.net</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:600; color:#000000;\">latest version can be found at:</span><span style=\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:600; color:#00007f;\"> </span><a href=\"http://mudlet.sourceforge.net\"><span style=\" font-family:'Sans Serif'; font-size:9pt; text-decoration: underline; color:#0000ff;\">mudlet.sourceforge.net</span></a><span style="
                        "\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:600; color:#00007f;\">/</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:600;\">documentation and Help:</span><span style=\" font-family:'Sans Serif'; font-size:9pt;\"> </span><a href=\"http://mudlet.sourceforge.net/wordpress/?page_id=40\"><span style=\" font-family:'Sans Serif'; font-size:9pt; text-decoration: underline; color:#0000ff;\">Manual, Help and FAQs</span></a></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'DejaVu Sans'; font-size:8pt;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"></p>\n"
"<p style=\" margin-to"
                        "p:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:10pt; font-weight:600;\">Author: </span><span style=\" font-family:'DejaVu Sans'; font-size:10pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Heiko K\303\266hn</span><span style=\" font-family:'DejaVu Sans'; font-size:10pt; font-weight:600;\">  ( </span><span style=\" font-family:'DejaVu Sans'; font-size:10pt; font-weight:600; color:#0000ff;\">KoehnHeiko@googlemail.com </span><span style=\" font-family:'DejaVu Sans'; font-size:10pt; font-weight:600;\">) </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:6pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font"
                        "-size:8pt; font-weight:600;\">Credits:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'DejaVu Sans'; font-size:8pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Vadim Peretokin</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; text-decoration: underline; color:#000000;\"> </span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\">(</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#0000ff;\">vadim.peretokin@mudlet.org</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\">) </span><span style=\" font-family:'Sans Serif'; font-size:9pt;\">GUI design and initial feature planning. He is responsible for the proje"
                        "ct homepage and the user manual. Maintainer of the Ubuntu packages. Project management, public relations &amp; user help. He has been with the project from the very beginning and is an official spokesman of the project.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:6pt; color:#000000;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Stephen Hansen</span><span style=\" font-family:'DejaVu Sans'; font-size:7pt; color:#000000;\"> ( </span><span style=\" font-family:'Bitstream Vera Sans'; font-size:8pt; text-decoration: underline; color:#5500ff;\">me+</span><a href=\"mailto:mudlet@ixokai.io\"><span style=\" font-family:'Bitstream Vera Sans'; font-size:8pt; text-decorat"
                        "ion: underline; color:#5500ff;\">mudlet@ixokai.io</span></a><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#0000ff;\"> </span><span style=\" font-family:'Sans Serif'; font-size:9pt;\">) has developed the current improved MAC OSX installer. He is the current maintainer of the MAC version of Mudlet and he has contributed the database Lua api.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Bruno Bigras</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; font-weight:600; color:#000000;\"> </span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\">( </span><span style=\" "
                        "font-family:'DejaVu Sans'; font-size:8pt; color:#0000ff;\">bruno@burnbox.net</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\"> ) </span><span style=\" font-family:'Sans Serif'; font-size:9pt;\">has developed our cross platform cmake build script and he has committed a number of patches.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans'; font-size:10pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Damian Monogue</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\"> (</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#0000ff;\">demonnic@gmail.com)</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt;"
                        " color:#000000;\"> Former maintainer of the early Windows and Apple OSX packages. He also administers our server and helps the project in many ways. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Thorsten Wilms</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt;\"> (</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#0000ff;\">t_w_@freenet.de). </span><span style=\" font-family:'Sans Serif'; font-size:9pt;\">has designed our beautiful logo, our splash screen, the about dialog, our website, several icons and badges. Visit his homepage at </span><a href=\"http://thorwil"
                        ".wordpress.com\"><span style=\" font-family:'Sans Serif'; font-size:9pt; text-decoration: underline; color:#0000ff;\">thorwil.wordpress.com</span></a><span style=\" font-family:'Sans Serif'; font-size:9pt;\">.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'DejaVu Sans'; font-size:8pt; color:#0000ff;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Leigh Stillard</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#bc8942;\"> </span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\">( </span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#0000ff;\">leigh.stillard@gmail.com</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; "
                        "color:#000000;\"> ) is the author of our windows installer. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Ben Carlsen</span><span style=\" font-family:'DejaVu Sans'; font-size:7pt; color:#000000;\"> ( </span><a href=\"mailto:arkholt@gmail.com\"><span style=\" font-family:'Sans Serif'; font-size:8pt; text-decoration: underline; color:#0000ff;\">arkholt@gmail.com</span></a><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#0000ff;\"> </span><span style=\" font-family:'Sans Serif'; font-size:9pt;\">) has developed the first version of our MAC OSX installer. He is the former maintainer of"
                        " the MAC version of Mudlet. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">John Dahlstr\303\266m</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; font-weight:600; color:#000000;\"> </span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\">( </span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#0000ff;\">email@johndahlstrom.se </span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\">)  helped develop and debug the Lua API. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-righ"
                        "t:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Carter Dewey</span><span style=\" font-family:'Sans Serif'; font-size:9pt;\"> (</span><span style=\" font-family:'Sans Serif'; font-size:9pt; color:#0000ff;\">eldarerathis@gmail.com</span><span style=\" font-family:'Sans Serif'; font-size:9pt;\">) has submitted 3 small patches so far. Hopefully, we'll see more in the future.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'San"
                        "s Serif'; font-size:9pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Blaine von Roeder</span><span style=\" font-family:'Sans Serif'; font-size:9pt;\"> () joined in December 2009. So far he has contributed to the Lua API, submitted small bugfix patches and has helped with release management of 1.0.5.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Ben Smith</span><span style=\" font-family:'Sans Serif'; font-size:9pt;\"> () joined in December 2009 though he's been around much longer. Promising contributions to the Lua API. He is the current Maintainer of the Lua API.</span></p>\n"
"<p style=\"-qt-p"
                        "aragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:600; color:#bc8942;\">James Younquist</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\"> (daemacles@yahoo.com) contributed the Geyser layout manager for Mudlet in March 2010. It is written in Lua and aims at simplifying user GUI scripting. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Bitstream Vera Sans'; font-size:9pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\""
                        " font-family:'Sans Serif'; font-size:9pt; font-weight:600; color:#bc8942;\">Karsten Bock</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\"> contributed several improvements and new features for Geyser. He is the current maintainer of Geyser.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Maksym V. Grinenko</span><span style=\" font-family:'DejaVu Sans'; font-size:7pt; color:#000000;\"> (</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#0055ff;\">maksym.grinenko@gmail.com</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\""
                        ">) work on the manual, forum help and helps with GUI design and documentation.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\">Most icons are taken from the </span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">KDE4 oxygen icon theme</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\"> at </span><a href=\"www.oxygen-icons.org or www.kde.org\"><span style=\" font-family:'Sans Serif'; font-size:9pt; text-decoration: underline; color:#0000ff;\">www.oxygen-icons.org or www.kde.org</span></a><span style=\" font-family:'DejaVu Sans'; font-size:8pt; co"
                        "lor:#00aa00;\">.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\">The rest is from Thorsten Wilms.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\">Special thanks to </span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; font-weight:600; color:#0000ff;\">Brett Duzevich</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\"> and </span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; font-weight:600; color:#0000ff;\">Ronny Ho</span><span style=\""
                        " font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\">. They have contributed many good ideas and thus helped improve the scripting framework substantially.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\">Thanks to </span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Tomas Mecir</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\"> (</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#0000ff;\">kmuddy@kmuddy.com</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\">) who brought us all together a"
                        "nd inspired us with his KMuddy project. Mudlet is using some of the telnet code he wrote for his KMuddy project (</span><a href=\"www.kmuddy.com\"><span style=\" font-family:'Sans Serif'; font-size:9pt; text-decoration: underline; color:#0000ff;\">www.kmuddy.com</span></a><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\">).</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\">Special thanks to </span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; font-weight:600; text-decoration: underline; color:#bc8942;\">Nick Gammon</span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; font-weight:600; text-decoration: "
                        "underline; color:#000000;\"> </span><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\"> (</span><a href=\"http://www.gammon.com.au/mushclient/mushclient.htm\"><span style=\" font-family:'Sans Serif'; font-size:9pt; text-decoration: underline; color:#0000ff;\">http://www.gammon.com.au/mushclient/mushclient.htm</span></a><span style=\" font-family:'DejaVu Sans'; font-size:8pt; color:#000000;\">) for giving us some valued pieces of advice.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:6pt; color:#000000;\"> </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:6pt; color:#000000;\"> </span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0p"
                        "x; -qt-block-indent:0; text-indent:0px; font-family:'Sans Serif'; font-size:9pt;\"></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("about_dialog", "About Mudlet", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("about_dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:12pt;\">Mudlet has been written by Heiko K\303\266hn, KoehnHeiko@googlemail.com.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'DejaVu Sans'; font-size:12pt; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; mar"
                        "gin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:12pt; color:#000000;\">Mudlet is published under the GPL License version 3 </span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'DejaVu Sans'; font-size:9pt; color:#000000;\"></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:9pt; font-weight:600; color:#000000;\">GNU GENERAL PUBLIC LICENSE</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:9pt;\">Version 3, 29 June 2007 </span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; ma"
                        "rgin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'DejaVu Sans'; font-size:9pt;\">Copyright \302\251 2007 Free Software Foundation, Inc. http://fsf.org/</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("about_dialog", "License", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class about_dialog: public Ui_about_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_DIALOG_H
