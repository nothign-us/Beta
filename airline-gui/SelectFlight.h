#ifndef SELECTFLIGHT_H
#define SELECTFLIGHT_H

#include <QDialog>
#include <QRadioButton>
#include <QMessageBox>
#include "makeMenu.h"
#include <QPushButton>
#include "Flight.h"
#include <vector>
#include <QString>
#include "Manager.h"
#include <QLabel>
#include <sstream>
#include <Seat.h>
#include <QGroupBox>
namespace Ui {
class SelectFlight;
}

class SelectFlight : public QDialog
{
    Q_OBJECT

public:
    explicit SelectFlight(vector<Flight> ListFlight, bool Eco, vector<Ticket*> listTicket, QWidget *parent = nullptr);
    Flight getSelectedFlight();
    Seat selectSeat();
    bool isSelectSeat;
    ~SelectFlight();
private slots:
    void on_pushButton_clicked();

private:
    Ui::SelectFlight *ui;
    bool isEco;
    Flight SelectedFl;
    Seat SelectedSeat;
    vector<Flight> _listFlight;
    vector<Ticket*> _listTicket;

    vector<QRadioButton*> listRadioBtn;
};

#endif // SELECTFLIGHT_H
