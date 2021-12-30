#ifndef CLIENTMENU_H
#define CLIENTMENU_H

#include <QDialog>

namespace Ui {
class ClientMenu;
}

class ClientMenu : public QDialog
{
    Q_OBJECT

public:
    explicit ClientMenu(std::string username, QWidget *parent = nullptr);
    ~ClientMenu();

private:
    Ui::ClientMenu *ui;
};

#endif // CLIENTMENU_H
