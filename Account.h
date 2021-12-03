#include <string>
#include <map>
#include "Ticket.h"
#include <vector>

class Account {
private:
    int _priority;
    std::string _username;
    std::string _password;
    static std::map<std::string, std::string> _storeAccount;

public:
    Account(int _priority);
    bool SignUpAccount(std::string username, std::string password);
    bool SignIn(std::string username, std::string password);
};

class ClientAccount: public Account {
private:     
    std::vector<Ticket> _listBookedTickets;
public:
    void Book(Ticket);
};

class EmployeeAccount: public Account {
private:
    int _totalProfit = 0;
public:
    bool Sell(Ticket);
};

class AdminAccount: public Account {

};