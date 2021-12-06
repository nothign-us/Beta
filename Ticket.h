#include "Flight.h"
#include "Client.h"

class Ticket {
private:
    Flight _flight;
    Client _client;
    Seat _seat;

public:
    int _price;
    bool _isBooked;
    friend istream& operator>>(istream& is, Ticket& src);
    friend ostream& operator<<(ostream& os,const Ticket& src);
public:
    void Book();
};