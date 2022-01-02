#include "mainwindow.h"
#include "clientmenu.h"
#include "signupwindow.h"
#include "adminmenu.h"
#include "ui_mainwindow.h"
#include "Account.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    this->setWindowTitle("Phần mềm đặt vé máy bay");
}

MainWindow::~MainWindow() {
    delete ui;
}


void MainWindow::on_signinButton_clicked()
{
    string username = ui->lineEdit_username->text().toStdString();
    string password = ui->lineEdit_password->text().toStdString();
<<<<<<< HEAD
    if (Account::SignIn(username, password)==0) {
=======
    if (Account::SignIn(username, password) == false) {
>>>>>>> 308efccdd06a0e412559ba3ebfc1f26761801c77
        QMessageBox::critical(this, "Đăng nhập thất bại", "Vui lòng kiểm tra lại tên đăng nhập và mật khẩu");
    }
    else {
        Account *currentAcc = Manager::getAccount(username);
        // Process if sign in successfully
<<<<<<< HEAD
        ClientMenu clientMenu(username, currentAcc);
        close();
        clientMenu.exec();
=======
        Account* signedInAccount = Manager::findAccount(username, password);
        if (signedInAccount->_isAdmin) {
            AdminMenu adminMenu(username);
            this->close();
            adminMenu.exec();
        }
        else {
            ClientMenu clientMenu(username);
            close();
            clientMenu.exec();
        }
>>>>>>> 308efccdd06a0e412559ba3ebfc1f26761801c77
    }
}


void MainWindow::on_signupButton_clicked()
{
    string password = ui->lineEdit_password->text().toStdString();
    SignUpWindow signupWindow;
    signupWindow.exec();
}

