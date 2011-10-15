/********************************************************************************
** Form generated from reading UI file 'aliases_main_area.ui'
**
** Created: Sat Oct 15 13:23:43 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALIASES_MAIN_AREA_H
#define UI_ALIASES_MAIN_AREA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aliases_main_area
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_alias_name;
    QLabel *label;
    QLineEdit *pattern_textedit;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_3;
    QLineEdit *substitution;

    void setupUi(QWidget *aliases_main_area)
    {
        if (aliases_main_area->objectName().isEmpty())
            aliases_main_area->setObjectName(QString::fromUtf8("aliases_main_area"));
        aliases_main_area->resize(510, 100);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(aliases_main_area->sizePolicy().hasHeightForWidth());
        aliases_main_area->setSizePolicy(sizePolicy);
        aliases_main_area->setMinimumSize(QSize(0, 100));
        aliases_main_area->setMaximumSize(QSize(16777215, 100));
        gridLayout = new QGridLayout(aliases_main_area);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(aliases_main_area);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_alias_name = new QLineEdit(aliases_main_area);
        lineEdit_alias_name->setObjectName(QString::fromUtf8("lineEdit_alias_name"));
        lineEdit_alias_name->setMinimumSize(QSize(0, 21));
        lineEdit_alias_name->setMaximumSize(QSize(16777215, 21));

        gridLayout->addWidget(lineEdit_alias_name, 0, 1, 1, 3);

        label = new QLabel(aliases_main_area);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMinimumSize(QSize(67, 0));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        pattern_textedit = new QLineEdit(aliases_main_area);
        pattern_textedit->setObjectName(QString::fromUtf8("pattern_textedit"));
        pattern_textedit->setMinimumSize(QSize(0, 21));
        pattern_textedit->setMaximumSize(QSize(16777215, 21));
        QFont font;
        font.setPointSize(9);
        pattern_textedit->setFont(font);

        gridLayout->addWidget(pattern_textedit, 1, 1, 1, 1);

        label_4 = new QLabel(aliases_main_area);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 1, 2, 1, 1);

        comboBox = new QComboBox(aliases_main_area);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(false);

        gridLayout->addWidget(comboBox, 1, 3, 1, 1);

        label_3 = new QLabel(aliases_main_area);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(50, 0));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        substitution = new QLineEdit(aliases_main_area);
        substitution->setObjectName(QString::fromUtf8("substitution"));
        substitution->setMinimumSize(QSize(0, 21));
        substitution->setMaximumSize(QSize(16777215, 21));
        substitution->setFont(font);

        gridLayout->addWidget(substitution, 2, 1, 1, 3);

        QWidget::setTabOrder(lineEdit_alias_name, pattern_textedit);
        QWidget::setTabOrder(pattern_textedit, substitution);

        retranslateUi(aliases_main_area);

        QMetaObject::connectSlotsByName(aliases_main_area);
    } // setupUi

    void retranslateUi(QWidget *aliases_main_area)
    {
        aliases_main_area->setWindowTitle(QApplication::translate("aliases_main_area", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("aliases_main_area", "Alias name:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lineEdit_alias_name->setToolTip(QApplication::translate("aliases_main_area", "chose a unique name for your alias; it will show in the tree and is needed for scripting.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("aliases_main_area", "Pattern:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pattern_textedit->setToolTip(QApplication::translate("aliases_main_area", "enter a perl regex pattern for your alias; alias are triggers on your input", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("aliases_main_area", "Type:", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("aliases_main_area", "Regex", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("aliases_main_area", "Plain", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("aliases_main_area", "Substitution:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        substitution->setToolTip(QApplication::translate("aliases_main_area", "optional, simple text substitution that is sent to the MUD if the alias pattern matches your input", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class aliases_main_area: public Ui_aliases_main_area {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALIASES_MAIN_AREA_H
