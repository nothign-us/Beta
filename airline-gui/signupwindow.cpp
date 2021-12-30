#include "signupwindow.h"
#include "ui_signupwindow.h"

SignUpWindow::SignUpWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUpWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Đăng kí tài khoản mới");
}

SignUpWindow::~SignUpWindow()
{
    delete ui;
}
