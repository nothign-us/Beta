#ifndef CHOOSEFLIGHT_H
#define CHOOSEFLIGHT_H

#include <QDialog>
#include <Flight.h>
#include <QRadioButton>
namespace Ui {
class ChooseFlight;
}

class ChooseFlight : public QDialog
{
    Q_OBJECT

public:
    explicit ChooseFlight(vector<Flight> srcListFlight, QWidget *parent = nullptr);
    ~ChooseFlight();

private:
    Ui::ChooseFlight *ui;
    vector<Flight> _listFlight;
};

#endif // CHOOSEFLIGHT_H
