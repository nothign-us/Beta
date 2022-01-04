/********************************************************************************
** Form generated from reading UI file 'SelectFlight.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTFLIGHT_H
#define UI_SELECTFLIGHT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectFlight
{
public:
    QLabel *label;
    QLabel *label_2;
    QComboBox *Row;
    QComboBox *Col;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *Disselect;
    QRadioButton *select;
    QPushButton *pushButton;

    void setupUi(QDialog *SelectFlight)
    {
        if (SelectFlight->objectName().isEmpty())
            SelectFlight->setObjectName(QString::fromUtf8("SelectFlight"));
        SelectFlight->resize(771, 679);
        label = new QLabel(SelectFlight);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(550, 490, 67, 17));
        label_2 = new QLabel(SelectFlight);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(670, 490, 67, 17));
        Row = new QComboBox(SelectFlight);
        Row->setObjectName(QString::fromUtf8("Row"));
        Row->setGeometry(QRect(550, 530, 86, 25));
        Col = new QComboBox(SelectFlight);
        Col->setObjectName(QString::fromUtf8("Col"));
        Col->setGeometry(QRect(660, 530, 86, 25));
        layoutWidget = new QWidget(SelectFlight);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 500, 294, 56));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Disselect = new QRadioButton(layoutWidget);
        Disselect->setObjectName(QString::fromUtf8("Disselect"));

        verticalLayout->addWidget(Disselect);

        select = new QRadioButton(layoutWidget);
        select->setObjectName(QString::fromUtf8("select"));

        verticalLayout->addWidget(select);

        pushButton = new QPushButton(SelectFlight);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 610, 201, 41));

        retranslateUi(SelectFlight);

        QMetaObject::connectSlotsByName(SelectFlight);
    } // setupUi

    void retranslateUi(QDialog *SelectFlight)
    {
        SelectFlight->setWindowTitle(QApplication::translate("SelectFlight", "Dialog", nullptr));
        label->setText(QApplication::translate("SelectFlight", "H\303\240ng", nullptr));
        label_2->setText(QApplication::translate("SelectFlight", "C\341\273\231t", nullptr));
        Disselect->setText(QApplication::translate("SelectFlight", "Kh\303\264ng ch\341\273\215n gh\341\272\277", nullptr));
        select->setText(QApplication::translate("SelectFlight", "Ch\341\273\215n gh\341\272\277 (c\303\263 ph\303\255, mi\341\273\205n ph\303\255 v\341\273\233i Skyboss)", nullptr));
        pushButton->setText(QApplication::translate("SelectFlight", "\304\220\341\272\267t v\303\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectFlight: public Ui_SelectFlight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTFLIGHT_H
