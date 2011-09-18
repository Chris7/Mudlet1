/********************************************************************************
** Form generated from reading UI file 'trigger_pattern_edit.ui'
**
** Created: Fri Sep 16 19:12:07 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIGGER_PATTERN_EDIT_H
#define UI_TRIGGER_PATTERN_EDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_trigger_pattern_edit
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *number;
    QPushButton *fgB;
    QPushButton *bgB;
    QLineEdit *lineEdit;
    QComboBox *patternType;

    void setupUi(QWidget *trigger_pattern_edit)
    {
        if (trigger_pattern_edit->objectName().isEmpty())
            trigger_pattern_edit->setObjectName(QString::fromUtf8("trigger_pattern_edit"));
        trigger_pattern_edit->resize(635, 34);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(trigger_pattern_edit->sizePolicy().hasHeightForWidth());
        trigger_pattern_edit->setSizePolicy(sizePolicy);
        trigger_pattern_edit->setMaximumSize(QSize(16777206, 34));
        horizontalLayout = new QHBoxLayout(trigger_pattern_edit);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        number = new QLabel(trigger_pattern_edit);
        number->setObjectName(QString::fromUtf8("number"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(40);
        sizePolicy1.setVerticalStretch(20);
        sizePolicy1.setHeightForWidth(number->sizePolicy().hasHeightForWidth());
        number->setSizePolicy(sizePolicy1);
        number->setMinimumSize(QSize(20, 20));
        number->setMaximumSize(QSize(16777215, 33));
        number->setTextFormat(Qt::PlainText);
        number->setScaledContents(true);
        number->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(number);

        fgB = new QPushButton(trigger_pattern_edit);
        fgB->setObjectName(QString::fromUtf8("fgB"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fgB->sizePolicy().hasHeightForWidth());
        fgB->setSizePolicy(sizePolicy2);
        fgB->setMaximumSize(QSize(16777215, 33));
        QFont font;
        font.setPointSize(7);
        fgB->setFont(font);

        horizontalLayout->addWidget(fgB);

        bgB = new QPushButton(trigger_pattern_edit);
        bgB->setObjectName(QString::fromUtf8("bgB"));
        sizePolicy2.setHeightForWidth(bgB->sizePolicy().hasHeightForWidth());
        bgB->setSizePolicy(sizePolicy2);
        bgB->setMaximumSize(QSize(16777215, 33));
        bgB->setFont(font);

        horizontalLayout->addWidget(bgB);

        lineEdit = new QLineEdit(trigger_pattern_edit);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(16777215, 33));

        horizontalLayout->addWidget(lineEdit);

        patternType = new QComboBox(trigger_pattern_edit);
        patternType->setObjectName(QString::fromUtf8("patternType"));
        patternType->setMaximumSize(QSize(16777215, 33));

        horizontalLayout->addWidget(patternType);


        retranslateUi(trigger_pattern_edit);

        QMetaObject::connectSlotsByName(trigger_pattern_edit);
    } // setupUi

    void retranslateUi(QWidget *trigger_pattern_edit)
    {
        trigger_pattern_edit->setWindowTitle(QApplication::translate("trigger_pattern_edit", "Form", 0, QApplication::UnicodeUTF8));
        number->setText(QString());
        fgB->setText(QApplication::translate("trigger_pattern_edit", "Foreground Color", 0, QApplication::UnicodeUTF8));
        bgB->setText(QApplication::translate("trigger_pattern_edit", "Background Color", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class trigger_pattern_edit: public Ui_trigger_pattern_edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIGGER_PATTERN_EDIT_H
