/********************************************************************************
** Form generated from reading UI file 'lacking_mapper_script.ui'
**
** Created: Sat Oct 29 20:50:44 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LACKING_MAPPER_SCRIPT_H
#define UI_LACKING_MAPPER_SCRIPT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_no_mapping_script
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *close;
    QPushButton *find_scripts;

    void setupUi(QDialog *no_mapping_script)
    {
        if (no_mapping_script->objectName().isEmpty())
            no_mapping_script->setObjectName(QString::fromUtf8("no_mapping_script"));
        no_mapping_script->setEnabled(true);
        no_mapping_script->resize(486, 187);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(no_mapping_script->sizePolicy().hasHeightForWidth());
        no_mapping_script->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(no_mapping_script);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        label = new QLabel(no_mapping_script);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setScaledContents(false);
        label->setWordWrap(true);
        label->setOpenExternalLinks(true);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 6, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        close = new QPushButton(no_mapping_script);
        close->setObjectName(QString::fromUtf8("close"));

        horizontalLayout->addWidget(close);

        find_scripts = new QPushButton(no_mapping_script);
        find_scripts->setObjectName(QString::fromUtf8("find_scripts"));
        find_scripts->setDefault(true);

        horizontalLayout->addWidget(find_scripts);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(no_mapping_script);
        QObject::connect(close, SIGNAL(clicked()), no_mapping_script, SLOT(reject()));
        QObject::connect(find_scripts, SIGNAL(clicked()), no_mapping_script, SLOT(accept()));

        QMetaObject::connectSlotsByName(no_mapping_script);
    } // setupUi

    void retranslateUi(QDialog *no_mapping_script)
    {
        no_mapping_script->setWindowTitle(QApplication::translate("no_mapping_script", "No mapping script found", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("no_mapping_script", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">It seems that you don't have any <a href=\"http://wiki.mudlet.org/w/Mapping_script\"><span style=\" text-decoration: underline; color:#0000ff;\">mapping scripts</span></a> installed yet - the mapper needs you to have one for your MUD, so it can track where you are and autowalk you. You can either make one yourself, or import and existing one that someone else made.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bott"
                        "om:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Would you like to see if any are available?</p></body></html>", 0, QApplication::UnicodeUTF8));
        close->setText(QApplication::translate("no_mapping_script", "Close", 0, QApplication::UnicodeUTF8));
        find_scripts->setText(QApplication::translate("no_mapping_script", "Find some scripts", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class no_mapping_script: public Ui_no_mapping_script {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LACKING_MAPPER_SCRIPT_H
