#include "SelectFlight.h"
#include "ui_SelectFlight.h"

SelectFlight::SelectFlight(vector<Flight> ListFlight,bool Eco, vector<Ticket*> listTicket,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelectFlight)
{
    ui->setupUi(this);
    isEco = Eco;
    _listTicket = listTicket;
    _listFlight = ListFlight;

    setWindowTitle("GG");
    setFixedWidth(950);
    setFixedHeight(700);
    stringstream os;
    os << setw(25) << right << "StartAirport"
         << setw(25) << right << "DestinationAirport"
         << setw(20) << right << "Depart Day"
         << setw(20) << right << "Depart"
         << setw(20) << right << "Arrival"
         << setw(20) << right << "Eco"
         << setw(20) << right << "Skyboss" << endl;
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
        SelectFlight g(_listFlight,isEco, _listTicket);
        g.exec();
    }
    else{
        static vector<Seat> availableSeats = Manager::listEmptySeat(_listTicket, !isEco, SelectedFl);

        if(ui->Disselect->isChecked())
        {
            isSelectSeat = false;
            int randRow=1;char randCol='A';
            bool isLoop = true;
            while(isLoop){
                for(auto i:availableSeats)
                {
                    if(i.GetCol()==randCol && i.GetRow() == randRow)
                    {
                        if(!i.isBooked()){
                            isLoop = false;
                            SelectedSeat.set(i.GetRow(),i.GetCol(),!isEco);
                            break;
                        }
                    }
                }
            }
        }
        else{
            isSelectSeat = true;
            SelectedSeat.set(stoi(ui->Row->currentText().toStdString()),ui->Col->currentText().toStdString()[0],!isEco);
         }
         QMessageBox OK;OK.setText("Đã thêm vé vào giỏ hàng, vui lòng thanh toán");
         OK.exec();
    }
     close();
}

