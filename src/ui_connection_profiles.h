/********************************************************************************
** Form generated from reading UI file 'connection_profiles.ui'
**
** Created: Sun Aug 21 15:41:54 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTION_PROFILES_H
#define UI_CONNECTION_PROFILES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_profile_dialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_5;
    QGridLayout *gridLayout_5;
    QListWidget *profiles_tree_widget;
    QWidget *profileAdminArea;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *remove_profile_button;
    QPushButton *copy_profile_button;
    QPushButton *new_profile_button;
    QFrame *notificationArea;
    QHBoxLayout *horizontalLayout_2;
    QLabel *notificationAreaIconLabelWarning;
    QLabel *notificationAreaIconLabelError;
    QLabel *notificationAreaIconLabelInformation;
    QLabel *notificationAreaMessageBox;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QTextBrowser *welcome_message;
    QGroupBox *requiredArea;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *profile_name_entry;
    QLabel *label_2;
    QLineEdit *host_name_entry;
    QLabel *label_3;
    QLineEdit *port_entry;
    QLabel *label_9;
    QComboBox *profile_history;
    QGroupBox *optionalArea;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLineEdit *login_entry;
    QLabel *label_5;
    QLineEdit *character_password_entry;
    QCheckBox *autologin_checkBox;
    QGroupBox *informationalArea;
    QGridLayout *gridLayout_4;
    QLabel *label_7;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *website_entry;
    QPlainTextEdit *mud_description_textedit;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *dialog_buttonbox;

    void setupUi(QDialog *profile_dialog)
    {
        if (profile_dialog->objectName().isEmpty())
            profile_dialog->setObjectName(QString::fromUtf8("profile_dialog"));
        profile_dialog->resize(875, 561);
        profile_dialog->setMinimumSize(QSize(760, 0));
        verticalLayout_2 = new QVBoxLayout(profile_dialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(profile_dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        sizePolicy.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy);
        widget_5->setMinimumSize(QSize(0, 0));
        gridLayout_5 = new QGridLayout(widget_5);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(9, 0, 9, 0);
        profiles_tree_widget = new QListWidget(widget_5);
        profiles_tree_widget->setObjectName(QString::fromUtf8("profiles_tree_widget"));
        profiles_tree_widget->setMinimumSize(QSize(365, 0));
        profiles_tree_widget->setResizeMode(QListView::Adjust);

        gridLayout_5->addWidget(profiles_tree_widget, 2, 1, 1, 1);

        profileAdminArea = new QWidget(widget_5);
        profileAdminArea->setObjectName(QString::fromUtf8("profileAdminArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(profileAdminArea->sizePolicy().hasHeightForWidth());
        profileAdminArea->setSizePolicy(sizePolicy1);
        profileAdminArea->setMinimumSize(QSize(0, 50));
        profileAdminArea->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_5 = new QHBoxLayout(profileAdminArea);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        remove_profile_button = new QPushButton(profileAdminArea);
        remove_profile_button->setObjectName(QString::fromUtf8("remove_profile_button"));
        remove_profile_button->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(remove_profile_button->sizePolicy().hasHeightForWidth());
        remove_profile_button->setSizePolicy(sizePolicy2);
        remove_profile_button->setMinimumSize(QSize(0, 25));
        remove_profile_button->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/dialog-close.png"), QSize(), QIcon::Normal, QIcon::Off);
        remove_profile_button->setIcon(icon);

        horizontalLayout_5->addWidget(remove_profile_button);

        copy_profile_button = new QPushButton(profileAdminArea);
        copy_profile_button->setObjectName(QString::fromUtf8("copy_profile_button"));
        sizePolicy2.setHeightForWidth(copy_profile_button->sizePolicy().hasHeightForWidth());
        copy_profile_button->setSizePolicy(sizePolicy2);
        copy_profile_button->setMinimumSize(QSize(0, 25));
        copy_profile_button->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/list-add_small.png"), QSize(), QIcon::Normal, QIcon::Off);
        copy_profile_button->setIcon(icon1);

        horizontalLayout_5->addWidget(copy_profile_button);

        new_profile_button = new QPushButton(profileAdminArea);
        new_profile_button->setObjectName(QString::fromUtf8("new_profile_button"));
        sizePolicy2.setHeightForWidth(new_profile_button->sizePolicy().hasHeightForWidth());
        new_profile_button->setSizePolicy(sizePolicy2);
        new_profile_button->setMinimumSize(QSize(0, 25));
        new_profile_button->setMaximumSize(QSize(16777215, 16777215));
        new_profile_button->setIcon(icon1);

        horizontalLayout_5->addWidget(new_profile_button);


        gridLayout_5->addWidget(profileAdminArea, 3, 0, 1, 2);

        notificationArea = new QFrame(widget_5);
        notificationArea->setObjectName(QString::fromUtf8("notificationArea"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(notificationArea->sizePolicy().hasHeightForWidth());
        notificationArea->setSizePolicy(sizePolicy3);
        notificationArea->setMinimumSize(QSize(0, 70));
        notificationArea->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(255, 254, 215, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        notificationArea->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(16);
        font.setStyleStrategy(QFont::PreferAntialias);
        notificationArea->setFont(font);
        notificationArea->setCursor(QCursor(Qt::ArrowCursor));
        notificationArea->setAutoFillBackground(true);
        notificationArea->setFrameShape(QFrame::Box);
        notificationArea->setFrameShadow(QFrame::Plain);
        notificationArea->setLineWidth(3);
        notificationArea->setMidLineWidth(3);
        horizontalLayout_2 = new QHBoxLayout(notificationArea);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        notificationAreaIconLabelWarning = new QLabel(notificationArea);
        notificationAreaIconLabelWarning->setObjectName(QString::fromUtf8("notificationAreaIconLabelWarning"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(notificationAreaIconLabelWarning->sizePolicy().hasHeightForWidth());
        notificationAreaIconLabelWarning->setSizePolicy(sizePolicy4);
        QPalette palette1;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush);
        QBrush brush3(QColor(255, 254, 235, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(127, 127, 107, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(170, 169, 143, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        notificationAreaIconLabelWarning->setPalette(palette1);
        notificationAreaIconLabelWarning->setAutoFillBackground(true);
        notificationAreaIconLabelWarning->setPixmap(QPixmap(QString::fromUtf8(":/icons/dialog-warning.png")));
        notificationAreaIconLabelWarning->setScaledContents(false);
        notificationAreaIconLabelWarning->setAlignment(Qt::AlignCenter);
        notificationAreaIconLabelWarning->setWordWrap(true);
        notificationAreaIconLabelWarning->setMargin(5);
        notificationAreaIconLabelWarning->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_2->addWidget(notificationAreaIconLabelWarning);

        notificationAreaIconLabelError = new QLabel(notificationArea);
        notificationAreaIconLabelError->setObjectName(QString::fromUtf8("notificationAreaIconLabelError"));
        sizePolicy4.setHeightForWidth(notificationAreaIconLabelError->sizePolicy().hasHeightForWidth());
        notificationAreaIconLabelError->setSizePolicy(sizePolicy4);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        notificationAreaIconLabelError->setPalette(palette2);
        notificationAreaIconLabelError->setAutoFillBackground(true);
        notificationAreaIconLabelError->setPixmap(QPixmap(QString::fromUtf8(":/icons/dialog-error.png")));
        notificationAreaIconLabelError->setScaledContents(false);
        notificationAreaIconLabelError->setAlignment(Qt::AlignCenter);
        notificationAreaIconLabelError->setWordWrap(true);
        notificationAreaIconLabelError->setMargin(5);
        notificationAreaIconLabelError->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_2->addWidget(notificationAreaIconLabelError);

        notificationAreaIconLabelInformation = new QLabel(notificationArea);
        notificationAreaIconLabelInformation->setObjectName(QString::fromUtf8("notificationAreaIconLabelInformation"));
        sizePolicy4.setHeightForWidth(notificationAreaIconLabelInformation->sizePolicy().hasHeightForWidth());
        notificationAreaIconLabelInformation->setSizePolicy(sizePolicy4);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        notificationAreaIconLabelInformation->setPalette(palette3);
        notificationAreaIconLabelInformation->setAutoFillBackground(true);
        notificationAreaIconLabelInformation->setPixmap(QPixmap(QString::fromUtf8(":/icons/dialog-information.png")));
        notificationAreaIconLabelInformation->setScaledContents(false);
        notificationAreaIconLabelInformation->setAlignment(Qt::AlignCenter);
        notificationAreaIconLabelInformation->setWordWrap(true);
        notificationAreaIconLabelInformation->setMargin(5);
        notificationAreaIconLabelInformation->setTextInteractionFlags(Qt::NoTextInteraction);

        horizontalLayout_2->addWidget(notificationAreaIconLabelInformation);

        notificationAreaMessageBox = new QLabel(notificationArea);
        notificationAreaMessageBox->setObjectName(QString::fromUtf8("notificationAreaMessageBox"));
        sizePolicy.setHeightForWidth(notificationAreaMessageBox->sizePolicy().hasHeightForWidth());
        notificationAreaMessageBox->setSizePolicy(sizePolicy);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Light, brush);
        palette4.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette4.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette4.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Shadow, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Shadow, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        notificationAreaMessageBox->setPalette(palette4);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(8);
        notificationAreaMessageBox->setFont(font1);
        notificationAreaMessageBox->setAutoFillBackground(true);
        notificationAreaMessageBox->setScaledContents(true);
        notificationAreaMessageBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        notificationAreaMessageBox->setWordWrap(true);
        notificationAreaMessageBox->setMargin(5);
        notificationAreaMessageBox->setOpenExternalLinks(true);

        horizontalLayout_2->addWidget(notificationAreaMessageBox);


        gridLayout_5->addWidget(notificationArea, 1, 1, 1, 1);


        horizontalLayout->addWidget(widget_5);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy5);
        widget_2->setMinimumSize(QSize(340, 0));
        widget_2->setMaximumSize(QSize(300, 16777215));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 12, 0, 0);
        welcome_message = new QTextBrowser(widget_2);
        welcome_message->setObjectName(QString::fromUtf8("welcome_message"));
        welcome_message->setEnabled(true);
        sizePolicy.setHeightForWidth(welcome_message->sizePolicy().hasHeightForWidth());
        welcome_message->setSizePolicy(sizePolicy);
        welcome_message->setMinimumSize(QSize(0, 140));
        welcome_message->setMaximumSize(QSize(16777215, 16777215));
        welcome_message->setOpenLinks(false);

        verticalLayout->addWidget(welcome_message);

        requiredArea = new QGroupBox(widget_2);
        requiredArea->setObjectName(QString::fromUtf8("requiredArea"));
        sizePolicy3.setHeightForWidth(requiredArea->sizePolicy().hasHeightForWidth());
        requiredArea->setSizePolicy(sizePolicy3);
        gridLayout = new QGridLayout(requiredArea);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, 9, -1, -1);
        label = new QLabel(requiredArea);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("DejaVu Sans"));
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setWeight(50);
        label->setFont(font2);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        profile_name_entry = new QLineEdit(requiredArea);
        profile_name_entry->setObjectName(QString::fromUtf8("profile_name_entry"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Bitstream Charter"));
        font3.setPointSize(9);
        profile_name_entry->setFont(font3);
        profile_name_entry->setReadOnly(false);

        gridLayout->addWidget(profile_name_entry, 0, 1, 1, 3);

        label_2 = new QLabel(requiredArea);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("DejaVu Sans"));
        font4.setPointSize(9);
        font4.setUnderline(false);
        label_2->setFont(font4);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        host_name_entry = new QLineEdit(requiredArea);
        host_name_entry->setObjectName(QString::fromUtf8("host_name_entry"));
        host_name_entry->setMinimumSize(QSize(100, 0));
        host_name_entry->setFont(font3);

        gridLayout->addWidget(host_name_entry, 1, 1, 1, 1);

        label_3 = new QLabel(requiredArea);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font3);

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        port_entry = new QLineEdit(requiredArea);
        port_entry->setObjectName(QString::fromUtf8("port_entry"));
        port_entry->setMinimumSize(QSize(40, 0));
        port_entry->setMaximumSize(QSize(50, 16777215));
        port_entry->setFont(font3);
        port_entry->setMaxLength(32767);
        port_entry->setEchoMode(QLineEdit::Normal);
        port_entry->setCursorPosition(0);

        gridLayout->addWidget(port_entry, 1, 3, 1, 1);

        label_9 = new QLabel(requiredArea);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("DejaVu Sans"));
        font5.setPointSize(9);
        label_9->setFont(font5);

        gridLayout->addWidget(label_9, 2, 0, 1, 1);

        profile_history = new QComboBox(requiredArea);
        profile_history->setObjectName(QString::fromUtf8("profile_history"));
        sizePolicy3.setHeightForWidth(profile_history->sizePolicy().hasHeightForWidth());
        profile_history->setSizePolicy(sizePolicy3);
        profile_history->setMinimumSize(QSize(0, 0));
        QFont font6;
        font6.setPointSize(8);
        profile_history->setFont(font6);

        gridLayout->addWidget(profile_history, 2, 1, 1, 3);


        verticalLayout->addWidget(requiredArea);

        optionalArea = new QGroupBox(widget_2);
        optionalArea->setObjectName(QString::fromUtf8("optionalArea"));
        sizePolicy3.setHeightForWidth(optionalArea->sizePolicy().hasHeightForWidth());
        optionalArea->setSizePolicy(sizePolicy3);
        optionalArea->setMinimumSize(QSize(0, 0));
        gridLayout_2 = new QGridLayout(optionalArea);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_4 = new QLabel(optionalArea);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font5);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        login_entry = new QLineEdit(optionalArea);
        login_entry->setObjectName(QString::fromUtf8("login_entry"));
        login_entry->setEchoMode(QLineEdit::Normal);

        gridLayout_2->addWidget(login_entry, 0, 1, 1, 1);

        label_5 = new QLabel(optionalArea);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font5);

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        character_password_entry = new QLineEdit(optionalArea);
        character_password_entry->setObjectName(QString::fromUtf8("character_password_entry"));
        character_password_entry->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(character_password_entry, 1, 1, 1, 1);

        autologin_checkBox = new QCheckBox(optionalArea);
        autologin_checkBox->setObjectName(QString::fromUtf8("autologin_checkBox"));
        QFont font7;
        font7.setFamily(QString::fromUtf8("DejaVu Sans"));
        font7.setPointSize(10);
        font7.setBold(false);
        font7.setWeight(50);
        autologin_checkBox->setFont(font7);
        autologin_checkBox->setLayoutDirection(Qt::LeftToRight);

        gridLayout_2->addWidget(autologin_checkBox, 2, 0, 1, 2);


        verticalLayout->addWidget(optionalArea);

        informationalArea = new QGroupBox(widget_2);
        informationalArea->setObjectName(QString::fromUtf8("informationalArea"));
        sizePolicy.setHeightForWidth(informationalArea->sizePolicy().hasHeightForWidth());
        informationalArea->setSizePolicy(sizePolicy);
        informationalArea->setMinimumSize(QSize(0, 0));
        gridLayout_4 = new QGridLayout(informationalArea);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(0);
        label_7 = new QLabel(informationalArea);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setFont(font5);

        gridLayout_4->addWidget(label_7, 0, 0, 2, 1);

        widget_7 = new QWidget(informationalArea);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setMinimumSize(QSize(0, 25));
        horizontalLayout_4 = new QHBoxLayout(widget_7);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        website_entry = new QLabel(widget_7);
        website_entry->setObjectName(QString::fromUtf8("website_entry"));
        sizePolicy1.setHeightForWidth(website_entry->sizePolicy().hasHeightForWidth());
        website_entry->setSizePolicy(sizePolicy1);
        website_entry->setFont(font5);
        website_entry->setScaledContents(true);
        website_entry->setOpenExternalLinks(true);

        horizontalLayout_4->addWidget(website_entry);


        gridLayout_4->addWidget(widget_7, 1, 1, 1, 1);

        mud_description_textedit = new QPlainTextEdit(informationalArea);
        mud_description_textedit->setObjectName(QString::fromUtf8("mud_description_textedit"));
        mud_description_textedit->setMinimumSize(QSize(0, 0));
        mud_description_textedit->setMaximumSize(QSize(16777215, 16777215));
        mud_description_textedit->setReadOnly(false);

        gridLayout_4->addWidget(mud_description_textedit, 2, 0, 1, 2);


        verticalLayout->addWidget(informationalArea);


        horizontalLayout->addWidget(widget_2);


        verticalLayout_2->addWidget(widget);

        widget_10 = new QWidget(profile_dialog);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        horizontalLayout_3 = new QHBoxLayout(widget_10);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        dialog_buttonbox = new QDialogButtonBox(widget_10);
        dialog_buttonbox->setObjectName(QString::fromUtf8("dialog_buttonbox"));
        sizePolicy3.setHeightForWidth(dialog_buttonbox->sizePolicy().hasHeightForWidth());
        dialog_buttonbox->setSizePolicy(sizePolicy3);
        dialog_buttonbox->setMinimumSize(QSize(50, 0));
        dialog_buttonbox->setMaximumSize(QSize(340, 16777215));
        dialog_buttonbox->setOrientation(Qt::Horizontal);
        dialog_buttonbox->setStandardButtons(QDialogButtonBox::Cancel);
        dialog_buttonbox->setCenterButtons(false);

        horizontalLayout_3->addWidget(dialog_buttonbox);


        verticalLayout_2->addWidget(widget_10);

        QWidget::setTabOrder(dialog_buttonbox, remove_profile_button);

        retranslateUi(profile_dialog);

        QMetaObject::connectSlotsByName(profile_dialog);
    } // setupUi

    void retranslateUi(QDialog *profile_dialog)
    {
        profile_dialog->setWindowTitle(QApplication::translate("profile_dialog", "Select a profile to connect with", 0, QApplication::UnicodeUTF8));
        remove_profile_button->setText(QApplication::translate("profile_dialog", "Remove", 0, QApplication::UnicodeUTF8));
        copy_profile_button->setText(QApplication::translate("profile_dialog", "Copy", 0, QApplication::UnicodeUTF8));
        new_profile_button->setText(QApplication::translate("profile_dialog", "New", 0, QApplication::UnicodeUTF8));
        notificationAreaIconLabelWarning->setText(QString());
        notificationAreaIconLabelError->setText(QString());
        notificationAreaIconLabelInformation->setText(QString());
        notificationAreaMessageBox->setText(QString());
        welcome_message->setHtml(QApplication::translate("profile_dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:10pt; font-weight:600;\">Welcome to Mudlet!</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans'; font-size:10pt; font-weight:600;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; "
                        "margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:9pt; font-weight:600;\">Click on one of the MUDs on the list below to play.</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:9pt;\">If you want to play on a server that is not on the list, click on the </span><img src=\":/icons/icons/list-add_small.png\" /><span style=\" font-family:'Sans'; font-size:9pt; color:#aa0000;\"> Create New Profile</span><span style=\" font-family:'Sans'; font-size:9pt;\"> button on your left, create your own profile, and fill in the </span><span style=\" font-family:'Sans'; font-size:9pt; font-style:italic;\">Profi"
                        "le Name</span><span style=\" font-family:'Sans'; font-size:9pt;\">, </span><span style=\" font-family:'Sans'; font-size:9pt; font-style:italic;\">Host</span><span style=\" font-family:'Sans'; font-size:9pt;\">, and </span><span style=\" font-family:'Sans'; font-size:9pt; font-style:italic;\">Port</span><span style=\" font-family:'Sans'; font-size:9pt;\"> fields in the R</span><span style=\" font-family:'Sans'; font-size:9pt; font-style:italic;\">equired </span><span style=\" font-family:'Sans'; font-size:9pt;\">area. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans'; font-size:9pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:9pt; font-weight:600;\">After that, click Connect to play.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; mar"
                        "gin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans'; font-size:9pt; font-weight:600;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:9pt;\">Have fun!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Sans'; font-size:9pt; font-weight:600;\"></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans'; font-size:9pt; font-weight:600;\">- The Mudlet Team</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        requiredArea->setTitle(QApplication::translate("profile_dialog", "Required", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("profile_dialog", "Profile name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("profile_dialog", "Server address:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("profile_dialog", "Port:", 0, QApplication::UnicodeUTF8));
        port_entry->setText(QString());
        label_9->setText(QApplication::translate("profile_dialog", "Profile history:", 0, QApplication::UnicodeUTF8));
        profile_history->clear();
        profile_history->insertItems(0, QStringList()
         << QApplication::translate("profile_dialog", "load newest profile", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("profile_dialog", "load oldest profile", 0, QApplication::UnicodeUTF8)
        );
        optionalArea->setTitle(QApplication::translate("profile_dialog", "Optional", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("profile_dialog", "Character name:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        login_entry->setToolTip(QApplication::translate("profile_dialog", "The characters name", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("profile_dialog", "Password:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        character_password_entry->setToolTip(QApplication::translate("profile_dialog", "Characters password. Note that the password isn't encrypted in storage", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        autologin_checkBox->setToolTip(QApplication::translate("profile_dialog", "With this enabled, Mudlet will automatically start and connect on this profile when it is launched", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        autologin_checkBox->setText(QApplication::translate("profile_dialog", "Auto connect this profile on startup", 0, QApplication::UnicodeUTF8));
        informationalArea->setTitle(QApplication::translate("profile_dialog", "Informational", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("profile_dialog", "Website:", 0, QApplication::UnicodeUTF8));
        website_entry->setText(QString());
#ifndef QT_NO_TOOLTIP
        mud_description_textedit->setToolTip(QApplication::translate("profile_dialog", "MUD description", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class profile_dialog: public Ui_profile_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTION_PROFILES_H
