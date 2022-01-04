/********************************************************************************
** Form generated from reading UI file 'SearchForStrAndDesAirport.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHFORSTRANDDESAIRPORT_H
#define UI_SEARCHFORSTRANDDESAIRPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_SearchForStrAndDesAirport
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *Confirm;
    QComboBox *StrAirport;
    QComboBox *DesAirport;
    QRadioButton *eco;
    QRadioButton *skyboss;

    void setupUi(QDialog *SearchForStrAndDesAirport)
    {
        if (SearchForStrAndDesAirport->objectName().isEmpty())
            SearchForStrAndDesAirport->setObjectName(QString::fromUtf8("SearchForStrAndDesAirport"));
        SearchForStrAndDesAirport->resize(400, 300);
        label = new QLabel(SearchForStrAndDesAirport);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 40, 91, 17));
        label_2 = new QLabel(SearchForStrAndDesAirport);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 90, 101, 17));
        Confirm = new QPushButton(SearchForStrAndDesAirport);
        Confirm->setObjectName(QString::fromUtf8("Confirm"));
        Confirm->setGeometry(QRect(100, 210, 191, 41));
        StrAirport = new QComboBox(SearchForStrAndDesAirport);
        StrAirport->setObjectName(QString::fromUtf8("StrAirport"));
        StrAirport->setGeometry(QRect(140, 40, 241, 25));
        DesAirport = new QComboBox(SearchForStrAndDesAirport);
        DesAirport->setObjectName(QString::fromUtf8("DesAirport"));
        DesAirport->setGeometry(QRect(140, 90, 241, 25));
        eco = new QRadioButton(SearchForStrAndDesAirport);
        eco->setObjectName(QString::fromUtf8("eco"));
        eco->setGeometry(QRect(50, 150, 112, 23));
        skyboss = new QRadioButton(SearchForStrAndDesAirport);
        skyboss->setObjectName(QString::fromUtf8("skyboss"));
        skyboss->setGeometry(QRect(240, 150, 121, 23));

        retranslateUi(SearchForStrAndDesAirport);

        QMetaObject::connectSlotsByName(SearchForStrAndDesAirport);
    } // setupUi

    void retranslateUi(QDialog *SearchForStrAndDesAirport)
    {
        SearchForStrAndDesAirport->setWindowTitle(QApplication::translate("SearchForStrAndDesAirport", "Dialog", nullptr));
        label->setText(QApplication::translate("SearchForStrAndDesAirport", "S\303\242n bay \304\221i", nullptr));
        label_2->setText(QApplication::translate("SearchForStrAndDesAirport", "S\303\242n bay \304\221\303\255ch", nullptr));
        Confirm->setText(QApplication::translate("SearchForStrAndDesAirport", "Ti\341\272\277p t\341\273\245c", nullptr));
        eco->setText(QApplication::translate("SearchForStrAndDesAirport", "H\341\272\241ng th\306\260\341\273\235ng", nullptr));
        skyboss->setText(QApplication::translate("SearchForStrAndDesAirport", "H\341\272\241ng th\306\260\306\241ng gia", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchForStrAndDesAirport: public Ui_SearchForStrAndDesAirport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHFORSTRANDDESAIRPORT_H
