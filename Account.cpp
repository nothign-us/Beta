#include "Account.h"

using namespace std;

bool Account::SignUpAccount(string username, string password) {
    if (_storeAccount.find(username) != _storeAccount.end())
        return false;

    _username = username;
    _password = password;
    _storeAccount[username] = password;
    return true;
}

bool Account::SignIn(string username, string password) {
    return (_storeAccount[username] == password);
}

bool EmployeeAccount::Sell(Ticket scr_ticket) {
    if (scr_ticket._isBooked == 1)
        return false;

    scr_ticket.Book();
    _totalProfit += scr_ticket._price;
    return true;
}