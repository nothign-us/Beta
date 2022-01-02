#include "clientmenu.h"
#include "ui_clientmenu.h"

ClientMenu::ClientMenu(std::string username, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientMenu)
{
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
    close();
    SearchForOption optionSearch;
    optionSearch.exec();
    this->exec();
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
        for(int i = 0; i < ListTicket.size(); i++)
        {
            string tmp = ListTicket[i]->toString();
        }
    }
}

