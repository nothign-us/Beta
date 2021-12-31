/********************************************************************************
** Form generated from reading UI file 'ChooseFlight.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEFLIGHT_H
#define UI_CHOOSEFLIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ChooseFlight
{
public:

    void setupUi(QDialog *ChooseFlight)
    {
        if (ChooseFlight->objectName().isEmpty())
            ChooseFlight->setObjectName(QString::fromUtf8("ChooseFlight"));
        ChooseFlight->resize(400, 300);

        retranslateUi(ChooseFlight);

        QMetaObject::connectSlotsByName(ChooseFlight);
    } // setupUi

    void retranslateUi(QDialog *ChooseFlight)
    {
        ChooseFlight->setWindowTitle(QApplication::translate("ChooseFlight", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseFlight: public Ui_ChooseFlight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEFLIGHT_H
