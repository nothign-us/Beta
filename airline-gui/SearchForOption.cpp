#include "SearchForOption.h"
#include "ui_SearchForOption.h"

SearchForOption::SearchForOption(Account* currentAcc,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchForOption)
{
    ui->setupUi(this);
    currentAccount = currentAcc;
    this->setWindowTitle("Chọn kiểu tìm kiếm vé");
}
vector<Ticket*> SearchForOption::getBookedTicket()
{
    return bookedTicket;
}
SearchForOption::~SearchForOption()
{
    delete ui;
}

void SearchForOption::on_confirm_clicked()
{
    if(ui->btn1->isChecked())
    {
        SearchForStrAndDesAirport option(currentAccount);
        option.exec();
        if(option.getBookedTicket())
            bookedTicket.push_back(option.getBookedTicket());

    }
    else if(ui->btn2->isChecked())
    {
        SearchForStrAndDepartureDate option(currentAccount);
        option.exec();
        if(option.getBookedTicket())
            bookedTicket.push_back(option.getBookedTicket());
    }
    else
    {
        QMessageBox::critical(this, "Lỗi", "Vui lòng chọn trước khi tiếp tục");
    }
}

