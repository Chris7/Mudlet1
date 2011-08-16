/********************************************************************************
** Form generated from reading UI file 'room_exits.ui'
**
** Created: Mon Aug 15 14:54:55 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOM_EXITS_H
#define UI_ROOM_EXITS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_roomExits
{
public:
    QLineEdit *nw;
    QLineEdit *n;
    QLineEdit *ne;
    QLineEdit *sw;
    QLineEdit *se;
    QLineEdit *s;
    QLineEdit *e;
    QLineEdit *w;
    QLineEdit *up;
    QLineEdit *down;
    QLineEdit *out;
    QLineEdit *in;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QTreeWidget *specialExits;
    QPushButton *lnw;
    QPushButton *lw;
    QPushButton *lsw;
    QPushButton *ln;
    QPushButton *ls;
    QPushButton *lne;
    QPushButton *le;
    QPushButton *lse;
    QPushButton *lup;
    QPushButton *ldown;
    QPushButton *lin;
    QPushButton *lout;
    QPushButton *saveButton;
    QPushButton *pushButton_14;
    QPushButton *addSpecialExit;

    void setupUi(QDialog *roomExits)
    {
        if (roomExits->objectName().isEmpty())
            roomExits->setObjectName(QString::fromUtf8("roomExits"));
        roomExits->resize(550, 524);
        nw = new QLineEdit(roomExits);
        nw->setObjectName(QString::fromUtf8("nw"));
        nw->setGeometry(QRect(50, 50, 81, 20));
        n = new QLineEdit(roomExits);
        n->setObjectName(QString::fromUtf8("n"));
        n->setGeometry(QRect(190, 50, 81, 20));
        ne = new QLineEdit(roomExits);
        ne->setObjectName(QString::fromUtf8("ne"));
        ne->setGeometry(QRect(320, 50, 81, 20));
        sw = new QLineEdit(roomExits);
        sw->setObjectName(QString::fromUtf8("sw"));
        sw->setGeometry(QRect(50, 180, 81, 20));
        se = new QLineEdit(roomExits);
        se->setObjectName(QString::fromUtf8("se"));
        se->setGeometry(QRect(320, 180, 81, 20));
        s = new QLineEdit(roomExits);
        s->setObjectName(QString::fromUtf8("s"));
        s->setGeometry(QRect(190, 180, 81, 20));
        e = new QLineEdit(roomExits);
        e->setObjectName(QString::fromUtf8("e"));
        e->setGeometry(QRect(320, 110, 81, 20));
        w = new QLineEdit(roomExits);
        w->setObjectName(QString::fromUtf8("w"));
        w->setGeometry(QRect(50, 110, 81, 20));
        up = new QLineEdit(roomExits);
        up->setObjectName(QString::fromUtf8("up"));
        up->setGeometry(QRect(460, 50, 81, 20));
        down = new QLineEdit(roomExits);
        down->setObjectName(QString::fromUtf8("down"));
        down->setGeometry(QRect(460, 110, 81, 20));
        out = new QLineEdit(roomExits);
        out->setObjectName(QString::fromUtf8("out"));
        out->setGeometry(QRect(460, 230, 81, 20));
        in = new QLineEdit(roomExits);
        in->setObjectName(QString::fromUtf8("in"));
        in->setGeometry(QRect(460, 180, 81, 20));
        label = new QLabel(roomExits);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 20, 21, 16));
        label_2 = new QLabel(roomExits);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 90, 21, 16));
        label_3 = new QLabel(roomExits);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 20, 21, 16));
        label_4 = new QLabel(roomExits);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(350, 20, 21, 16));
        label_6 = new QLabel(roomExits);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(350, 90, 21, 16));
        label_7 = new QLabel(roomExits);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 160, 21, 16));
        label_8 = new QLabel(roomExits);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(230, 160, 21, 16));
        label_9 = new QLabel(roomExits);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(350, 160, 21, 16));
        label_10 = new QLabel(roomExits);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(490, 30, 21, 16));
        label_11 = new QLabel(roomExits);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(480, 90, 46, 13));
        label_12 = new QLabel(roomExits);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(490, 140, 21, 16));
        label_13 = new QLabel(roomExits);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(490, 210, 21, 16));
        specialExits = new QTreeWidget(roomExits);
        specialExits->setObjectName(QString::fromUtf8("specialExits"));
        specialExits->setGeometry(QRect(10, 270, 531, 201));
        specialExits->setRootIsDecorated(false);
        specialExits->setItemsExpandable(false);
        specialExits->setColumnCount(3);
        specialExits->header()->setDefaultSectionSize(80);
        specialExits->header()->setStretchLastSection(true);
        lnw = new QPushButton(roomExits);
        lnw->setObjectName(QString::fromUtf8("lnw"));
        lnw->setGeometry(QRect(10, 50, 31, 23));
        lnw->setFocusPolicy(Qt::NoFocus);
        lnw->setCheckable(true);
        lw = new QPushButton(roomExits);
        lw->setObjectName(QString::fromUtf8("lw"));
        lw->setGeometry(QRect(10, 110, 31, 23));
        lw->setFocusPolicy(Qt::NoFocus);
        lw->setCheckable(true);
        lsw = new QPushButton(roomExits);
        lsw->setObjectName(QString::fromUtf8("lsw"));
        lsw->setGeometry(QRect(10, 180, 31, 23));
        lsw->setFocusPolicy(Qt::NoFocus);
        lsw->setCheckable(true);
        ln = new QPushButton(roomExits);
        ln->setObjectName(QString::fromUtf8("ln"));
        ln->setGeometry(QRect(150, 50, 31, 23));
        ln->setFocusPolicy(Qt::NoFocus);
        ln->setCheckable(true);
        ls = new QPushButton(roomExits);
        ls->setObjectName(QString::fromUtf8("ls"));
        ls->setGeometry(QRect(150, 180, 31, 23));
        ls->setFocusPolicy(Qt::NoFocus);
        ls->setCheckable(true);
        lne = new QPushButton(roomExits);
        lne->setObjectName(QString::fromUtf8("lne"));
        lne->setGeometry(QRect(280, 50, 31, 23));
        lne->setFocusPolicy(Qt::NoFocus);
        lne->setCheckable(true);
        le = new QPushButton(roomExits);
        le->setObjectName(QString::fromUtf8("le"));
        le->setGeometry(QRect(280, 110, 31, 23));
        le->setFocusPolicy(Qt::NoFocus);
        le->setCheckable(true);
        lse = new QPushButton(roomExits);
        lse->setObjectName(QString::fromUtf8("lse"));
        lse->setGeometry(QRect(280, 180, 31, 23));
        lse->setFocusPolicy(Qt::NoFocus);
        lse->setCheckable(true);
        lup = new QPushButton(roomExits);
        lup->setObjectName(QString::fromUtf8("lup"));
        lup->setGeometry(QRect(420, 50, 31, 23));
        lup->setFocusPolicy(Qt::NoFocus);
        lup->setCheckable(true);
        ldown = new QPushButton(roomExits);
        ldown->setObjectName(QString::fromUtf8("ldown"));
        ldown->setGeometry(QRect(420, 110, 31, 23));
        ldown->setFocusPolicy(Qt::NoFocus);
        ldown->setCheckable(true);
        lin = new QPushButton(roomExits);
        lin->setObjectName(QString::fromUtf8("lin"));
        lin->setGeometry(QRect(420, 180, 31, 23));
        lin->setFocusPolicy(Qt::NoFocus);
        lin->setCheckable(true);
        lout = new QPushButton(roomExits);
        lout->setObjectName(QString::fromUtf8("lout"));
        lout->setGeometry(QRect(420, 230, 31, 23));
        lout->setFocusPolicy(Qt::NoFocus);
        lout->setCheckable(true);
        saveButton = new QPushButton(roomExits);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(360, 480, 75, 23));
        pushButton_14 = new QPushButton(roomExits);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(450, 480, 75, 23));
        addSpecialExit = new QPushButton(roomExits);
        addSpecialExit->setObjectName(QString::fromUtf8("addSpecialExit"));
        addSpecialExit->setGeometry(QRect(60, 480, 121, 23));
        QWidget::setTabOrder(nw, n);
        QWidget::setTabOrder(n, ne);
        QWidget::setTabOrder(ne, w);
        QWidget::setTabOrder(w, e);
        QWidget::setTabOrder(e, sw);
        QWidget::setTabOrder(sw, s);
        QWidget::setTabOrder(s, se);
        QWidget::setTabOrder(se, up);
        QWidget::setTabOrder(up, down);
        QWidget::setTabOrder(down, in);
        QWidget::setTabOrder(in, out);
        QWidget::setTabOrder(out, addSpecialExit);
        QWidget::setTabOrder(addSpecialExit, specialExits);
        QWidget::setTabOrder(specialExits, saveButton);
        QWidget::setTabOrder(saveButton, pushButton_14);

        retranslateUi(roomExits);
        QObject::connect(lnw, SIGNAL(clicked(bool)), nw, SLOT(setDisabled(bool)));
        QObject::connect(ln, SIGNAL(clicked(bool)), n, SLOT(setDisabled(bool)));
        QObject::connect(lne, SIGNAL(clicked(bool)), ne, SLOT(setDisabled(bool)));
        QObject::connect(lup, SIGNAL(clicked(bool)), up, SLOT(setDisabled(bool)));
        QObject::connect(lw, SIGNAL(clicked(bool)), w, SLOT(setDisabled(bool)));
        QObject::connect(le, SIGNAL(clicked(bool)), e, SLOT(setDisabled(bool)));
        QObject::connect(ldown, SIGNAL(clicked(bool)), down, SLOT(setDisabled(bool)));
        QObject::connect(lsw, SIGNAL(clicked(bool)), sw, SLOT(setDisabled(bool)));
        QObject::connect(ls, SIGNAL(clicked(bool)), s, SLOT(setDisabled(bool)));
        QObject::connect(lse, SIGNAL(clicked(bool)), se, SLOT(setDisabled(bool)));
        QObject::connect(lin, SIGNAL(clicked(bool)), in, SLOT(setDisabled(bool)));
        QObject::connect(lout, SIGNAL(clicked(bool)), out, SLOT(setDisabled(bool)));
        QObject::connect(pushButton_14, SIGNAL(clicked()), roomExits, SLOT(reject()));

        QMetaObject::connectSlotsByName(roomExits);
    } // setupUi

    void retranslateUi(QDialog *roomExits)
    {
        roomExits->setWindowTitle(QApplication::translate("roomExits", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("roomExits", "NW", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("roomExits", "W", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("roomExits", "N", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("roomExits", "NE", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("roomExits", "E", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("roomExits", "SW", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("roomExits", "S", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("roomExits", "SE", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("roomExits", "UP", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("roomExits", "DOWN", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("roomExits", "IN", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("roomExits", "OUT", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = specialExits->headerItem();
        ___qtreewidgetitem->setText(2, QApplication::translate("roomExits", "Command or script (Lua scripts need to be prefixed with \"script:\"", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("roomExits", "Exit room ID", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("roomExits", "Lock", 0, QApplication::UnicodeUTF8));
        lnw->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
        lw->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
        lsw->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
        ln->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
        ls->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
        lne->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
        le->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
        lse->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
        lup->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
        ldown->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
        lin->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
        lout->setText(QApplication::translate("roomExits", "lock", 0, QApplication::UnicodeUTF8));
        saveButton->setText(QApplication::translate("roomExits", "OK", 0, QApplication::UnicodeUTF8));
        pushButton_14->setText(QApplication::translate("roomExits", "Cancel", 0, QApplication::UnicodeUTF8));
        addSpecialExit->setText(QApplication::translate("roomExits", "add special exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class roomExits: public Ui_roomExits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOM_EXITS_H
