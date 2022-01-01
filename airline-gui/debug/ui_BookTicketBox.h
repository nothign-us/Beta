/********************************************************************************
** Form generated from reading UI file 'BookTicketBox.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKTICKETBOX_H
#define UI_BOOKTICKETBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookTicketBox
{
public:
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
    QRadioButton *isEco;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *DesAirport;

    void setupUi(QDialog *BookTicketBox)
    {
        if (BookTicketBox->objectName().isEmpty())
            BookTicketBox->setObjectName(QString::fromUtf8("BookTicketBox"));
        BookTicketBox->resize(400, 300);
        layoutWidget = new QWidget(BookTicketBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 150, 220, 28));
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

        GetList = new QPushButton(BookTicketBox);
        GetList->setObjectName(QString::fromUtf8("GetList"));
        GetList->setGeometry(QRect(60, 240, 281, 41));
        isSkyBoss = new QRadioButton(BookTicketBox);
        isSkyBoss->setObjectName(QString::fromUtf8("isSkyBoss"));
        isSkyBoss->setGeometry(QRect(200, 190, 112, 23));
        layoutWidget_2 = new QWidget(BookTicketBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(80, 30, 284, 27));
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

        isEco = new QRadioButton(BookTicketBox);
        isEco->setObjectName(QString::fromUtf8("isEco"));
        isEco->setGeometry(QRect(90, 190, 112, 23));
        layoutWidget_3 = new QWidget(BookTicketBox);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 90, 330, 27));
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


        retranslateUi(BookTicketBox);

        QMetaObject::connectSlotsByName(BookTicketBox);
    } // setupUi

    void retranslateUi(QDialog *BookTicketBox)
    {
        BookTicketBox->setWindowTitle(QApplication::translate("BookTicketBox", "Dialog", nullptr));
        label_3->setText(QApplication::translate("BookTicketBox", "Departure Day", nullptr));
        Date->setDisplayFormat(QApplication::translate("BookTicketBox", "d/M/yyyy", nullptr));
        GetList->setText(QApplication::translate("BookTicketBox", "Get List Flight", nullptr));
        isSkyBoss->setText(QApplication::translate("BookTicketBox", "Sky Boss", nullptr));
        label->setText(QApplication::translate("BookTicketBox", "Start AirPort", nullptr));
        StartAirport->setItemText(0, QApplication::translate("BookTicketBox", "San bay Buon Ma Thuot", nullptr));
        StartAirport->setItemText(1, QApplication::translate("BookTicketBox", "San bay Ca Mau", nullptr));
        StartAirport->setItemText(2, QApplication::translate("BookTicketBox", "San bay Cam Ranh", nullptr));
        StartAirport->setItemText(3, QApplication::translate("BookTicketBox", "San bay Can Tho", nullptr));
        StartAirport->setItemText(4, QApplication::translate("BookTicketBox", "San bay Cat Bi", nullptr));
        StartAirport->setItemText(5, QApplication::translate("BookTicketBox", "San bay Chu Lai", nullptr));
        StartAirport->setItemText(6, QApplication::translate("BookTicketBox", "San bay Con Dao", nullptr));
        StartAirport->setItemText(7, QApplication::translate("BookTicketBox", "San bay Da Nang", nullptr));
        StartAirport->setItemText(8, QApplication::translate("BookTicketBox", "San bay Dien Bien Phu", nullptr));
        StartAirport->setItemText(9, QApplication::translate("BookTicketBox", "San bay Dong Hoi", nullptr));
        StartAirport->setItemText(10, QApplication::translate("BookTicketBox", "San bay Lien Khuong", nullptr));
        StartAirport->setItemText(11, QApplication::translate("BookTicketBox", "San bay Noi Bai", nullptr));
        StartAirport->setItemText(12, QApplication::translate("BookTicketBox", "San bay Phu Bai", nullptr));
        StartAirport->setItemText(13, QApplication::translate("BookTicketBox", "San bay Phu Cat", nullptr));
        StartAirport->setItemText(14, QApplication::translate("BookTicketBox", "San bay  Phu Quoc", nullptr));
        StartAirport->setItemText(15, QApplication::translate("BookTicketBox", "San bay Pleiku", nullptr));
        StartAirport->setItemText(16, QApplication::translate("BookTicketBox", "San bay Rach GIa", nullptr));
        StartAirport->setItemText(17, QApplication::translate("BookTicketBox", "San bay Tan Son Nhat", nullptr));
        StartAirport->setItemText(18, QApplication::translate("BookTicketBox", "San bay Tho Xuan", nullptr));
        StartAirport->setItemText(19, QApplication::translate("BookTicketBox", "San bay Tuy Hoa", nullptr));
        StartAirport->setItemText(20, QApplication::translate("BookTicketBox", "San bay Van Don", nullptr));
        StartAirport->setItemText(21, QApplication::translate("BookTicketBox", "San bay Vinh", nullptr));

        isEco->setText(QApplication::translate("BookTicketBox", "Eco", nullptr));
        label_2->setText(QApplication::translate("BookTicketBox", "Destination Airport", nullptr));
        DesAirport->setItemText(0, QApplication::translate("BookTicketBox", "San bay Buon Ma Thuot", nullptr));
        DesAirport->setItemText(1, QApplication::translate("BookTicketBox", "San bay Ca Mau", nullptr));
        DesAirport->setItemText(2, QApplication::translate("BookTicketBox", "San bay Cam Ranh", nullptr));
        DesAirport->setItemText(3, QApplication::translate("BookTicketBox", "San bay Can Tho", nullptr));
        DesAirport->setItemText(4, QApplication::translate("BookTicketBox", "San bay Cat Bi", nullptr));
        DesAirport->setItemText(5, QApplication::translate("BookTicketBox", "San bay Chu Lai", nullptr));
        DesAirport->setItemText(6, QApplication::translate("BookTicketBox", "San bay Con Dao", nullptr));
        DesAirport->setItemText(7, QApplication::translate("BookTicketBox", "San bay Da Nang", nullptr));
        DesAirport->setItemText(8, QApplication::translate("BookTicketBox", "San bay Dien Bien Phu", nullptr));
        DesAirport->setItemText(9, QApplication::translate("BookTicketBox", "San bay Dong Hoi", nullptr));
        DesAirport->setItemText(10, QApplication::translate("BookTicketBox", "San bay Lien Khuong", nullptr));
        DesAirport->setItemText(11, QApplication::translate("BookTicketBox", "San bay Noi Bai", nullptr));
        DesAirport->setItemText(12, QApplication::translate("BookTicketBox", "San bay Phu Bai", nullptr));
        DesAirport->setItemText(13, QApplication::translate("BookTicketBox", "San bay Phu Cat", nullptr));
        DesAirport->setItemText(14, QApplication::translate("BookTicketBox", "San bay  Phu Quoc", nullptr));
        DesAirport->setItemText(15, QApplication::translate("BookTicketBox", "San bay Pleiku", nullptr));
        DesAirport->setItemText(16, QApplication::translate("BookTicketBox", "San bay Rach GIa", nullptr));
        DesAirport->setItemText(17, QApplication::translate("BookTicketBox", "San bay Tan Son Nhat", nullptr));
        DesAirport->setItemText(18, QApplication::translate("BookTicketBox", "San bay Tho Xuan", nullptr));
        DesAirport->setItemText(19, QApplication::translate("BookTicketBox", "San bay Tuy Hoa", nullptr));
        DesAirport->setItemText(20, QApplication::translate("BookTicketBox", "San bay Van Don", nullptr));
        DesAirport->setItemText(21, QApplication::translate("BookTicketBox", "San bay Vinh", nullptr));

    } // retranslateUi

};

namespace Ui {
    class BookTicketBox: public Ui_BookTicketBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKTICKETBOX_H
