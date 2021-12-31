#include "bookticket.h"
#include "ui_bookticket.h"

bookTicket::bookTicket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bookTicket)
{
    ui->setupUi(this);
}

bookTicket::~bookTicket()
{
    delete ui;
}

