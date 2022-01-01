#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <map>
#include "Ticket.h"
#include "Client.h"
#include <vector>

class Account {
protected:
    std::string _username;
    std::string _password;
    static std::map<std::string, std::string> _checkAccount;

public:
    Client _owner;
    Account(std::string user, std::string pass);
    static bool SignUpAccount(std::string username, std::string password);
    static bool SignIn(std::string username, std::string password);
    bool operator==(const Account &src_acc);
    bool operator<(const Account &src_acc);
    // HAVE TO DELETE --- BUG
    Client getClient() {
        return _owner;
    }
    void SetClient(const Client& client);
    virtual void printBookedTicket() {}
};

class ClientAccount: public Account {
private:
    std::vector<Ticket*> _listBookedTickets;
public:
    ClientAccount(std::string user, std::string pass, Client clientInfo);
    bool Purchase(Ticket*&);
    void addTicket(Ticket* t);
    void printBookedTicket();
};

class AdminAccount: public Account {
private:
    static std::vector<Ticket*> bookedTickets;
public:    
    static void addTicket(Ticket*);
    AdminAccount(std::string user, std::string pass);
    void printAllBookedTickets();
};

#endif
