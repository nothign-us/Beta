/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *logo;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelUsername;
    QLineEdit *lineEdit_username;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_password;
    QSpacerItem *verticalSpacer;
    QPushButton *signinButton;
    QPushButton *signupButton;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(766, 465);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(766, 465));
        MainWindow->setMaximumSize(QSize(766, 465));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        horizontalWidget = new QWidget(centralwidget);
        horizontalWidget->setObjectName(QString::fromUtf8("horizontalWidget"));
        horizontalWidget->setGeometry(QRect(0, 10, 751, 431));
        sizePolicy.setHeightForWidth(horizontalWidget->sizePolicy().hasHeightForWidth());
        horizontalWidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, -1, 10, -1);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(horizontalSpacer);

        logo = new QLabel(horizontalWidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setPixmap(QPixmap(QString::fromUtf8("Images/logo.png")));

        verticalLayout->addWidget(logo, 0, Qt::AlignHCenter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        labelUsername = new QLabel(horizontalWidget);
        labelUsername->setObjectName(QString::fromUtf8("labelUsername"));

        horizontalLayout_2->addWidget(labelUsername);

        lineEdit_username = new QLineEdit(horizontalWidget);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));

        horizontalLayout_2->addWidget(lineEdit_username);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(horizontalWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_password = new QLineEdit(horizontalWidget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));

        horizontalLayout_3->addWidget(lineEdit_password);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        signinButton = new QPushButton(horizontalWidget);
        signinButton->setObjectName(QString::fromUtf8("signinButton"));
        signinButton->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(signinButton);

        signupButton = new QPushButton(horizontalWidget);
        signupButton->setObjectName(QString::fromUtf8("signupButton"));

        verticalLayout->addWidget(signupButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        logo->setText(QString());
        labelUsername->setText(QApplication::translate("MainWindow", "T\303\252n \304\221\304\203ng nh\341\272\255p", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "M\341\272\255t kh\341\272\251u", nullptr));
        signinButton->setText(QApplication::translate("MainWindow", "\304\220\304\203ng nh\341\272\255p", nullptr));
        signupButton->setText(QApplication::translate("MainWindow", "\304\220\304\203ng k\303\255 t\303\240i kho\341\272\243n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
