#include "BookTicketBox.h"
#include "ui_BookTicketBox.h"

BookTicketBox::BookTicketBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BookTicketBox)
{
    ui->setupUi(this);
    this->setWindowTitle("Booking Ticket");
}

BookTicketBox::~BookTicketBox()
{
    delete ui;
}

void BookTicketBox::on_GetList_clicked()
{
    string strAp = ui->StartAirport->currentText().toStdString();
    string desAp = ui->DesAirport->currentText().toStdString();
    Manager::loadTicket();
    bool isEco = ui->isEco->isChecked();
    bool isSkyBoss = !isEco;
    vector<string> listAirport = Manager::listAirport;
    /*
    vector<Ticket*> listTicket =  GetListTicket(listAirport);
    vector<Flight> listFlight = GetFlight(listTicket);

    if(listFlight.size()==0)
    {
        QMessageBox::critical(this, "Khong tim thay chuyen bay phu hop","");
    }
    else {
       ChooseFlight select(listFlight);
       select.exec();
    }
    */
}
