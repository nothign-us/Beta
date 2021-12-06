#include "Ticket.h"

using namespace std;

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
    os << src._flight << endl;
    os << "Cost: " << src._price << endl;
    os << "----------------------------------------" << endl;
    return os;
}