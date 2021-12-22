#include "Ticket.h"

using namespace std;

Ticket::Ticket(Flight srcFl, Client srcCl, int price,Seat s)
{
    _flight = srcFl;
    _client = srcCl;
    _price = price;
    _seat = s;
}

void Ticket::Book()
{
    _isBooked = 1;
}

istream &operator>>(istream &is, Ticket &src)
{
    is >> src._client;
    is >> src._flight;
    src._price = 700000;
    return is;
}
ostream &operator<<(ostream &os, const Ticket &src)
{
    os << "----------------------------------------" << endl;
    os << src._client << endl;
    cout  << (src._flight).GetStartAiport() << " ==== " << src._flight.GetDestinateAiport() << "\t" << src._flight.GetDate() << "\t" << src._flight.GetDepartTime() << endl;
    os << src._seat <<endl;
    os << "Cost: " << src._price << endl;
    os << "----------------------------------------" << endl;
    return os;
}