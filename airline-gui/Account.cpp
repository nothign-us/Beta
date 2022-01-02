#include "Account.h"
#include "Manager.h"

using namespace std;

// Phương thức khởi tạo với tham số
//
// Tham số:
// __user: kiểu string, là tên đăng nhập khởi tạo
// __pass: kiểu tring, là mật khẩu khởi tạo
Account::Account(string user, string pass) {
    _username = user;
    _password = pass;
}

//------------------------------------------------------------------------------

// Kiểm tra và thêm tài khoản vào map tài khoản đã đăng kí Account::_checkAccount
//
// Tham số:
// __username: kiểu std::string, là tên đăng nhập muốn kiểm tra và đăng kí
// __password: kiểu std::string, là mật khẩu muốn kiểm tra và đăng kí
//
// Giá trị trả về:
// __trả về false nếu tên đăng nhập đã được sử dụng
// __trả về true nếu đăng kí tài khoản mới thành công, đồng thời
// thêm tài khoản vào Account::_checkAccount
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

//------------------------------------------------------------------------------

// Kiểm tra thông tin đăng nhập
//
// Tham số:
// __username: kiểu string, là tên đăng nhập cần kiểm tra
// __password: kiểu string, là mật khẩu cần kiểm tra
//
// Trả về:
// __trả về false nếu tên đăng nhập chưa tồn tại hoặc tên đăng nhập và mật khẩu không khớp
// __trả về true nếu tên đăng nhập đẫ tồn tại và khớp với mật khẩu
bool Account::SignIn(string username, string password) {
    if (_checkAccount.empty())
        return false;
    return (_checkAccount[username] == password);
}

//-----------------------------------------------------------------------------

// Nạp chồng toán tử so sánh bằng hai tài khoản
// Trả về true nếu cả username và password của hai tài khoản là giống nhau
bool Account::operator==(const Account &src_acc) {
    return (_username == src_acc._username && _password == src_acc._password);
}

//-----------------------------------------------------------------------------

// Nạp chồng toán tử so sánh nhỏ hơn giữa hai tài khoản
// So sánh username trước, sau đó đến so sánh password (so sánh chuỗi)
bool Account::operator<(const Account &src_acc) {
    return _username < src_acc._username || (_username == src_acc._username && _password < src_acc._password);
}

//-----------------------------------------------------------------------------

// Thay đổi thông tin chủ sở hữu tài khoản
//
// Tham số:
// __client: kiểu const Client&, chứa thông tin chủ tài khoản sau khi thay đổi
//
// Trả về: không có giá trị trả về
void Account::SetClient(const Client &client) {
    this->_owner = client;
}

//-----------------------------------------------------------------------------

// Phương thức khởi tạo tài khoản của người dùng cuối với tham số
//
// Tham số:
// __user: kiểu string, là tên đăng nhập khởi tạo
// __pass: kiểu string, là mật khẩu khởi tạo
// __clientInfo, kiểu Client, chứa thông tin chủ sở hữu tài khoản
ClientAccount::ClientAccount(std::string user, std::string pass, Client clientInfo): Account(user, pass) {
    Account::SetClient(clientInfo);
}

//-----------------------------------------------------------------------------

//
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
    //Account::SetClient();
}

void AdminAccount::addTicket(Ticket* scr) {
    bookedTickets.push_back(scr);
}

void AdminAccount::printAllBookedTickets() {
    cout << "List " << bookedTickets.size() << " tickets was booked:\n";
    for (Ticket* t: bookedTickets)
        cout << t << endl;
}
