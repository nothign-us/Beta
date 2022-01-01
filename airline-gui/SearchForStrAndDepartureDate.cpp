#include "SearchForStrAndDepartureDate.h"
#include "ui_SearchForStrAndDepartureDate.h"

SearchForStrAndDepartureDate::SearchForStrAndDepartureDate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchForStrAndDepartureDate)
{
    ui->setupUi(this);
    this->setWindowTitle("Tìm kiếm chuyến bay với sân bay đi và ngày khởi hành");
}

SearchForStrAndDepartureDate::~SearchForStrAndDepartureDate()
{
    delete ui;
}
