#pragma once
#ifndef AIRPORT_H
#define AIRPORT_H

// content of the header file

#include "Address.h"
#include <map>
#include <string>
#include <fstream>
#include <QString>
using namespace std;
class Airport
{
private:
    Address _address;
     string _nameAirport;
public:
    Airport();
    Airport(const Address srcAdd, string srcName);
    Airport(string srcName);
    Airport(QString srcName);
public:
    void setNameAirport(const string src);
    string getNameAirport() const;
public:
    // khởi tạo danh sách các sân bay theo 
    // định dạng map[<Tỉnh>] = <Tên sân bay>;
    static map<string, string> loadAirportList(string dataFileName);
public:
    bool operator==(const Airport&);
    bool operator<(const Airport&);
};



#endif
