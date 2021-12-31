/********************************************************************************
** Form generated from reading UI file 'bookticket.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKTICKET_H
#define UI_BOOKTICKET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bookTicket
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *bookTicket)
    {
        if (bookTicket->objectName().isEmpty())
            bookTicket->setObjectName(QString::fromUtf8("bookTicket"));
        bookTicket->resize(800, 600);
        centralwidget = new QWidget(bookTicket);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(70, 20, 671, 461));
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(180, 50, 461, 25));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 50, 111, 17));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 100, 141, 17));
        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(240, 100, 86, 25));
        bookTicket->setCentralWidget(centralwidget);
        menubar = new QMenuBar(bookTicket);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        bookTicket->setMenuBar(menubar);
        statusbar = new QStatusBar(bookTicket);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        bookTicket->setStatusBar(statusbar);

        retranslateUi(bookTicket);

        QMetaObject::connectSlotsByName(bookTicket);
    } // setupUi

    void retranslateUi(QMainWindow *bookTicket)
    {
        bookTicket->setWindowTitle(QApplication::translate("bookTicket", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("bookTicket", "Booking Ticket Machine", nullptr));
        comboBox->setItemText(0, QApplication::translate("bookTicket", "San bay Buon Ma Thuot", nullptr));
        comboBox->setItemText(1, QApplication::translate("bookTicket", "San bay Ca Mau", nullptr));
        comboBox->setItemText(2, QApplication::translate("bookTicket", "San bay Cam Ranh", nullptr));
        comboBox->setItemText(3, QApplication::translate("bookTicket", "San bay Can Tho", nullptr));
        comboBox->setItemText(4, QApplication::translate("bookTicket", "San bay Cat Bi", nullptr));
        comboBox->setItemText(5, QApplication::translate("bookTicket", "San bay Chu Lai", nullptr));
        comboBox->setItemText(6, QApplication::translate("bookTicket", "San bay Con Dao", nullptr));
        comboBox->setItemText(7, QApplication::translate("bookTicket", "San bay Da Nang", nullptr));
        comboBox->setItemText(8, QApplication::translate("bookTicket", "San bay Dien Bien Phu", nullptr));
        comboBox->setItemText(9, QApplication::translate("bookTicket", "San bay Dong Hoi", nullptr));
        comboBox->setItemText(10, QApplication::translate("bookTicket", "San bay Lien Khuong", nullptr));
        comboBox->setItemText(11, QApplication::translate("bookTicket", "San bay Noi Bai", nullptr));
        comboBox->setItemText(12, QApplication::translate("bookTicket", "San bay Phu Bai", nullptr));
        comboBox->setItemText(13, QApplication::translate("bookTicket", "San bay Phu Cat", nullptr));
        comboBox->setItemText(14, QApplication::translate("bookTicket", "San bay  Phu Quoc", nullptr));
        comboBox->setItemText(15, QApplication::translate("bookTicket", "San bay Pleiku", nullptr));
        comboBox->setItemText(16, QApplication::translate("bookTicket", "San bay Rach GIa", nullptr));
        comboBox->setItemText(17, QApplication::translate("bookTicket", "San bay Tan Son Nhat", nullptr));
        comboBox->setItemText(18, QApplication::translate("bookTicket", "San bay Tho Xuan", nullptr));
        comboBox->setItemText(19, QApplication::translate("bookTicket", "San bay Tuy Hoa", nullptr));
        comboBox->setItemText(20, QApplication::translate("bookTicket", "San bay Van Don", nullptr));
        comboBox->setItemText(21, QApplication::translate("bookTicket", "San bay Vinh", nullptr));

        label->setText(QApplication::translate("bookTicket", "Start Airport", nullptr));
        label_2->setText(QApplication::translate("bookTicket", "Destination Airport", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bookTicket: public Ui_bookTicket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKTICKET_H
