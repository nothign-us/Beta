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

void SignUpWindow::on_confirmButton_clicked()
{
    /*
    string username = ui->usernameInput->text().toStdString();
    string password = ui->passwordInput->text().toStdString();
    string name = = ui->fullnameInput->text().toStdString();
    string dateOfBirth =  ui->birthdayEditor->text().toStdString();
    string ID =  ui->IDInput->text().toStdString();
    string nation =  ui->nationInput->text().toStdString();
    string province = ui->provinceInput->text().toStdString();
    string district= ui->districtInput->text().toStdString();
    string town= ui->townInput->text().toStdString();
    string street= ui->streetInput->text().toStdString();
    string sex= ui->sexChoice->text().toStdString();
    string phoneNumber= ui->phoneNumberInput->text().toStdString();
    string email= ui->emailInput->text().toStdString();
    */
}
