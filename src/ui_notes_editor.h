/********************************************************************************
** Form generated from reading UI file 'notes_editor.ui'
**
** Created: Sat Oct 22 10:04:25 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTES_EDITOR_H
#define UI_NOTES_EDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QStatusBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotesEditor
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *notesEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NotesEditor)
    {
        if (NotesEditor->objectName().isEmpty())
            NotesEditor->setObjectName(QString::fromUtf8("NotesEditor"));
        NotesEditor->resize(800, 600);
        centralwidget = new QWidget(NotesEditor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setGeometry(QRect(0, 21, 800, 558));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        notesEdit = new QPlainTextEdit(centralwidget);
        notesEdit->setObjectName(QString::fromUtf8("notesEdit"));

        verticalLayout->addWidget(notesEdit);

        NotesEditor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NotesEditor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        NotesEditor->setMenuBar(menubar);
        statusbar = new QStatusBar(NotesEditor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setGeometry(QRect(0, 579, 800, 21));
        NotesEditor->setStatusBar(statusbar);

        retranslateUi(NotesEditor);

        QMetaObject::connectSlotsByName(NotesEditor);
    } // setupUi

    void retranslateUi(QMainWindow *NotesEditor)
    {
        NotesEditor->setWindowTitle(QApplication::translate("NotesEditor", "Note Pad", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NotesEditor: public Ui_NotesEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTES_EDITOR_H
