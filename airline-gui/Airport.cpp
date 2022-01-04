#include "Airport.h"

Airport::Airport(/* args */)
{
    _nameAirport = "";
}
Airport::Airport(const Address srcAdd, string srcName)
{
    // Address cpyAdd(srcAdd);
    _address = srcAdd;
    _nameAirport = srcName;
}
// Airport::~Airport()
// {
//     ;
// }
Airport::Airport(string srcName)
{
    _nameAirport = srcName;
}

bool Airport::operator==(const Airport &a){
    return _nameAirport == a._nameAirport;
}

bool Airport::operator<(const Airport &a) {
    return _nameAirport < a._nameAirport;
}

void Airport::setNameAirport(const string src)
{
    _nameAirport = src;
}

string Airport::getNameAirport() const
{
    return _nameAirport;
}

// khởi tạo danh sách các sân bay theo định dạng 
// map[<Tỉnh>] = <Tên sân bay>;
map<string, string> Airport::loadAirportList(string dataFileName)
{
    fstream getData;
    map<string, string> listAirport;
    // open airport information file
    getData.open(dataFileName);
    //
    string airportName = "";
    string airportLocation = "";
    string line = "";
    string *p;
    //
    while (!getData.eof())
    {
        // trỏ p tới địa chỉ của airport name
        p = &airportName;
        getline(getData, line);
        for (int i = 0; i < int(line.length()); i++)
        {
            if (line[i] != '|')
            {
                *p += line[i];
            }
            else
            {
                // sau khi tìm xong tên sân bay, 
                // trỏ p tới airport location để tìm tỉnh của sân bay đó
                p = &airportLocation;
            }
        }
        //
        listAirport[airportLocation] = airportName;
        airportName = "";
        airportLocation = "";
    }
    getData.close();

    return listAirport;
}
