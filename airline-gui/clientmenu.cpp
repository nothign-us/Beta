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

    BookTicketBox box;
    box.exec();

}

void ClientMenu::on_signoutButton_clicked()
{
    close();
}
