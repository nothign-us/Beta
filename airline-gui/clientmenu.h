#ifndef CLIENTMENU_H
#define CLIENTMENU_H

#include <QDialog>
#include"BookTicketBox.h"
#include"Manager.h"
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

private:
    Ui::ClientMenu *ui;
};

#endif // CLIENTMENU_H
