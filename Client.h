#pragma once
#include "Date.h"
#include "Address.h"
class Client
{
public:
    string getName();
    string getPhoneNumber();
    string getEmail();
    void setName(string srcName);
    void setBirth(Date srcBirth);
    void setID(string srcID);
    void setAddress(Address srcAdd);
    void setSex(int srcSex);
    void setPhoneNumber(string srcPhoneNumber);
    void setEmail(string srcEmail);

    friend istream &operator>>(istream &is, Client &src)
    {
        cin.ignore();
        cout << "NAME: " << endl;
        getline(is, src._name);
        cout << "BIRTH: " << endl;
        cin >> src._birth;
        cout << "ID: " << endl;
        cin >> src._ID;
        cout << "ADDRESS: " << endl;
        cin >> src._address;
        cout << "SEX (0: woman | 1: man)" << endl;
        cin >> src._sex;
        cout << "PHONE NUMBER: " << endl;
        cin >> src._phoneNumber;
        cout << "GMAIL: " << endl;
        cin >> src._email;
        return is;
    }
    friend ostream& operator<<(ostream &os, const Client &src)
    {
        
        cout << "NAME: " << src._name << endl;
        cout << "BIRTH: " << src._birth << endl;
        cout << "ID: " << src._ID << endl;
        cout << "ADDRESS: " << src._address << endl;
        cout << "SEX (0: woman | 1: man)" << src._sex << endl;
        cout << "PHONE NUMBER: " << src._phoneNumber << endl;
        cout << "GMAIL: " << src._email << endl;
        return os;
    }

protected:
    string _name;
    Date _birth;
    string _ID;
    Address _address;
    int _sex; // 0 for woman | 1 for man
    string _phoneNumber;
    string _email;
};

class VipClient : public Client
{
public:
    // Ticket changTicket(Ticket);

private:
    long long _rewardPoint;
    double _extraDiscount;
    double _extraBaggage;
    int _vipRoom;
};