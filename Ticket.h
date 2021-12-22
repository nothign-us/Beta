#include "Flight.h"
#include "Client.h"

class Ticket
{
private:
    Flight _flight;
    Client _client;
public:
    Ticket();
    Ticket(Flight, Client, int,Seat);
    int _price;
    Seat _seat;
    bool _isBooked;
    friend istream &operator>>(istream &is, Ticket &src);
    friend ostream &operator<<(ostream &os, const Ticket &src);

public:
    void Book();
};
class SkybossTicket
{
    const int PRICE = 1299000;
};
class EcoTicket
{
    const int PRICE = 399000;
};