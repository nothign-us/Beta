#include "SelectFlight.h"
#include "Client.h"
#include "ui_SelectFlight.h"

SelectFlight::SelectFlight(vector<Flight> ListFlight,bool Eco, vector<Ticket*> listTicket,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelectFlight)
{
    ui->setupUi(this);
    isEco = Eco;
    _listTicket = listTicket;
    _listFlight = ListFlight;

    setWindowTitle("Chọn chuyến bay");
    setFixedWidth(950);
    setFixedHeight(700);
    stringstream os;
    os << setw(25) << right << "Sân bay khởi hành"
         << setw(25) << right << "Sân bay hạ cánh"
         << setw(20) << right << "Ngày khởi hành"
         << setw(20) << right << "Giờ khởi hành"
         << setw(20) << right << "Giờ hạ cánh"
         << setw(20) << right << "Giá vé thường"
         << setw(20) << right << "Giá vé thương gia" << endl;
    QLabel *title = new QLabel (QString::fromStdString(os.str()), this);
    title->move(30,10);
    int index=1;
    //Add Radio button
    for(auto i:ListFlight)
    {
        string tmp = i.toString();
        QRadioButton* newBtn = new QRadioButton(QString::fromStdString(tmp),this);
        newBtn->move(10,15+20*(++index));
        listRadioBtn.push_back(newBtn);
    }
    if(!isEco)
    {
        for(int i=1;i<=4;i++)
        {
            ui->Row->addItem(QString::fromStdString(to_string(i)));
        }
    }
    else
    {
        for(int i=1;i<=12;i++)
        {
            ui->Row->addItem(QString::fromStdString(to_string(i)));
        }
    }
    ui->Col->addItem("A");ui->Col->addItem("B");ui->Col->addItem("C");ui->Col->addItem("D");
}
Flight SelectFlight::getSelectedFlight()
{
    return SelectedFl;
}

SelectFlight::~SelectFlight()
{
    delete ui;

    for(auto i:listRadioBtn)
        delete i;
}
Seat SelectFlight::selectSeat()
{
    return SelectedSeat;
}


void SelectFlight::on_pushButton_clicked()
{
    bool isAtLeast1Select = false;
    int index = 0;
    for(auto i:listRadioBtn){
        if(i->isChecked()){
            isAtLeast1Select = true;
            SelectedFl = _listFlight[index];
            break;
        }
        index++;
    }

    if(!isAtLeast1Select || (!ui->select->isChecked() && !ui->Disselect->isChecked())){
        QMessageBox::critical(this,  "Lỗi","Vui lòng đưa ra một lựa chọn trước khi tiếp tục");
    }
    else{ 
        //Seat SelectSeat(int isBoss, bool isSelect, vector<Ticket*> list, Flight _flight, int row, char col)
        try{
            int row = stoi(ui->Row->currentText().toStdString());
            char col = ui->Col->currentText().toStdString()[0];
            bool isSelect = ui->select->isChecked();
            SelectedSeat = *SelectSeat(!isEco,isSelect,_listTicket,SelectedFl,row,col);
            QMessageBox OK;OK.setText("Đã thêm vé vào giỏ hàng, vui lòng thanh toán");
            OK.exec();
            close();
        }
        catch (const char* mess)
        {
            QMessageBox::critical(this,  "Lỗi","Ghế đã được đặt");
        }
    }

}

