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
    string getName() const;
    string getPhoneNumber() const;
    string getEmail() const;
    virtual int getDiscount() const;
public:
    friend istream& operator>>(istream &is, Client &src);
    friend ostream& operator<<(ostream &os, const Client &src);
};

class VipClient : public Client {
private:
    long long _rewardPoint;
    const int _extraDiscount = 299000;
    const double _extraBaggage = 3.9; // đơn vị: kg
    int _vipRoom;

public:
    // Ticket changTicket(Ticket);
    int getDiscount() const{
        return _extraDiscount;
    }
};

#endif
