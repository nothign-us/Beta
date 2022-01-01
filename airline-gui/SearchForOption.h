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
    explicit SearchForOption(QWidget *parent = nullptr);
    Ticket* getBookedTicket();
    ~SearchForOption();

private slots:
    void on_confirm_clicked();

private:
    Ui::SearchForOption *ui;
    Ticket* bookedTicket;
};

#endif // SEARCHFOROPTION_H
