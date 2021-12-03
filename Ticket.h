#include "Flight.h"

class Ticket {
private:
    Flight _flight;
    Seat _seat;

public:
    int _price;
    bool _isBooked;
public:
    void Book();
};