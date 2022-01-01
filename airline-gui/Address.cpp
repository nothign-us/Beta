#include "Address.h"

Address::Address()
{
    _nation = "";
    _province = "";
    _district = "";
    _town = "";
    _street = "";
}

Address::Address(string nation, string city, string district, string town, string street) {
    _nation = nation;
    _province = city;
    _district = district;
    _town = town;
    _street = street;
}

Address::Address(const Address &srcAdd)
{
    _nation = srcAdd._nation;
    _province = srcAdd._province;
    _district = srcAdd._district;
    _town = srcAdd._town;
    _street = srcAdd._street;
}
Address::~Address() { ; }

istream &operator>>(istream &is, Address &src)
{
    cin.ignore();
    cout << "Nation: ";
    getline(is, src._nation);
    cout << "Province: ";
    getline(is, src._province);
    cout << "District: ";
    getline(is, src._district);
    cout << "Town: ";
    getline(is, src._town);
    cout << "Street: ";
    getline(is, src._street);
    return is;
}
ostream &operator<<(ostream &os, const Address src)
{
    os << src._nation << ", " << src._province << ", " 
        << src._district << ", " << src._town << ", " 
        << src._street;
    return os;
}
