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

string Client::getName() const {
    return _name;
}

string Client::getPhoneNumber() const {
    return _phoneNumber;
}

string Client::getEmail() const {
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
    out << "Tên :\t\t\t" << src._name << endl;
    out << "Ngày sinh:\t\t" << src._birth << endl;
    out << "CMND:\t\t\t" << src._ID << endl;
    out << "Địa chỉ:\t\t\t" << src._address << endl;
    out << "Giới tính:\t\t\t" << ((src._sex) ? "Nam" : "Nữ") << endl;
    out << "Số điện thoại:\t\t" << src._phoneNumber << endl;
    out << "Email:\t\t\t" << src._email;
    return out;
}
