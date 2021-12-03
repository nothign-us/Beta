#include "Flight.h"

class Ticket {
private:
    Flight _flight;

public:
    int _price;
    bool _isBooked;
public:
    void Book();
};