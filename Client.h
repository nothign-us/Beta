#pragma once
#ifndef CLIENT_H
#define CLIENT_H

#include <typeinfo>
#include "Date.h"
#include "Address.h"

class Client
{
protected:
    string _name;
    Date _birth;
    string _ID;
    Address _address;
    int _sex; // 0 for woman | 1 for man
    string _phoneNumber;
    string _email;
    
public:
    Client() {
        _name = "_";
    }
    string getName();
    string getPhoneNumber();
    string getEmail();
/*  void setName(string srcName);
    void setBirth(Date srcBirth);
    void setID(string srcID);
    void setAddress(Address srcAdd);
    void setSex(int srcSex);
    void setPhoneNumber(string srcPhoneNumber);
    void setEmail(string srcEmail); */
    virtual int getDiscount() const {
        return 0;
    }
    friend istream& operator>>(istream &is, Client &src);
    friend ostream& operator<<(ostream &os, const Client &src);
};

class VipClient : public Client
{
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