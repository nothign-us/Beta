#pragma once
#include <string>
#include <iostream>
using namespace std;
class Address
{
private:
    string _nation;
    string _province;
    string _district;
    string _town;
    string _street;

public:
    Address();
    Address(const Address& srcAdd);
    
    friend istream& operator>>(istream& is, Address& src);
    friend ostream& operator<<(ostream& os,const Address src);
    ~Address();
};

