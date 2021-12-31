/********************************************************************************
** Form generated from reading UI file 'BookTicket.ui'
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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookTicket
{
public:
    QWidget *centralwidget;
    QRadioButton *isEco;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDateEdit *Date;
    QPushButton *GetList;
    QRadioButton *isSkyBoss;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *StartAirport;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *DesAirport;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BookTicket)
    {
        if (BookTicket->objectName().isEmpty())
            BookTicket->setObjectName(QString::fromUtf8("BookTicket"));
        BookTicket->resize(800, 600);
        centralwidget = new QWidget(BookTicket);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        isEco = new QRadioButton(centralwidget);
        isEco->setObjectName(QString::fromUtf8("isEco"));
        isEco->setGeometry(QRect(350, 270, 112, 23));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(320, 230, 220, 28));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        Date = new QDateEdit(layoutWidget);
        Date->setObjectName(QString::fromUtf8("Date"));
        Date->setEnabled(true);
        Date->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Date->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        Date->setMinimumTime(QTime(0, 0, 0));
        Date->setCurrentSection(QDateTimeEdit::DaySection);
        Date->setCalendarPopup(true);

        horizontalLayout_3->addWidget(Date);

        GetList = new QPushButton(centralwidget);
        GetList->setObjectName(QString::fromUtf8("GetList"));
        GetList->setGeometry(QRect(320, 320, 281, 41));
        isSkyBoss = new QRadioButton(centralwidget);
        isSkyBoss->setObjectName(QString::fromUtf8("isSkyBoss"));
        isSkyBoss->setGeometry(QRect(460, 270, 112, 23));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(340, 110, 284, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        StartAirport = new QComboBox(layoutWidget_2);
        StartAirport->addItem(QString());
        StartAirport->addItem(QString());
        StartAirport->addItem(QString());
        StartAirport->addItem(QString());
        StartAirport->addItem(QString());
        StartAirport->addItem(QString());
        StartAirport->addItem(QString());
        StartAirport->addItem(QString());
        StartAirport->addItem(QString());
        StartAirport->addItem(QString());
        StartAirport->addItem(QString());
        StartAirport->addItem(QString());
        StartAirport->addItem(QString());
        StartAirport->addItem(QString());
        StartAirport->addItem(QString());
        StartAirport->addItem(QString());
        StartAirport->addItem(QString());
        StartAirport->addItem(QString());
        StartAirport->addItem(QString());
        StartAirport->addItem(QString());
        StartAirport->addItem(QString());
        StartAirport->addItem(QString());
        StartAirport->setObjectName(QString::fromUtf8("StartAirport"));

        horizontalLayout->addWidget(StartAirport);

        layoutWidget_3 = new QWidget(centralwidget);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(290, 170, 330, 27));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        DesAirport = new QComboBox(layoutWidget_3);
        DesAirport->addItem(QString());
        DesAirport->addItem(QString());
        DesAirport->addItem(QString());
        DesAirport->addItem(QString());
        DesAirport->addItem(QString());
        DesAirport->addItem(QString());
        DesAirport->addItem(QString());
        DesAirport->addItem(QString());
        DesAirport->addItem(QString());
        DesAirport->addItem(QString());
        DesAirport->addItem(QString());
        DesAirport->addItem(QString());
        DesAirport->addItem(QString());
        DesAirport->addItem(QString());
        DesAirport->addItem(QString());
        DesAirport->addItem(QString());
        DesAirport->addItem(QString());
        DesAirport->addItem(QString());
        DesAirport->addItem(QString());
        DesAirport->addItem(QString());
        DesAirport->addItem(QString());
        DesAirport->addItem(QString());
        DesAirport->setObjectName(QString::fromUtf8("DesAirport"));

        horizontalLayout_2->addWidget(DesAirport);

        BookTicket->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BookTicket);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        BookTicket->setMenuBar(menubar);
        statusbar = new QStatusBar(BookTicket);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BookTicket->setStatusBar(statusbar);

        retranslateUi(BookTicket);

        QMetaObject::connectSlotsByName(BookTicket);
    } // setupUi

    void retranslateUi(QMainWindow *BookTicket)
    {
        BookTicket->setWindowTitle(QApplication::translate("BookTicket", "MainWindow", nullptr));
        isEco->setText(QApplication::translate("BookTicket", "Eco", nullptr));
        label_3->setText(QApplication::translate("BookTicket", "Departure Day", nullptr));
        Date->setDisplayFormat(QApplication::translate("BookTicket", "d/M/yyyy", nullptr));
        GetList->setText(QApplication::translate("BookTicket", "Get List Flight", nullptr));
        isSkyBoss->setText(QApplication::translate("BookTicket", "Sky Boss", nullptr));
        label->setText(QApplication::translate("BookTicket", "Start AirPort", nullptr));
        StartAirport->setItemText(0, QApplication::translate("BookTicket", "San bay Buon Ma Thuot", nullptr));
        StartAirport->setItemText(1, QApplication::translate("BookTicket", "San bay Ca Mau", nullptr));
        StartAirport->setItemText(2, QApplication::translate("BookTicket", "San bay Cam Ranh", nullptr));
        StartAirport->setItemText(3, QApplication::translate("BookTicket", "San bay Can Tho", nullptr));
        StartAirport->setItemText(4, QApplication::translate("BookTicket", "San bay Cat Bi", nullptr));
        StartAirport->setItemText(5, QApplication::translate("BookTicket", "San bay Chu Lai", nullptr));
        StartAirport->setItemText(6, QApplication::translate("BookTicket", "San bay Con Dao", nullptr));
        StartAirport->setItemText(7, QApplication::translate("BookTicket", "San bay Da Nang", nullptr));
        StartAirport->setItemText(8, QApplication::translate("BookTicket", "San bay Dien Bien Phu", nullptr));
        StartAirport->setItemText(9, QApplication::translate("BookTicket", "San bay Dong Hoi", nullptr));
        StartAirport->setItemText(10, QApplication::translate("BookTicket", "San bay Lien Khuong", nullptr));
        StartAirport->setItemText(11, QApplication::translate("BookTicket", "San bay Noi Bai", nullptr));
        StartAirport->setItemText(12, QApplication::translate("BookTicket", "San bay Phu Bai", nullptr));
        StartAirport->setItemText(13, QApplication::translate("BookTicket", "San bay Phu Cat", nullptr));
        StartAirport->setItemText(14, QApplication::translate("BookTicket", "San bay  Phu Quoc", nullptr));
        StartAirport->setItemText(15, QApplication::translate("BookTicket", "San bay Pleiku", nullptr));
        StartAirport->setItemText(16, QApplication::translate("BookTicket", "San bay Rach GIa", nullptr));
        StartAirport->setItemText(17, QApplication::translate("BookTicket", "San bay Tan Son Nhat", nullptr));
        StartAirport->setItemText(18, QApplication::translate("BookTicket", "San bay Tho Xuan", nullptr));
        StartAirport->setItemText(19, QApplication::translate("BookTicket", "San bay Tuy Hoa", nullptr));
        StartAirport->setItemText(20, QApplication::translate("BookTicket", "San bay Van Don", nullptr));
        StartAirport->setItemText(21, QApplication::translate("BookTicket", "San bay Vinh", nullptr));

        label_2->setText(QApplication::translate("BookTicket", "Destination Airport", nullptr));
        DesAirport->setItemText(0, QApplication::translate("BookTicket", "San bay Buon Ma Thuot", nullptr));
        DesAirport->setItemText(1, QApplication::translate("BookTicket", "San bay Ca Mau", nullptr));
        DesAirport->setItemText(2, QApplication::translate("BookTicket", "San bay Cam Ranh", nullptr));
        DesAirport->setItemText(3, QApplication::translate("BookTicket", "San bay Can Tho", nullptr));
        DesAirport->setItemText(4, QApplication::translate("BookTicket", "San bay Cat Bi", nullptr));
        DesAirport->setItemText(5, QApplication::translate("BookTicket", "San bay Chu Lai", nullptr));
        DesAirport->setItemText(6, QApplication::translate("BookTicket", "San bay Con Dao", nullptr));
        DesAirport->setItemText(7, QApplication::translate("BookTicket", "San bay Da Nang", nullptr));
        DesAirport->setItemText(8, QApplication::translate("BookTicket", "San bay Dien Bien Phu", nullptr));
        DesAirport->setItemText(9, QApplication::translate("BookTicket", "San bay Dong Hoi", nullptr));
        DesAirport->setItemText(10, QApplication::translate("BookTicket", "San bay Lien Khuong", nullptr));
        DesAirport->setItemText(11, QApplication::translate("BookTicket", "San bay Noi Bai", nullptr));
        DesAirport->setItemText(12, QApplication::translate("BookTicket", "San bay Phu Bai", nullptr));
        DesAirport->setItemText(13, QApplication::translate("BookTicket", "San bay Phu Cat", nullptr));
        DesAirport->setItemText(14, QApplication::translate("BookTicket", "San bay  Phu Quoc", nullptr));
        DesAirport->setItemText(15, QApplication::translate("BookTicket", "San bay Pleiku", nullptr));
        DesAirport->setItemText(16, QApplication::translate("BookTicket", "San bay Rach GIa", nullptr));
        DesAirport->setItemText(17, QApplication::translate("BookTicket", "San bay Tan Son Nhat", nullptr));
        DesAirport->setItemText(18, QApplication::translate("BookTicket", "San bay Tho Xuan", nullptr));
        DesAirport->setItemText(19, QApplication::translate("BookTicket", "San bay Tuy Hoa", nullptr));
        DesAirport->setItemText(20, QApplication::translate("BookTicket", "San bay Van Don", nullptr));
        DesAirport->setItemText(21, QApplication::translate("BookTicket", "San bay Vinh", nullptr));

    } // retranslateUi

};

namespace Ui {
    class BookTicket: public Ui_BookTicket {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKTICKET_H
