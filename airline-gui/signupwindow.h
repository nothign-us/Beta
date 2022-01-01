#ifndef SIGNUPWINDOW_H
#define SIGNUPWINDOW_H

#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <string>
#include "Date.h"
#include "Account.h"
#include "Manager.h"
#include "Client.h"
#include "Address.h"
using namespace std;
namespace Ui {
class SignUpWindow;
}

class SignUpWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SignUpWindow(QWidget *parent = nullptr);
    ~SignUpWindow();

private slots:
    void on_confirmButton_clicked();

private:
    Ui::SignUpWindow *ui;
};

#endif // SIGNUPWINDOW_H
