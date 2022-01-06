#include "SearchForStrAndDesAirport.h"
#include "ui_SearchForStrAndDesAirport.h"

SearchForStrAndDesAirport::SearchForStrAndDesAirport(Account* currentAcc, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchForStrAndDesAirport)
{
    CurrentAccount = currentAcc;
    ui->setupUi(this);
    this->setWindowTitle("Tìm kiếm chuyến bay với sân bay đi và sân bay đến");
    ui->eco->setText("Hạng thường");
    ui->skyboss->setText("Hạng thương gia");

    vector<string> listAirport = Manager::listAirport;
    for(string i:listAirport){
        ui->StrAirport->addItem(QString::fromStdString(i));
    }
}

SearchForStrAndDesAirport::~SearchForStrAndDesAirport()
{
    delete ui;
}
Ticket* SearchForStrAndDesAirport::getBookedTicket()
{
    return bookedTicket;
}
void SearchForStrAndDesAirport::on_StrAirport_currentIndexChanged(int index)
{
    string currentStr = ui->StrAirport->currentText().toStdString();
    ui->DesAirport->clear();
    vector<string> listAirport = Manager::listAirport;
    for(string i:listAirport){
        if(i!=currentStr)
            ui->DesAirport->addItem(QString::fromStdString(i));
    }
}


void SearchForStrAndDesAirport::on_Confirm_clicked()
{
    string startAirport = ui->StrAirport->currentText().toStdString(), desAirport = ui->DesAirport->currentText().toStdString();
    if((!ui->eco->isChecked() && !ui->skyboss->isChecked()) || startAirport == "" || desAirport == "")
        QMessageBox::critical(this,  "Lỗi","Vui lòng chọn đủ thông tin trước khi tiếp tục");
    else{
        bool isEco = ui->eco->isChecked();
        vector<Ticket*> listTicket = Manager::searchFor(Airport(startAirport),Airport(desAirport));
        vector<Flight> listFlight = GetFlight(listTicket);
        SearchForStrAndDesAirport::close();
        if(listFlight.size()==0 )
            QMessageBox::critical(this,  "Lỗi","Không có chuyến bay phù hợp");
        else{
           SelectFlight *option = new SelectFlight(listFlight,isEco, listTicket);
           option->exec();
           Ticket* tk = nullptr;
           if(isEco)
              tk = new EcoTicket(option->getSelectedFlight(), CurrentAccount->getClient(),option->selectSeat(),option->isSelectSeat);
            else{
              tk = new SkybossTicket(option->getSelectedFlight(), CurrentAccount->getClient(),option->selectSeat(),option->isSelectSeat);
              tk->setSkyboss();
           }
           bookedTicket = tk;
        }
    }
}

