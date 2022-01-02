#include "SearchForStrAndDesAirport.h"
#include "ui_SearchForStrAndDesAirport.h"

SearchForStrAndDesAirport::SearchForStrAndDesAirport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchForStrAndDesAirport)
{
    ui->setupUi(this);
    this->setWindowTitle("Tìm kiếm chuyến bay với sân bay đi và sân bay đến");
    vector<string> listAirport = Manager::listAirport;
    for(string i:listAirport){
        ui->StrAirport->addItem(QString::fromStdString(i));
    }
}

SearchForStrAndDesAirport::~SearchForStrAndDesAirport()
{
    delete ui;
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
    bool isEco = ui->eco->isChecked();
    vector<Ticket*> listTicket = GetListTicket(Manager::listAirport,0,startAirport,desAirport,Date(1,1,1));
    vector<Flight> listFlight = GetFlight(listTicket);
    SearchForStrAndDesAirport::close();
    if(listFlight.size()==0 )
        QMessageBox::critical(this,  "Lỗi","Khong co chuyen bay phu hopc");

    SelectFlight *option = new SelectFlight(listFlight);
     option->show();
}

