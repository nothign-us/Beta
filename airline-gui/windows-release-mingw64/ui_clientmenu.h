/********************************************************************************
** Form generated from reading UI file 'clientmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTMENU_H
#define UI_CLIENTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientMenu
{
public:
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *usernameDisplay;
    QPushButton *bookTicketButton;
    QPushButton *printTicketButton;
    QPushButton *purchaseButton;
    QPushButton *signoutButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ClientMenu)
    {
        if (ClientMenu->objectName().isEmpty())
            ClientMenu->setObjectName(QString::fromUtf8("ClientMenu"));
        ClientMenu->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ClientMenu->sizePolicy().hasHeightForWidth());
        ClientMenu->setSizePolicy(sizePolicy);
        ClientMenu->setMinimumSize(QSize(400, 300));
        ClientMenu->setMaximumSize(QSize(400, 300));
        horizontalWidget = new QWidget(ClientMenu);
        horizontalWidget->setObjectName(QString::fromUtf8("horizontalWidget"));
        horizontalWidget->setGeometry(QRect(0, 0, 400, 300));
        sizePolicy.setHeightForWidth(horizontalWidget->sizePolicy().hasHeightForWidth());
        horizontalWidget->setSizePolicy(sizePolicy);
        horizontalWidget->setMinimumSize(QSize(400, 300));
        horizontalWidget->setMaximumSize(QSize(400, 300));
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 2, -1, 2);
        label = new QLabel(horizontalWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(label);

        usernameDisplay = new QLabel(horizontalWidget);
        usernameDisplay->setObjectName(QString::fromUtf8("usernameDisplay"));

        horizontalLayout_2->addWidget(usernameDisplay);


        verticalLayout->addLayout(horizontalLayout_2);

        bookTicketButton = new QPushButton(horizontalWidget);
        bookTicketButton->setObjectName(QString::fromUtf8("bookTicketButton"));

        verticalLayout->addWidget(bookTicketButton);

        printTicketButton = new QPushButton(horizontalWidget);
        printTicketButton->setObjectName(QString::fromUtf8("printTicketButton"));

        verticalLayout->addWidget(printTicketButton);

        purchaseButton = new QPushButton(horizontalWidget);
        purchaseButton->setObjectName(QString::fromUtf8("purchaseButton"));

        verticalLayout->addWidget(purchaseButton);

        signoutButton = new QPushButton(horizontalWidget);
        signoutButton->setObjectName(QString::fromUtf8("signoutButton"));

        verticalLayout->addWidget(signoutButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(ClientMenu);

        QMetaObject::connectSlotsByName(ClientMenu);
    } // setupUi

    void retranslateUi(QDialog *ClientMenu)
    {
        ClientMenu->setWindowTitle(QApplication::translate("ClientMenu", "Dialog", nullptr));
        label->setText(QApplication::translate("ClientMenu", "T\303\240i kho\341\272\243n:", nullptr));
        usernameDisplay->setText(QString());
        bookTicketButton->setText(QApplication::translate("ClientMenu", "\304\220\341\272\267t v\303\251", nullptr));
        printTicketButton->setText(QApplication::translate("ClientMenu", "In v\303\251", nullptr));
        purchaseButton->setText(QApplication::translate("ClientMenu", "Thanh to\303\241n", nullptr));
        signoutButton->setText(QApplication::translate("ClientMenu", "\304\220\304\203ng xu\341\272\245t", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientMenu: public Ui_ClientMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTMENU_H
