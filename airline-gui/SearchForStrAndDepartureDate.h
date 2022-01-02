#ifndef SEARCHFORSTRANDDEPARTUREDATE_H
#define SEARCHFORSTRANDDEPARTUREDATE_H

#include <QDialog>
#include <Ticket.h>
#include <Manager.h>
namespace Ui {
class SearchForStrAndDepartureDate;
}

class SearchForStrAndDepartureDate : public QDialog
{
    Q_OBJECT

public:
    explicit SearchForStrAndDepartureDate(QWidget *parent = nullptr);
    Ticket* getBookedTicket();
    ~SearchForStrAndDepartureDate();

private:
    Ui::SearchForStrAndDepartureDate *ui;
    Ticket* bookedTicket;
};

#endif // SEARCHFORSTRANDDEPARTUREDATE_H
