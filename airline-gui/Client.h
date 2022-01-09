#pragma once
#ifndef CLIENT_H
#define CLIENT_H

#include <typeinfo>
#include "Date.h"
#include "Address.h"

class Client {
protected:
    string _name;
    Date _birth;
    string _ID;
    Address _address;
    int _sex; // 0 for woman | 1 for man
    string _phoneNumber;
    string _email;
    
public:
    Client();
    Client(string name, Date birthDay, string id, Address address, int sex, string phone, string email);
public:
    string getName() const;
    string getPhoneNumber() const;
    string getEmail() const;
public:
    friend istream& operator>>(istream &is, Client &src);
    friend ostream& operator<<(ostream &os, const Client &src);
};

#endif
