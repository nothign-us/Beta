#include "SearchForStrAndDepartureDate.h"
#include "ui_SearchForStrAndDepartureDate.h"

SearchForStrAndDepartureDate::SearchForStrAndDepartureDate(Account* currentAccount, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchForStrAndDepartureDate)
{
    ui->setupUi(this);
    this->setWindowTitle("Tìm kiếm chuyến bay với sân bay đi và ngày khởi hành");
    vector<string> listAirport = Manager::listAirport;
    for(string i:listAirport){
        ui->SrtAirport->addItem(QString::fromStdString(i));
    }
}

SearchForStrAndDepartureDate::~SearchForStrAndDepartureDate()
{
    delete ui;
}
Ticket* SearchForStrAndDepartureDate::getBookedTicket()
{
    return bookedTicket;
}
void SearchForStrAndDepartureDate::on_confirm_clicked()
{
    string startAirport = ui->SrtAirport->currentText().toStdString(), date = ui->Date->text().toStdString();
    if((!ui->eco->isChecked() && !ui->skyboss->isChecked()) || startAirport == "")
        QMessageBox::critical(this,  "Lỗi","Vui lòng chọn đủ thông tin trước khi tiếp tục");
    else{
        bool isEco = ui->eco->isChecked();
        vector<Ticket*> listTicket = GetListTicket(Manager::listAirport,1,startAirport,"",Date::Parse(date));
        vector<Flight> listFlight = GetFlight(listTicket);
        if(listFlight.size()==0)
            QMessageBox::critical(this,  "Lỗi","Khong co chuyen bay phu hop");
        else{
           SelectFlight *option = new SelectFlight(listFlight,isEco, listTicket);
           option->exec();
           if(isEco){
                bookedTicket = new EcoTicket(option->getSelectedFlight(), CurrentAccount->getClient(),option->selectSeat(),option->isSelectSeat);

           }
           else{
                bookedTicket = new SkybossTicket(option->getSelectedFlight(), CurrentAccount->getClient(),option->selectSeat(),option->isSelectSeat);
                bookedTicket->setSkyboss();
           }
        }
    }
}

