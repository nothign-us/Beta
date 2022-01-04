#include "clientmenu.h"
#include "mainwindow.h"
#include "ui_clientmenu.h"

#include <QScrollArea>

ClientMenu::ClientMenu(std::string username, Account* currentAcc , QWidget *parent ) :
    QDialog(parent),
    ui(new Ui::ClientMenu)
{
    CurrentAccount = currentAcc;
    ui->setupUi(this);
    this->setWindowTitle("Chọn thao tác");
    ui->usernameDisplay->setText(QString::fromStdString(username));
}

ClientMenu::~ClientMenu()
{
    delete ui;
}


void ClientMenu::on_bookTicketButton_clicked()
{
    SearchForOption optionSearch(CurrentAccount);
    optionSearch.exec();
    for(auto i:optionSearch.getBookedTicket())
        ListTicket.push_back(i);
}

void ClientMenu::on_signoutButton_clicked() {
    close();
}

void ClientMenu::on_printTicketButton_clicked()
{
    if(ListTicket.empty())
        QMessageBox::critical(this, "Tài khoản chưa đặt vé", "Vui lòng đặt vé");
    else
    {
        QDialog *OutScreen = new QDialog;
        OutScreen->setWindowTitle("Danh sách vé");
        OutScreen->setMinimumSize(500,450);

        QScrollArea* scroll = new QScrollArea(OutScreen);
        scroll->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scroll->setWidgetResizable(true);

        QWidget* widget = new QWidget(scroll);
        scroll->setWidget(widget);

        QVBoxLayout* OutScrLayout = new QVBoxLayout();
        OutScreen->setLayout(OutScrLayout);
        OutScrLayout->addWidget(scroll);
        QVBoxLayout* layout = new QVBoxLayout(widget);
        widget->setLayout(layout);

        vector<QLabel*> listLabel;
        //int index = 0;
        for(int i = 0; i < int(ListTicket.size()); i++)
        {
            string tmp = ListTicket[i]->toString();
            QLabel* newLabel = new QLabel(QString::fromStdString(tmp));
            layout->addWidget(newLabel);
            //newLabel->move(20, 20+300*(index++));
            listLabel.push_back(newLabel);
        }
        OutScreen->exec();
        delete OutScreen;
    }
}


void ClientMenu::on_purchaseButton_clicked()
{
    if(ListTicket.size() == 0)
        QMessageBox::critical(this, "Tài khoản chưa đặt vé", "Vui lòng đặt vé");
    else{
        long long totalPrice = 0;
        for(auto i: ListTicket)
        {
            AdminAccount::addTicket(i);
            totalPrice += i->calculatePrice();
        }
        string totalPrice_Str = to_string(totalPrice);
        totalPrice_Str = "Tổng số tiền đã trả là: " + totalPrice_Str;
        totalPrice_Str += "\n Đặt vé thành công, cảm ơn bạn!";
        QMessageBox OK;OK.setWindowTitle("Xong"); OK.setText(QString::fromStdString(totalPrice_Str));
        OK.exec();

    }
}

