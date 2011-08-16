/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created: Mon Aug 15 14:54:54 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMdiArea>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *dactionConnect;
    QAction *dactionDisconnect;
    QAction *dactionReconnect;
    QAction *dactionOptions;
    QAction *dactionScriptEditor;
    QAction *dactionNotepad;
    QAction *dactionHelp;
    QAction *dactionForum_2;
    QAction *dactionAbout;
    QAction *dactionIRC;
    QAction *dactionVideo;
    QAction *dactionReplay;
    QAction *dactionForum;
    QAction *dactionDownload;
    QAction *dactionIRC_2;
    QAction *actionLive_Help_Chat;
    QAction *actionShow_Map;
    QAction *actionPackage_manager;
    QAction *actionTest1;
    QAction *actionAsdf;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QMdiArea *mdiArea;
    QMenuBar *MenuBar;
    QMenu *menuEditor;
    QMenu *menuOptions;
    QMenu *menuHelp;
    QMenu *menuAbout;
    QMenu *menuGames;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(750, 502);
        MainWindow->setBaseSize(QSize(780, 590));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/mudlet_main_16px.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(0, 0));
        MainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::VerticalTabs);
        dactionConnect = new QAction(MainWindow);
        dactionConnect->setObjectName(QString::fromUtf8("dactionConnect"));
        dactionDisconnect = new QAction(MainWindow);
        dactionDisconnect->setObjectName(QString::fromUtf8("dactionDisconnect"));
        dactionReconnect = new QAction(MainWindow);
        dactionReconnect->setObjectName(QString::fromUtf8("dactionReconnect"));
        dactionOptions = new QAction(MainWindow);
        dactionOptions->setObjectName(QString::fromUtf8("dactionOptions"));
        dactionScriptEditor = new QAction(MainWindow);
        dactionScriptEditor->setObjectName(QString::fromUtf8("dactionScriptEditor"));
        dactionNotepad = new QAction(MainWindow);
        dactionNotepad->setObjectName(QString::fromUtf8("dactionNotepad"));
        dactionHelp = new QAction(MainWindow);
        dactionHelp->setObjectName(QString::fromUtf8("dactionHelp"));
        dactionForum_2 = new QAction(MainWindow);
        dactionForum_2->setObjectName(QString::fromUtf8("dactionForum_2"));
        dactionAbout = new QAction(MainWindow);
        dactionAbout->setObjectName(QString::fromUtf8("dactionAbout"));
        dactionIRC = new QAction(MainWindow);
        dactionIRC->setObjectName(QString::fromUtf8("dactionIRC"));
        dactionVideo = new QAction(MainWindow);
        dactionVideo->setObjectName(QString::fromUtf8("dactionVideo"));
        dactionReplay = new QAction(MainWindow);
        dactionReplay->setObjectName(QString::fromUtf8("dactionReplay"));
        dactionForum = new QAction(MainWindow);
        dactionForum->setObjectName(QString::fromUtf8("dactionForum"));
        dactionDownload = new QAction(MainWindow);
        dactionDownload->setObjectName(QString::fromUtf8("dactionDownload"));
        dactionIRC_2 = new QAction(MainWindow);
        dactionIRC_2->setObjectName(QString::fromUtf8("dactionIRC_2"));
        actionLive_Help_Chat = new QAction(MainWindow);
        actionLive_Help_Chat->setObjectName(QString::fromUtf8("actionLive_Help_Chat"));
        actionShow_Map = new QAction(MainWindow);
        actionShow_Map->setObjectName(QString::fromUtf8("actionShow_Map"));
        actionPackage_manager = new QAction(MainWindow);
        actionPackage_manager->setObjectName(QString::fromUtf8("actionPackage_manager"));
        actionTest1 = new QAction(MainWindow);
        actionTest1->setObjectName(QString::fromUtf8("actionTest1"));
        actionAsdf = new QAction(MainWindow);
        actionAsdf->setObjectName(QString::fromUtf8("actionAsdf"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        sizePolicy.setHeightForWidth(mdiArea->sizePolicy().hasHeightForWidth());
        mdiArea->setSizePolicy(sizePolicy);
        mdiArea->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(6);
        font.setStyleStrategy(QFont::PreferAntialias);
        mdiArea->setFont(font);
        mdiArea->setLineWidth(0);
        mdiArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        mdiArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        mdiArea->setViewMode(QMdiArea::TabbedView);
        mdiArea->setTabShape(QTabWidget::Rounded);
        mdiArea->setTabPosition(QTabWidget::North);

        verticalLayout->addWidget(mdiArea);

        MainWindow->setCentralWidget(centralwidget);
        MenuBar = new QMenuBar(MainWindow);
        MenuBar->setObjectName(QString::fromUtf8("MenuBar"));
        MenuBar->setGeometry(QRect(0, 0, 750, 21));
        menuEditor = new QMenu(MenuBar);
        menuEditor->setObjectName(QString::fromUtf8("menuEditor"));
        menuOptions = new QMenu(MenuBar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuHelp = new QMenu(MenuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuAbout = new QMenu(MenuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuGames = new QMenu(MenuBar);
        menuGames->setObjectName(QString::fromUtf8("menuGames"));
        MainWindow->setMenuBar(MenuBar);

        MenuBar->addAction(menuGames->menuAction());
        MenuBar->addAction(menuEditor->menuAction());
        MenuBar->addAction(menuOptions->menuAction());
        MenuBar->addAction(menuHelp->menuAction());
        MenuBar->addAction(menuAbout->menuAction());
        menuEditor->addAction(dactionScriptEditor);
        menuEditor->addAction(actionShow_Map);
        menuEditor->addAction(dactionNotepad);
        menuEditor->addAction(actionLive_Help_Chat);
        menuEditor->addAction(actionPackage_manager);
        menuEditor->addAction(dactionReplay);
        menuOptions->addAction(dactionOptions);
        menuHelp->addAction(dactionHelp);
        menuHelp->addAction(dactionVideo);
        menuHelp->addAction(dactionIRC);
        menuHelp->addAction(dactionForum);
        menuAbout->addAction(dactionAbout);
        menuAbout->addAction(dactionDownload);
        menuGames->addAction(dactionConnect);
        menuGames->addSeparator();
        menuGames->addAction(dactionDisconnect);
        menuGames->addAction(dactionReconnect);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Mudlet 1.0 - alpha 1", 0, QApplication::UnicodeUTF8));
        dactionConnect->setText(QApplication::translate("MainWindow", "Play", 0, QApplication::UnicodeUTF8));
        dactionConnect->setShortcut(QApplication::translate("MainWindow", "Alt+C", 0, QApplication::UnicodeUTF8));
        dactionDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", 0, QApplication::UnicodeUTF8));
        dactionDisconnect->setShortcut(QApplication::translate("MainWindow", "Alt+D", 0, QApplication::UnicodeUTF8));
        dactionReconnect->setText(QApplication::translate("MainWindow", "Reconnect", 0, QApplication::UnicodeUTF8));
        dactionReconnect->setShortcut(QApplication::translate("MainWindow", "Alt+R", 0, QApplication::UnicodeUTF8));
        dactionOptions->setText(QApplication::translate("MainWindow", "Preferences", 0, QApplication::UnicodeUTF8));
        dactionOptions->setShortcut(QApplication::translate("MainWindow", "Alt+P", 0, QApplication::UnicodeUTF8));
        dactionScriptEditor->setText(QApplication::translate("MainWindow", "Script editor", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        dactionScriptEditor->setToolTip(QApplication::translate("MainWindow", "Open script editor", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        dactionScriptEditor->setShortcut(QApplication::translate("MainWindow", "Alt+E", 0, QApplication::UnicodeUTF8));
        dactionNotepad->setText(QApplication::translate("MainWindow", "Notepad", 0, QApplication::UnicodeUTF8));
        dactionNotepad->setShortcut(QApplication::translate("MainWindow", "Alt+N", 0, QApplication::UnicodeUTF8));
        dactionHelp->setText(QApplication::translate("MainWindow", "Manual", 0, QApplication::UnicodeUTF8));
        dactionForum_2->setText(QApplication::translate("MainWindow", "Online forum", 0, QApplication::UnicodeUTF8));
        dactionAbout->setText(QApplication::translate("MainWindow", "About Mudlet", 0, QApplication::UnicodeUTF8));
        dactionIRC->setText(QApplication::translate("MainWindow", "IRC help channel", 0, QApplication::UnicodeUTF8));
        dactionVideo->setText(QApplication::translate("MainWindow", "Video tutorials", 0, QApplication::UnicodeUTF8));
        dactionReplay->setText(QApplication::translate("MainWindow", "Load replay", 0, QApplication::UnicodeUTF8));
        dactionForum->setText(QApplication::translate("MainWindow", "Online forum", 0, QApplication::UnicodeUTF8));
        dactionDownload->setText(QApplication::translate("MainWindow", "Download latest version", 0, QApplication::UnicodeUTF8));
        dactionIRC_2->setText(QApplication::translate("MainWindow", "Help chat", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        dactionIRC_2->setToolTip(QApplication::translate("MainWindow", "Get live help on IRC. If nobody answers right away, give it time", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLive_Help_Chat->setText(QApplication::translate("MainWindow", "Live help chat", 0, QApplication::UnicodeUTF8));
        actionShow_Map->setText(QApplication::translate("MainWindow", "Show map", 0, QApplication::UnicodeUTF8));
        actionShow_Map->setShortcut(QApplication::translate("MainWindow", "Alt+M", 0, QApplication::UnicodeUTF8));
        actionPackage_manager->setText(QApplication::translate("MainWindow", "Package manager", 0, QApplication::UnicodeUTF8));
        actionPackage_manager->setShortcut(QApplication::translate("MainWindow", "Alt+P", 0, QApplication::UnicodeUTF8));
        actionTest1->setText(QApplication::translate("MainWindow", "test1", 0, QApplication::UnicodeUTF8));
        actionAsdf->setText(QApplication::translate("MainWindow", "asdf", 0, QApplication::UnicodeUTF8));
        menuEditor->setTitle(QApplication::translate("MainWindow", "Toolbox", 0, QApplication::UnicodeUTF8));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Options", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        menuGames->setTitle(QApplication::translate("MainWindow", "Games", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
