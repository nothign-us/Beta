/********************************************************************************
** Form generated from reading UI file 'adminmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMENU_H
#define UI_ADMINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminMenu
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelUsername;
    QLabel *usernameDisplay;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *bookedTicketDisplay;

    void setupUi(QDialog *AdminMenu)
    {
        if (AdminMenu->objectName().isEmpty())
            AdminMenu->setObjectName(QString::fromUtf8("AdminMenu"));
        AdminMenu->resize(718, 418);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AdminMenu->sizePolicy().hasHeightForWidth());
        AdminMenu->setSizePolicy(sizePolicy);
        AdminMenu->setMinimumSize(QSize(700, 400));
        verticalLayout_2 = new QVBoxLayout(AdminMenu);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalWidget = new QWidget(AdminMenu);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(verticalWidget->sizePolicy().hasHeightForWidth());
        verticalWidget->setSizePolicy(sizePolicy1);
        verticalWidget->setMinimumSize(QSize(700, 400));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        labelUsername = new QLabel(verticalWidget);
        labelUsername->setObjectName(QString::fromUtf8("labelUsername"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelUsername->sizePolicy().hasHeightForWidth());
        labelUsername->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(labelUsername);

        usernameDisplay = new QLabel(verticalWidget);
        usernameDisplay->setObjectName(QString::fromUtf8("usernameDisplay"));

        horizontalLayout->addWidget(usernameDisplay);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        bookedTicketDisplay = new QTableWidget(verticalWidget);
        bookedTicketDisplay->setObjectName(QString::fromUtf8("bookedTicketDisplay"));
        sizePolicy.setHeightForWidth(bookedTicketDisplay->sizePolicy().hasHeightForWidth());
        bookedTicketDisplay->setSizePolicy(sizePolicy);
        bookedTicketDisplay->setMinimumSize(QSize(698, 600));
        bookedTicketDisplay->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        bookedTicketDisplay->setRowCount(0);
        bookedTicketDisplay->setColumnCount(0);

        horizontalLayout_2->addWidget(bookedTicketDisplay);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addWidget(verticalWidget);


        retranslateUi(AdminMenu);

        QMetaObject::connectSlotsByName(AdminMenu);
    } // setupUi

    void retranslateUi(QDialog *AdminMenu)
    {
        AdminMenu->setWindowTitle(QApplication::translate("AdminMenu", "Dialog", nullptr));
        labelUsername->setText(QApplication::translate("AdminMenu", "T\303\240i kho\341\272\243n:", nullptr));
        usernameDisplay->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdminMenu: public Ui_AdminMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_H
