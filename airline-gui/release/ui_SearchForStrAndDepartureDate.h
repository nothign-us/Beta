/********************************************************************************
** Form generated from reading UI file 'SearchForStrAndDepartureDate.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHFORSTRANDDEPARTUREDATE_H
#define UI_SEARCHFORSTRANDDEPARTUREDATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_SearchForStrAndDepartureDate
{
public:
    QLabel *label;
    QLabel *label_2;
    QComboBox *SrtAirport;
    QDateEdit *Date;
    QRadioButton *eco;
    QRadioButton *skyboss;
    QPushButton *confirm;
    QLabel *label_3;

    void setupUi(QDialog *SearchForStrAndDepartureDate)
    {
        if (SearchForStrAndDepartureDate->objectName().isEmpty())
            SearchForStrAndDepartureDate->setObjectName(QString::fromUtf8("SearchForStrAndDepartureDate"));
        SearchForStrAndDepartureDate->resize(400, 300);
        label = new QLabel(SearchForStrAndDepartureDate);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 50, 141, 17));
        label_2 = new QLabel(SearchForStrAndDepartureDate);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 110, 101, 17));
        SrtAirport = new QComboBox(SearchForStrAndDepartureDate);
        SrtAirport->setObjectName(QString::fromUtf8("SrtAirport"));
        SrtAirport->setGeometry(QRect(160, 50, 231, 25));
        Date = new QDateEdit(SearchForStrAndDepartureDate);
        Date->setObjectName(QString::fromUtf8("Date"));
        Date->setEnabled(true);
        Date->setGeometry(QRect(160, 100, 231, 26));
        Date->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Date->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        Date->setMinimumTime(QTime(0, 0, 0));
        Date->setCurrentSection(QDateTimeEdit::DaySection);
        Date->setCalendarPopup(true);
        eco = new QRadioButton(SearchForStrAndDepartureDate);
        eco->setObjectName(QString::fromUtf8("eco"));
        eco->setGeometry(QRect(60, 180, 112, 23));
        skyboss = new QRadioButton(SearchForStrAndDepartureDate);
        skyboss->setObjectName(QString::fromUtf8("skyboss"));
        skyboss->setGeometry(QRect(240, 180, 121, 23));
        confirm = new QPushButton(SearchForStrAndDepartureDate);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setGeometry(QRect(110, 220, 201, 51));
        label_3 = new QLabel(SearchForStrAndDepartureDate);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 150, 311, 17));

        retranslateUi(SearchForStrAndDepartureDate);

        QMetaObject::connectSlotsByName(SearchForStrAndDepartureDate);
    } // setupUi

    void retranslateUi(QDialog *SearchForStrAndDepartureDate)
    {
        SearchForStrAndDepartureDate->setWindowTitle(QApplication::translate("SearchForStrAndDepartureDate", "Dialog", nullptr));
        label->setText(QApplication::translate("SearchForStrAndDepartureDate", "S\303\242n bay \304\221i", nullptr));
        label_2->setText(QApplication::translate("SearchForStrAndDepartureDate", "Ng\303\240y \304\221i", nullptr));
        Date->setDisplayFormat(QApplication::translate("SearchForStrAndDepartureDate", "d/M/yyyy", nullptr));
        eco->setText(QApplication::translate("SearchForStrAndDepartureDate", "H\341\272\241ng th\306\260\341\273\235ng", nullptr));
        skyboss->setText(QApplication::translate("SearchForStrAndDepartureDate", "H\341\272\241ng th\306\260\306\241ng gia", nullptr));
        confirm->setText(QApplication::translate("SearchForStrAndDepartureDate", "Ti\341\272\277p t\341\273\245c", nullptr));
        label_3->setText(QApplication::translate("SearchForStrAndDepartureDate", "(L\306\260u \303\275: ch\341\273\211 h\341\273\227 tr\341\273\243 t\341\273\253 15/1/2022-31/1/2022)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchForStrAndDepartureDate: public Ui_SearchForStrAndDepartureDate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHFORSTRANDDEPARTUREDATE_H
