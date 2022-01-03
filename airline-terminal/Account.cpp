#include "Account.h"
#include "Manager.h"

using namespace std;

Account::Account(string user, string pass) {
    _username = user;
    _password = pass;
}

// Kiểm tra và thêm tài khoản vào map tài khoản đã đăng kí
//
// Tham số:
// __username: kiểu std::string, là tên đăng nhập muốn kiểm tra
// __password: kiểu std::string, là mật khẩu muốn kiểm tra
//
// Giá trị trả về:
// trả về false nếu tên đăng nhập đã được sử dụng
// trả về true nếu đăng kí tài khoản mới thành công
bool Account::SignUpAccount(string username, string password) {
    if (_checkAccount.empty()) {
        _checkAccount.insert({username, password});
        return true;
    }

    if (_checkAccount.find(username) != _checkAccount.end())
        return false;

    _checkAccount.insert({username, password});
    return true;
}

bool Account::SignIn(string username, string password) {
    if (_checkAccount.empty())
        return false;
    return (_checkAccount[username] == password);
}

bool Account::operator==(const Account &src_acc) {
    return (_username == src_acc._username && _password == src_acc._password);
}

bool Account::operator<(const Account &src_acc) {
    return _username < src_acc._username || (_username == src_acc._username && _password < src_acc._password);
}

void Account::SetClient() {
    cin >> this->_owner;
}

ClientAccount::ClientAccount(std::string user, std::string pass): Account(user, pass) {
    Account::SetClient();
}

bool ClientAccount::Purchase(Ticket* &scr) {
    if (scr->_isBooked)
        return false;
            
    scr->Book(Account::_owner);
    _listBookedTickets.push_back(scr);
    AdminAccount::addTicket(scr);
    return true;
}

void ClientAccount::addTicket(Ticket* t) {
    _listBookedTickets.push_back(t);
}

void ClientAccount::printBookedTicket() {
    cout << "User " << getClient().getName() << endl;
    cout << "List ticket was booked: ";
    for (Ticket* cur: _listBookedTickets)
        cout << *cur << endl;
}

AdminAccount::AdminAccount(std::string user, std::string pass): Account(user, pass) {
    Account::SetClient();
}

void AdminAccount::addTicket(Ticket* scr) {
    bookedTickets.push_back(scr);
}

void AdminAccount::printAllBookedTickets() {
    cout << "List " << bookedTickets.size() << " tickets was booked:\n";
    for (Ticket* t: bookedTickets)
        cout << t << endl;
}