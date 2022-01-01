#include "Client.h"

using namespace std;

Client::Client(string name, Date birthDay, string id, Address address, int sex, string phone, string email) {
    _name = name;
    _birth = birthDay;
    _ID = id;
    _address = address;
    _sex = sex;
    _phoneNumber = phone;
    _email = email;
}

string Client::getName() {
    return _name;
}

string Client::getPhoneNumber() {
    return _phoneNumber;
}

string Client::getEmail() {
    return _email;
}

istream &operator>>(istream &inp, Client &src)
{
    cin.ignore();
    cout << "NAME: ";
    getline(inp, src._name);
    cout << "BIRTH: " << endl;
    inp >> src._birth;
    cout << "ID: ";
    inp >> src._ID;
    cout << "ADDRESS: " << endl;
    inp >> src._address;
    cout << "SEX (0: woman | 1: man): ";
    inp >> src._sex;
    cout << "PHONE NUMBER: ";
    inp >> src._phoneNumber;
    cout << "GMAIL: ";
    inp >> src._email;
    return inp;
}

ostream& operator<<(ostream &out, const Client &src)
{
    out << "NAME: " << src._name << endl;
    out << "BIRTH: " << src._birth << endl;
    out << "ID: " << src._ID << endl;
    out << "ADDRESS: " << src._address << endl;
    out << "SEX (0: woman | 1: man)" << src._sex << endl;
    out << "PHONE NUMBER: " << src._phoneNumber << endl;
    out << "GMAIL: " << src._email << endl;
    return out;
}
