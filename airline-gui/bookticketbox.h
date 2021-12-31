#ifndef BOOKTICKETBOX_H
#define BOOKTICKETBOX_H

#include <QDialog>
#include <QDebug>
#include <Ticket.h>
#include <vector>
#include <Manager.h>
#include <makeMenu.h>
#include "ChooseFlight.h"
#include <QMessageBox>

namespace Ui {
class BookTicketBox;
}

class BookTicketBox : public QDialog
{
    Q_OBJECT

public:
    explicit BookTicketBox(QWidget *parent = nullptr);
    ~BookTicketBox();


private slots:
    void on_GetList_clicked();

private:
    Ui::BookTicketBox *ui;
    Ticket* tmpTicket;
    //::vector<std::string> listAirport;
};

#endif // BOOKTICKETBOX_H
