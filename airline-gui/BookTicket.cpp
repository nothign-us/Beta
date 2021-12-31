#include "BookTicket.h"
#include "ui_BookTicket.h"

BookTicket::BookTicket(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BookTicket)
{
    ui->setupUi(this);
}

BookTicket::~BookTicket()
{
    delete ui;
}

void BookTicket::on_GetList_clicked()
{
   std::string startAirport = (ui->StartAirport->currentText().toStdString());
    std::string destinateAiport = (ui->DesAirport->currentText().toStdString());
    //QMessageBox::critical(this, startAirport, destinateAiport);

    Manager::loadTicket();
    std::vector<Ticket*> listTicket = Manager::searchFor((startAirport), (destinateAiport));
    std::vector<Flight> listFlight = GetFlight(listTicket);
    bool isEco,isSkyBoss;
    isEco = ui->isEco->isChecked();
    isSkyBoss = !isEco;
    if(listFlight.empty())
    {
        QMessageBox::critical(this, "Error", "Khong co chuyen bay phu hop");
    }
    else{
        ChooseFlight choose(listFlight);
        choose.exec();
    }
}
