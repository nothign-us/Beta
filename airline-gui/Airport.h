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
    Airport(/* args */);
    Airport(const Address srcAdd, string srcName);
    Airport(string srcName);
    Airport(QString srcName)
    {
        QByteArray ba = srcName.toLatin1();
         char* str = ba.data();
        _nameAirport = ((str));
    }
    bool operator==(const Airport&);
    bool operator<(const Airport&);
    //~Airport();
    void setNameAirport(const string src);
    string getNameAirport() const;

    // khởi tạo danh sách các sân bay theo 
    // định dạng map[<Tỉnh>] = <Tên sân bay>;
    static map<string, string> loadAirportList(string dataFileName);
};



#endif
