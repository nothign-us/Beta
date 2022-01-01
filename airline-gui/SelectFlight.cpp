#include "SelectFlight.h"
#include "ui_SelectFlight.h"

SelectFlight::SelectFlight(vector<Flight> ListFlight, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectFlight)
{
    ui->setupUi(this);
    setWindowTitle("GG");
    setFixedWidth(750);
    setFixedHeight(300);

    int index=0;
    for(auto i:ListFlight)
    {
        string tmp = i.toString();
        QRadioButton* newBtn = new QRadioButton(QString::fromStdString(tmp),this);
        newBtn->move(10,10+20*(++index));
        listRadioBtn.push_back(newBtn);
    }
    QPushButton* confirm = new QPushButton("Đặt vé",this);
    confirm->move(250,135);
    connect(confirm,&QPushButton::clicked, this, &SelectFlight::pushButtonHandler);

}

SelectFlight::~SelectFlight()
{
    delete ui;
    for(auto i:listRadioBtn)
        delete i;
    //delete grBox;
}
Flight SelectFlight::getSelectedFlight()
{
    return SelectedFlight;
}
void SelectFlight::pushButtonHandler()
{
    for(auto i:listRadioBtn)
        if(i->isChecked())
            SelectedFlight;
}


