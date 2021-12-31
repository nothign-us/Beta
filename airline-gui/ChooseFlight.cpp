#include "ChooseFlight.h"
#include "ui_ChooseFlight.h"

ChooseFlight::ChooseFlight(vector<Flight> srcListFlight, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChooseFlight)
{
    ui->setupUi(this);
    _listFlight = srcListFlight;
    this->setWindowTitle("Select the flight");
    QRadioButton("gg");
}

ChooseFlight::~ChooseFlight()
{
    delete ui;
}
