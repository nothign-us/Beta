#ifndef CLIENTMENU_H
#define CLIENTMENU_H

#include <QDialog>
#include <QMessageBox>
#include <QLabel>
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
    explicit ClientMenu(std::string username, Account* currentAcc , QWidget *parent = nullptr);
    ~ClientMenu();

private slots:
    void on_bookTicketButton_clicked();

    void on_signoutButton_clicked();

    void on_printTicketButton_clicked();

    void on_purchaseButton_clicked();

private:
    Ui::ClientMenu *ui;
    vector<Ticket*> ListTicket;
    Account* CurrentAccount;
};

#endif // CLIENTMENU_H
