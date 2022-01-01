/********************************************************************************
** Form generated from reading UI file 'SelectFlight.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTFLIGHT_H
#define UI_SELECTFLIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectFlight
{
public:

    void setupUi(QWidget *SelectFlight)
    {
        if (SelectFlight->objectName().isEmpty())
            SelectFlight->setObjectName(QString::fromUtf8("SelectFlight"));
        SelectFlight->resize(400, 300);

        retranslateUi(SelectFlight);

        QMetaObject::connectSlotsByName(SelectFlight);
    } // setupUi

    void retranslateUi(QWidget *SelectFlight)
    {
        SelectFlight->setWindowTitle(QApplication::translate("SelectFlight", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectFlight: public Ui_SelectFlight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTFLIGHT_H
