#include "Flight.h"

Flight::Flight()
{
    ;
}
Flight::Flight(Airport strA, Airport des, Time str, Time end, Date departure, Date arrival)
{
    _start = strA;
    _destination = des;
    _departingAt = str;
    _arrivingAt = end;
    _departure = departure;
    _arrival = arrival;
}
string Flight::GetStartAiport() const
{
    return _start.getNameAirport();
}
string Flight::GetDestinateAiport() const
{
    return _destination.getNameAirport();
}
Date Flight::GetDate() const
{
    return _arrival;
}
Time Flight::GetDepartTime() const
{
    return _departingAt;
}
Time Flight::GetArrivalTime() const
{
    return _arrivingAt;
}

istream &operator>>(istream &is, Flight &src)
{
    fstream file;
    file.open("VietNamAirport.txt");
    vector<string> line;
    int i = 0;
    while (!file.eof())
    {
        string tmp = "";
        getline(file, tmp);
        line.push_back(tmp);
        cout << line[i++] << endl;
    }
    int str, end;
    cout << "Choose the star Airport: ";
    cin >> str;
    cout << "Choose the destination Airport: ";
    cin >> end;
    src._start.setNameAirport(line[str]);
    src._destination.setNameAirport(line[end]);
    file.close();
    return is;
}
ostream &operator<<(ostream &os, Flight src)
{

    os << src._start.getNameAirport()
       << setw(20) << right << src._destination.getNameAirport()
       << setw(20) << right << src._departure
       << setw(20) << right << src._departingAt
       << setw(20) << right << src._arrivingAt
       << setw(20) << right << 399000
       << setw(20) << right << 1299000 << endl;
    return os;
}