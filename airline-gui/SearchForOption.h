#ifndef SEARCHFOROPTION_H
#define SEARCHFOROPTION_H

#include <QDialog>
#include <QMessageBox>
#include <Ticket.h>
#include "SearchForStrAndDepartureDate.h"
#include "SearchForStrAndDesAirport.h"
#include <Manager.h>
namespace Ui {
class SearchForOption;
}

class SearchForOption : public QDialog
{
    Q_OBJECT

public:
    explicit SearchForOption(Account* currentAcc, QWidget *parent = nullptr);
    vector<Ticket*> getBookedTicket();
    ~SearchForOption();

private slots:
    void on_confirm_clicked();

private:
    Ui::SearchForOption *ui;
    vector<Ticket*> bookedTicket;
    Account* currentAccount;
};

#endif // SEARCHFOROPTION_H
