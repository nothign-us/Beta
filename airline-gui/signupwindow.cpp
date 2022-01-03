#include "signupwindow.h"
#include "ui_signupwindow.h"

// Phương thức khởi tạo đối tượng màn hình đăng kí tài khoản
//
// Tham số:
// __parent: kiểu QWidget*, con trỏ đến đối tượng cha, mặc định là nullptr
SignUpWindow::SignUpWindow(QWidget *parent) : QDialog(parent), ui(new Ui::SignUpWindow) {
    ui->setupUi(this);
    this->setWindowTitle("Đăng kí tài khoản mới");
}

//---------------------------------------------------------------------------------------

// Phương thức hủy đổi tượng màn hình đăng kí tài khoản
SignUpWindow::~SignUpWindow() {
    delete ui;
}

//----------------------------------------------------------------------------------------

// Phương thức xử lí khi nút "Xác nhận" trên màn hình đăng kí tài khoản được nhấn.
void SignUpWindow::on_confirmButton_clicked() {
    // Lấy thông tin đã nhập trên màn hình đăng kí tài khoản
    string username = ui->usernameInput->text().toStdString();
    string password = ui->passwordInput->text().toStdString();
    string fullname = ui->fullnameInput->text().toStdString();
    string birthDayStr = ui->birthDayEditor->text().toStdString();
    Date birthDay = Date::Parse(birthDayStr);
    string id = ui->IDInput->text().toStdString();
    string nation = ui->nationInput->text().toStdString();
    string city = ui->provinceInput->text().toStdString();
    string district = ui->districtInput->text().toStdString();
    string town = ui->townInput->text().toStdString();
    string street = ui->streetInput->text().toStdString();
    bool sex = ui->sexChoice->currentText().toStdString() == "Nam";
    string phoneNumber = ui->phoneNumberInput->text().toStdString();
    string email = ui->emailInput->text().toStdString();

    // Kiểm tra nếu có trường thông tin nào chưa được nhập thì yêu cầu nhập
    if (username == "" || password == "" || fullname == "" || birthDayStr == "" ||
        id == "" || nation == "" || city == "" || district == "" || town == "" ||
        street == "" || phoneNumber == "" || email == "") {
        QMessageBox::critical(this, "Chưa nhập đầy đủ thông tin", "Vui lòng cung cấp đầy đủ thông tin");
    }

    // Nếu đã nhập đầy đủ thông tin
    else {
        // Kiểm tra xem tên đăng nhập đã được sử dụng hay chưa
        // nếu chưa thì thông báo đổi tên đăng nhập khác
        bool canSignUp = Account::SignUpAccount(username, password);
        if (canSignUp == false) {
            QMessageBox::critical(this, "Đăng kí tài khoản không thành công", "Có thể tên đăng nhập này đã được sử dụng");
        }
        // nếu tên đăng nhập chưa được sử dụng, tiến hành tạo tài khoản mới
        else {
            Address userAddress(nation, city, district, town, street);
            Client userInfo(fullname, birthDay, id, userAddress, sex, phoneNumber, email);
            Account* newAccount = new ClientAccount(username, password, userInfo);
            Manager::addNewAccount(newAccount);
            QMessageBox::information(this, "Đăng kí thành công", "Đã đăng kí tài khoản thành công");
            this->close();
        }
    }
}
