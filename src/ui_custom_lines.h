/********************************************************************************
** Form generated from reading UI file 'custom_lines.ui'
**
** Created: Sat Oct 29 20:50:44 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOM_LINES_H
#define UI_CUSTOM_LINES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_roomExits
{
public:
    QLabel *label;
    QPushButton *nw;
    QPushButton *n;
    QPushButton *ne;
    QPushButton *w;
    QPushButton *e;
    QPushButton *sw;
    QPushButton *s;
    QPushButton *se;
    QTreeWidget *specialExits;
    QPushButton *lineColor;
    QComboBox *lineStyle;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *cancelButton;
    QPushButton *in;
    QPushButton *out;
    QPushButton *up;
    QPushButton *down;
    QCheckBox *arrow;

    void setupUi(QDialog *roomExits)
    {
        if (roomExits->objectName().isEmpty())
            roomExits->setObjectName(QString::fromUtf8("roomExits"));
        roomExits->resize(605, 442);
        label = new QLabel(roomExits);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 371, 16));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        nw = new QPushButton(roomExits);
        nw->setObjectName(QString::fromUtf8("nw"));
        nw->setGeometry(QRect(10, 59, 114, 32));
        n = new QPushButton(roomExits);
        n->setObjectName(QString::fromUtf8("n"));
        n->setGeometry(QRect(130, 59, 114, 32));
        ne = new QPushButton(roomExits);
        ne->setObjectName(QString::fromUtf8("ne"));
        ne->setGeometry(QRect(250, 59, 114, 32));
        w = new QPushButton(roomExits);
        w->setObjectName(QString::fromUtf8("w"));
        w->setGeometry(QRect(10, 109, 114, 32));
        e = new QPushButton(roomExits);
        e->setObjectName(QString::fromUtf8("e"));
        e->setGeometry(QRect(250, 109, 114, 32));
        sw = new QPushButton(roomExits);
        sw->setObjectName(QString::fromUtf8("sw"));
        sw->setGeometry(QRect(10, 159, 114, 32));
        s = new QPushButton(roomExits);
        s->setObjectName(QString::fromUtf8("s"));
        s->setGeometry(QRect(130, 159, 114, 32));
        se = new QPushButton(roomExits);
        se->setObjectName(QString::fromUtf8("se"));
        se->setGeometry(QRect(250, 159, 114, 32));
        specialExits = new QTreeWidget(roomExits);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        specialExits->setHeaderItem(__qtreewidgetitem);
        specialExits->setObjectName(QString::fromUtf8("specialExits"));
        specialExits->setGeometry(QRect(20, 261, 571, 131));
        specialExits->setColumnCount(2);
        lineColor = new QPushButton(roomExits);
        lineColor->setObjectName(QString::fromUtf8("lineColor"));
        lineColor->setGeometry(QRect(290, 220, 81, 32));
        lineStyle = new QComboBox(roomExits);
        lineStyle->setObjectName(QString::fromUtf8("lineStyle"));
        lineStyle->setGeometry(QRect(90, 220, 111, 26));
        label_2 = new QLabel(roomExits);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 220, 62, 21));
        label_3 = new QLabel(roomExits);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 220, 71, 21));
        cancelButton = new QPushButton(roomExits);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(480, 400, 114, 32));
        in = new QPushButton(roomExits);
        in->setObjectName(QString::fromUtf8("in"));
        in->setGeometry(QRect(390, 160, 71, 32));
        out = new QPushButton(roomExits);
        out->setObjectName(QString::fromUtf8("out"));
        out->setGeometry(QRect(470, 160, 71, 32));
        up = new QPushButton(roomExits);
        up->setObjectName(QString::fromUtf8("up"));
        up->setGeometry(QRect(390, 110, 71, 32));
        down = new QPushButton(roomExits);
        down->setObjectName(QString::fromUtf8("down"));
        down->setGeometry(QRect(470, 110, 71, 32));
        arrow = new QCheckBox(roomExits);
        arrow->setObjectName(QString::fromUtf8("arrow"));
        arrow->setGeometry(QRect(400, 220, 181, 20));

        retranslateUi(roomExits);

        QMetaObject::connectSlotsByName(roomExits);
    } // setupUi

    void retranslateUi(QDialog *roomExits)
    {
        roomExits->setWindowTitle(QApplication::translate("roomExits", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("roomExits", "Chose start exit and line format", 0, QApplication::UnicodeUTF8));
        nw->setText(QApplication::translate("roomExits", "NW", 0, QApplication::UnicodeUTF8));
        n->setText(QApplication::translate("roomExits", "N", 0, QApplication::UnicodeUTF8));
        ne->setText(QApplication::translate("roomExits", "NE", 0, QApplication::UnicodeUTF8));
        w->setText(QApplication::translate("roomExits", "W", 0, QApplication::UnicodeUTF8));
        e->setText(QApplication::translate("roomExits", "E", 0, QApplication::UnicodeUTF8));
        sw->setText(QApplication::translate("roomExits", "SW", 0, QApplication::UnicodeUTF8));
        s->setText(QApplication::translate("roomExits", "S", 0, QApplication::UnicodeUTF8));
        se->setText(QApplication::translate("roomExits", "SE", 0, QApplication::UnicodeUTF8));
        lineColor->setText(QString());
        label_2->setText(QApplication::translate("roomExits", "Line style:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("roomExits", "Line color:", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("roomExits", "Cancel", 0, QApplication::UnicodeUTF8));
        in->setText(QApplication::translate("roomExits", "IN", 0, QApplication::UnicodeUTF8));
        out->setText(QApplication::translate("roomExits", "OUT", 0, QApplication::UnicodeUTF8));
        up->setText(QApplication::translate("roomExits", "UP", 0, QApplication::UnicodeUTF8));
        down->setText(QApplication::translate("roomExits", "DOWN", 0, QApplication::UnicodeUTF8));
        arrow->setText(QApplication::translate("roomExits", "line ends with an arrow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class roomExits: public Ui_roomExits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOM_LINES_H
