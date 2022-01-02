#ifndef CLIENTMENU_H
#define CLIENTMENU_H

#include <QDialog>
#include <QMessageBox>
#include"SearchForOption.h"
#include"Manager.h"
#include<vector>
using namespace std;

namespace Ui {
class ClientMenu;
}

class ClientMenu : public QDialog
{
    Q_OBJECT

public:
    explicit ClientMenu(std::string username, QWidget *parent = nullptr);
    ~ClientMenu();

private slots:
    void on_bookTicketButton_clicked();

    void on_signoutButton_clicked();

    void on_printTicketButton_clicked();

private:
    Ui::ClientMenu *ui;
    vector<Ticket*> ListTicket;
};

#endif // CLIENTMENU_H
