#ifndef BOOKTICKETBOX_H
#define BOOKTICKETBOX_H

#include <QDialog>
#include <Manager.h>
#include <string>
#include <vector>
#include <QMessageBox>
#include <makeMenu.h>
#include "ChooseFlight.h"
using namespace std;
namespace Ui {
class BookTicketBox;
}

class BookTicketBox : public QDialog
{
    Q_OBJECT

public:
    explicit BookTicketBox(QWidget *parent = nullptr);
    Ticket* getTicket();
    ~BookTicketBox();

private slots:
    void on_GetList_clicked();

private:
    Ui::BookTicketBox *ui;
    Ticket* ticket;
};

#endif // BOOKTICKETBOX_H
