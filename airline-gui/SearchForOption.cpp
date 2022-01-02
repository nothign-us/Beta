#include "SearchForOption.h"
#include "ui_SearchForOption.h"

SearchForOption::SearchForOption(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchForOption)
{
    ui->setupUi(this);
    this->setWindowTitle("Chọn kiểu tìm kiếm vé");
}
Ticket* SearchForOption::getBookedTicket()
{
    return bookedTicket;
}
SearchForOption::~SearchForOption()
{
    delete ui;
}

void SearchForOption::on_confirm_clicked()
{
    Manager::loadTicket();
    if(ui->btn1->isChecked())
    {
        SearchForOption::close();
        SearchForStrAndDesAirport option;
        option.exec();
        SearchForOption::exec();
        //bookedTicket = option.getBookedTicket();
    }
    else if(ui->btn2->isChecked())
    {
        SearchForStrAndDepartureDate option;
        option.exec();
        //bookedTicket = option.getBookedTicket();
    }
    else
    {
        QMessageBox::critical(this,  "Lỗi","Vui lòng chọn trước khi tiếp tục");
    }
}

