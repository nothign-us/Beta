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

void SignUpWindow::on_confirmButton_clicked() {
    string username = ui->usernameInput->text().toStdString();
    string password = ui->passwordInput->text().toStdString();
    string fullname = ui->fullnameInput->text().toStdString();
    string birthDayStr = ui->birthDayEditor->text().toStdString();
    Date birthDay = Date::Parse(birthDayStr);
    string id = ui->IDInput->text().toStdString();
    string nation = ui->nationInput->text().toStdString();
    string city = ui->provinceInput->text().toStdString();
    string district = ui->provinceInput->text().toStdString();
    string town = ui->townInput->text().toStdString();
    string street = ui->streetInput->text().toStdString();
    bool sex = ui->sexChoice->currentText().toStdString() == "Nam";
    string phoneNumber = ui->phoneNumberInput->text().toStdString();
    string email = ui->emailInput->text().toStdString();

    if (username == "" || password == "" || fullname == "" || birthDayStr == "" ||
        id == "" || nation == "" || city == "" || district == "" || town == "" ||
        street == "" || phoneNumber == "" || email == "") {
        QMessageBox::critical(this, "Chưa nhập đầy đủ thông tin", "Vui lòng cung cấp đầy đủ thông tin");
    }
    else {
        bool canSignUp = Account::SignUpAccount(username, password);
        if (canSignUp == false) {
            QMessageBox::critical(this, "Đăng kí tài khoản không thành công", "Có thể tên đăng nhập này đã được sử dụng");
        }
        else {
            Address userAddress(nation, city, district, town, street);
            Client user(fullname, birthDay, id, userAddress, sex, phoneNumber, email);
            Account* newAccount = new ClientAccount(username, password, user);
            Manager::addNewAccount(newAccount);
            if (QMessageBox::information(this, "Đăng kí thành công", "Đã đăng kí tài khoản thành công") == QMessageBox::Ok)
                this->close();
            else
                this->close();
        }
    }
}
