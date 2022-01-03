/********************************************************************************
** Form generated from reading UI file 'signupwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPWINDOW_H
#define UI_SIGNUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUpWindow
{
public:
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *usernameInput;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QLineEdit *passwordInput;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_3;
    QLineEdit *fullnameInput;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QDateEdit *birthDayEditor;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QLineEdit *IDInput;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *nationInput;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *provinceInput;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *districtInput;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QLineEdit *townInput;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_10;
    QLineEdit *streetInput;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_11;
    QComboBox *sexChoice;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_12;
    QLineEdit *phoneNumberInput;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_13;
    QLineEdit *emailInput;
    QPushButton *confirmButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *SignUpWindow)
    {
        if (SignUpWindow->objectName().isEmpty())
            SignUpWindow->setObjectName(QString::fromUtf8("SignUpWindow"));
        SignUpWindow->resize(455, 563);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SignUpWindow->sizePolicy().hasHeightForWidth());
        SignUpWindow->setSizePolicy(sizePolicy);
        SignUpWindow->setMinimumSize(QSize(400, 500));
        horizontalWidget = new QWidget(SignUpWindow);
        horizontalWidget->setObjectName(QString::fromUtf8("horizontalWidget"));
        horizontalWidget->setGeometry(QRect(0, 0, 451, 561));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(horizontalWidget->sizePolicy().hasHeightForWidth());
        horizontalWidget->setSizePolicy(sizePolicy1);
        horizontalWidget->setMinimumSize(QSize(0, 0));
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalWidget = new QWidget(horizontalWidget);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        sizePolicy.setHeightForWidth(verticalWidget->sizePolicy().hasHeightForWidth());
        verticalWidget->setSizePolicy(sizePolicy);
        verticalWidget->setMinimumSize(QSize(0, 500));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(1, -1, -1, -1);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, -1, -1);
        label = new QLabel(verticalWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setMinimumSize(QSize(125, 0));

        horizontalLayout_2->addWidget(label);

        usernameInput = new QLineEdit(verticalWidget);
        usernameInput->setObjectName(QString::fromUtf8("usernameInput"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(usernameInput->sizePolicy().hasHeightForWidth());
        usernameInput->setSizePolicy(sizePolicy3);
        usernameInput->setMinimumSize(QSize(100, 0));
        usernameInput->setMaximumSize(QSize(700, 16777215));

        horizontalLayout_2->addWidget(usernameInput);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_2 = new QLabel(verticalWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(125, 0));

        horizontalLayout_8->addWidget(label_2);

        passwordInput = new QLineEdit(verticalWidget);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));

        horizontalLayout_8->addWidget(passwordInput);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_3 = new QLabel(verticalWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setMinimumSize(QSize(125, 0));

        horizontalLayout_9->addWidget(label_3);

        fullnameInput = new QLineEdit(verticalWidget);
        fullnameInput->setObjectName(QString::fromUtf8("fullnameInput"));

        horizontalLayout_9->addWidget(fullnameInput);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(verticalWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setMinimumSize(QSize(125, 0));

        horizontalLayout_7->addWidget(label_4);

        birthDayEditor = new QDateEdit(verticalWidget);
        birthDayEditor->setObjectName(QString::fromUtf8("birthDayEditor"));
        birthDayEditor->setEnabled(true);
        birthDayEditor->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        birthDayEditor->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        birthDayEditor->setMinimumTime(QTime(0, 0, 0));
        birthDayEditor->setCurrentSection(QDateTimeEdit::DaySection);
        birthDayEditor->setCalendarPopup(true);

        horizontalLayout_7->addWidget(birthDayEditor);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_5 = new QLabel(verticalWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setMinimumSize(QSize(125, 0));

        horizontalLayout_10->addWidget(label_5);

        IDInput = new QLineEdit(verticalWidget);
        IDInput->setObjectName(QString::fromUtf8("IDInput"));

        horizontalLayout_10->addWidget(IDInput);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(verticalWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setMinimumSize(QSize(125, 0));

        horizontalLayout_6->addWidget(label_6);

        nationInput = new QLineEdit(verticalWidget);
        nationInput->setObjectName(QString::fromUtf8("nationInput"));

        horizontalLayout_6->addWidget(nationInput);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(verticalWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setMinimumSize(QSize(125, 0));

        horizontalLayout_5->addWidget(label_7);

        provinceInput = new QLineEdit(verticalWidget);
        provinceInput->setObjectName(QString::fromUtf8("provinceInput"));

        horizontalLayout_5->addWidget(provinceInput);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_8 = new QLabel(verticalWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        label_8->setMinimumSize(QSize(125, 0));

        horizontalLayout_4->addWidget(label_8);

        districtInput = new QLineEdit(verticalWidget);
        districtInput->setObjectName(QString::fromUtf8("districtInput"));

        horizontalLayout_4->addWidget(districtInput);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, -1, -1);
        label_9 = new QLabel(verticalWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setMinimumSize(QSize(125, 0));

        horizontalLayout_3->addWidget(label_9);

        townInput = new QLineEdit(verticalWidget);
        townInput->setObjectName(QString::fromUtf8("townInput"));

        horizontalLayout_3->addWidget(townInput);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_10 = new QLabel(verticalWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);
        label_10->setMinimumSize(QSize(125, 0));

        horizontalLayout_11->addWidget(label_10);

        streetInput = new QLineEdit(verticalWidget);
        streetInput->setObjectName(QString::fromUtf8("streetInput"));

        horizontalLayout_11->addWidget(streetInput);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_11 = new QLabel(verticalWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setMinimumSize(QSize(125, 0));

        horizontalLayout_13->addWidget(label_11);

        sexChoice = new QComboBox(verticalWidget);
        sexChoice->addItem(QString());
        sexChoice->addItem(QString());
        sexChoice->setObjectName(QString::fromUtf8("sexChoice"));

        horizontalLayout_13->addWidget(sexChoice);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_12 = new QLabel(verticalWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);
        label_12->setMinimumSize(QSize(125, 0));

        horizontalLayout_14->addWidget(label_12);

        phoneNumberInput = new QLineEdit(verticalWidget);
        phoneNumberInput->setObjectName(QString::fromUtf8("phoneNumberInput"));

        horizontalLayout_14->addWidget(phoneNumberInput);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_13 = new QLabel(verticalWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy2.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy2);
        label_13->setMinimumSize(QSize(125, 0));

        horizontalLayout_12->addWidget(label_13);

        emailInput = new QLineEdit(verticalWidget);
        emailInput->setObjectName(QString::fromUtf8("emailInput"));

        horizontalLayout_12->addWidget(emailInput);


        verticalLayout->addLayout(horizontalLayout_12);

        confirmButton = new QPushButton(verticalWidget);
        confirmButton->setObjectName(QString::fromUtf8("confirmButton"));

        verticalLayout->addWidget(confirmButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(verticalWidget);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(SignUpWindow);

        QMetaObject::connectSlotsByName(SignUpWindow);
    } // setupUi

    void retranslateUi(QDialog *SignUpWindow)
    {
        SignUpWindow->setWindowTitle(QApplication::translate("SignUpWindow", "Dialog", nullptr));
        label->setText(QApplication::translate("SignUpWindow", "T\303\252n \304\221\304\203ng nh\341\272\255p", nullptr));
        usernameInput->setText(QString());
        label_2->setText(QApplication::translate("SignUpWindow", "M\341\272\255t kh\341\272\251u", nullptr));
        label_3->setText(QApplication::translate("SignUpWindow", "H\341\273\215 v\303\240 t\303\252n", nullptr));
        label_4->setText(QApplication::translate("SignUpWindow", "Ng\303\240y sinh", nullptr));
        birthDayEditor->setDisplayFormat(QApplication::translate("SignUpWindow", "d/M/yyyy", nullptr));
        label_5->setText(QApplication::translate("SignUpWindow", "ID", nullptr));
        label_6->setText(QApplication::translate("SignUpWindow", "Qu\341\273\221c gia sinh s\341\273\221ng", nullptr));
        label_7->setText(QApplication::translate("SignUpWindow", "T\341\273\211nh/ Th\303\240nh ph\341\273\221", nullptr));
        label_8->setText(QApplication::translate("SignUpWindow", "Qu\341\272\255n/ Huy\341\273\207n", nullptr));
        label_9->setText(QApplication::translate("SignUpWindow", "Ph\306\260\341\273\235ng/ X\303\243", nullptr));
        label_10->setText(QApplication::translate("SignUpWindow", "\304\220\306\260\341\273\235ng", nullptr));
        label_11->setText(QApplication::translate("SignUpWindow", "Gi\341\273\233i t\303\255nh", nullptr));
        sexChoice->setItemText(0, QApplication::translate("SignUpWindow", "Nam", nullptr));
        sexChoice->setItemText(1, QApplication::translate("SignUpWindow", "N\341\273\257", nullptr));

        label_12->setText(QApplication::translate("SignUpWindow", "S\341\273\221 \304\221i\341\273\207n tho\341\272\241i", nullptr));
        label_13->setText(QApplication::translate("SignUpWindow", "Email", nullptr));
        confirmButton->setText(QApplication::translate("SignUpWindow", "X\303\241c nh\341\272\255n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpWindow: public Ui_SignUpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWINDOW_H
