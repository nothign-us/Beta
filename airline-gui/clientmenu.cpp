#include "clientmenu.h"
#include "ui_clientmenu.h"

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

void ClientMenu::on_signoutButton_clicked()
{
    close();
}

void ClientMenu::on_printTicketButton_clicked()
{
    if(ListTicket.empty())
        QMessageBox::critical(this, "Tài khoản chưa đặt vé", "Vui lòng đặt vé");
    else
    {
        QDialog *OutScreen = new QDialog;
        OutScreen->setWindowTitle("Danh sach ve");
        OutScreen->setFixedSize(1200,450);
        vector<QLabel*> listLabel;
        int index=0;
        for(int i = 0; i < ListTicket.size(); i++)
        {
            string tmp = ListTicket[i]->toString();
            QLabel* newLabel = new QLabel(QString::fromStdString(tmp),OutScreen);
            newLabel->move(20+200*(++index),20);
            listLabel.push_back(newLabel);
        }
        OutScreen->exec();
        for(auto i:listLabel)
            delete i;
        delete OutScreen;
    }
}


void ClientMenu::on_purchaseButton_clicked()
{
    if(ListTicket.size() == 0)
        QMessageBox::critical(this, "Tài khoản chưa đặt vé", "Vui lòng đặt vé");
    else{
        for(auto i: ListTicket)
        {
            AdminAccount::addTicket(i);
        }
        QMessageBox OK; OK.setText("Đặt vé thành công, cảm ơn bạn!");
        OK.exec();

    }
}

