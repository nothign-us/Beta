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
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_SearchForStrAndDepartureDate
{
public:

    void setupUi(QDialog *SearchForStrAndDepartureDate)
    {
        if (SearchForStrAndDepartureDate->objectName().isEmpty())
            SearchForStrAndDepartureDate->setObjectName(QString::fromUtf8("SearchForStrAndDepartureDate"));
        SearchForStrAndDepartureDate->resize(400, 300);

        retranslateUi(SearchForStrAndDepartureDate);

        QMetaObject::connectSlotsByName(SearchForStrAndDepartureDate);
    } // setupUi

    void retranslateUi(QDialog *SearchForStrAndDepartureDate)
    {
        SearchForStrAndDepartureDate->setWindowTitle(QApplication::translate("SearchForStrAndDepartureDate", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchForStrAndDepartureDate: public Ui_SearchForStrAndDepartureDate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHFORSTRANDDEPARTUREDATE_H
