#include "Flight.h"
#include "Manager.h"

Flight::Flight()
{
    ;
}

Flight::Flight(Airport strA, Airport des, Date departure, Date arrival, Time strT, Time endT)
{
    _start = strA;
    _destination = des;
    _departingAt = strT;
    _arrivingAt = endT;
    _departure = departure;
    _arrival = arrival;
}

Flight::Flight(string strA, string des) {
    _start = Airport(strA);
    _destination = Airport(des);
}

bool Flight::operator==(const Flight& f) {
    return _start == f._start
        && _destination == f._destination;
}

bool Flight::operator<(const Flight& f) {
    return _start < f._start
        || (_start == f._start && _destination < f._destination)
        || (_destination == f._destination && _departure < f._departure)
        || (_departure == f._departure && _departingAt < f._departingAt);
}
Airport Flight::GetStartAiport() const {
    return _start;
}

Airport Flight::GetDestinateAiport() const {
    return _destination;
}

Date Flight::GetArrivalDate() const {
    return _arrival;
}

Date Flight::GetDepartureDate() const {
    return _departure;
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
    vector<string> line = Manager::listAirport;
    int str, end;
    cout << "Choose the start Airport: ";
    cin >> str;
    cout << "Choose the destination Airport: ";
    cin >> end;
    src._start.setNameAirport(line[str]);
    src._destination.setNameAirport(line[end]);
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

string Flight::toString()
{
    stringstream os;
    os << this->_start.getNameAirport()
       << setw(20) << right << this->_destination.getNameAirport()
       << setw(20) << right << this->_departure
       << setw(20) << right << this->_departingAt
       << setw(20)  << right << this->_arrivingAt
       << setw(20)  << right << 399000
       << setw(20)  << right << 1299000 << endl;
    return os.str();
}

