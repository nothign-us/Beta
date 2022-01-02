#ifndef ADMINMENU_H
#define ADMINMENU_H

#include <QDialog>

namespace Ui {
class AdminMenu;
}

class AdminMenu : public QDialog
{
    Q_OBJECT

public:
    explicit AdminMenu(std::string username, QWidget *parent = nullptr);
    ~AdminMenu();

private:
    Ui::AdminMenu *ui;
};

#endif // ADMINMENU_H
