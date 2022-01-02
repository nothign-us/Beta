#ifndef SEARCHFORSTRANDDEPARTUREDATE_H
#define SEARCHFORSTRANDDEPARTUREDATE_H

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
class SearchForStrAndDepartureDate;
}

class SearchForStrAndDepartureDate : public QDialog
{
    Q_OBJECT

public:
    explicit SearchForStrAndDepartureDate(Account* currentAccount, QWidget *parent = nullptr);
    Ticket* getBookedTicket();
    ~SearchForStrAndDepartureDate();

private slots:
    void on_confirm_clicked();

private:
    Account* CurrentAccount;
    Ui::SearchForStrAndDepartureDate *ui;
    Ticket* bookedTicket;
};

#endif // SEARCHFORSTRANDDEPARTUREDATE_H
