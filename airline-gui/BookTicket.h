#ifndef BOOKTICKET_H
#define BOOKTICKET_H

#include <QMainWindow>
#include <Ticket.h>
#include <vector>
#include <Manager.h>
#include <makeMenu.h>
#include "ChooseFlight.h"
#include <QMessageBox>

namespace Ui {
class BookTicket;
}

class BookTicket : public QMainWindow
{
    Q_OBJECT

public:
    explicit BookTicket(QWidget *parent = nullptr);
    ~BookTicket();

private slots:
    void on_GetList_clicked();

private:
    Ui::BookTicket *ui;
};

#endif // BOOKTICKET_H
