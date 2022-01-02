#ifndef SEARCHFORSTRANDDESAIRPORT_H
#define SEARCHFORSTRANDDESAIRPORT_H

#include <QDialog>
#include <QWidget>
#include "Ticket.h"
#include "Manager.h"
#include <QString>
#include <QMessageBox>
#include "makeMenu.h"
#include <QRadioButton>
#include "SelectFlight.h"

namespace Ui {
class SearchForStrAndDesAirport;
}

class SearchForStrAndDesAirport : public QDialog
{
    Q_OBJECT

public:
    explicit SearchForStrAndDesAirport(Account* currentAcc, QWidget *parent = nullptr);
    Ticket* getBookedTicket();
    ~SearchForStrAndDesAirport();

private slots:
    void on_StrAirport_currentIndexChanged(int index);
    void on_Confirm_clicked();

private:
    Ui::SearchForStrAndDesAirport *ui;
    Ticket* bookedTicket;
    Account* CurrentAccount;
};

#endif // SEARCHFORSTRANDDESAIRPORT_H
