/********************************************************************************
** Form generated from reading UI file 'SearchForOption.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHFOROPTION_H
#define UI_SEARCHFOROPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_SearchForOption
{
public:
    QRadioButton *btn1;
    QPushButton *confirm;
    QRadioButton *btn2;

    void setupUi(QDialog *SearchForOption)
    {
        if (SearchForOption->objectName().isEmpty())
            SearchForOption->setObjectName(QString::fromUtf8("SearchForOption"));
        SearchForOption->resize(400, 300);
        btn1 = new QRadioButton(SearchForOption);
        btn1->setObjectName(QString::fromUtf8("btn1"));
        btn1->setGeometry(QRect(70, 60, 271, 23));
        confirm = new QPushButton(SearchForOption);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setGeometry(QRect(120, 180, 151, 51));
        btn2 = new QRadioButton(SearchForOption);
        btn2->setObjectName(QString::fromUtf8("btn2"));
        btn2->setGeometry(QRect(70, 120, 271, 23));

        retranslateUi(SearchForOption);

        QMetaObject::connectSlotsByName(SearchForOption);
    } // setupUi

    void retranslateUi(QDialog *SearchForOption)
    {
        SearchForOption->setWindowTitle(QApplication::translate("SearchForOption", "Dialog", nullptr));
        btn1->setText(QApplication::translate("SearchForOption", "T\303\254m ki\341\272\277m v\341\273\233i s\303\242n bay \304\221i v\303\240 \304\221\341\272\277n", nullptr));
        confirm->setText(QApplication::translate("SearchForOption", "Ti\341\272\277p t\341\273\245c", nullptr));
        btn2->setText(QApplication::translate("SearchForOption", "T\303\254m ki\341\272\277m v\341\273\233i s\303\242n bay \304\221i v\303\240 ng\303\240y bay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchForOption: public Ui_SearchForOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHFOROPTION_H
