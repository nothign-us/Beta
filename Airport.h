#pragma once
#include "Address.h"
#include <map>
#include <string>
#include <fstream>

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
    //~Airport();
    void setNameAirport(const string src);
    string getNameAirport() const;

    //khởi tạo danh sách các sân bay theo định dạng map[<Tỉnh>] = <Tên sân bay>;
    static map<string, string> loadAirportList(string dataFileName);
};


