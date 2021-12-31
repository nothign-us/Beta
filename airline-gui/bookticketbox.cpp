#include "bookticketbox.h"
#include "ui_bookticketbox.h"

BookTicketBox::BookTicketBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BookTicketBox)
{
    ui->setupUi(this);
    this->setWindowTitle("Book Ticket");

}

BookTicketBox::~BookTicketBox()
{
    delete ui;
}

void BookTicketBox::on_GetList_clicked()
{
    QString startAirport = (ui->StartAirport->currentText().toStdString());
    QString destinateAiport = (ui->DesAirport->currentText().toStdString());
    //QMessageBox::critical(this, startAirport, destinateAiport);

    std::string gg = startAirport.toStdString();
    cout << gg;
    destinateAiport = QString::fromStdString(gg);
    Manager::loadTicket();
    QString::fromStdString(gg);
    std::vector<Ticket*> listTicket = Manager::searchFor(Airport(startAirport), Airport(destinateAiport));
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
