#include "Airport.h"
#include "Time.h"
#include "Date.h"
#include <vector>
#include "Seat.h"

class Flight {
private:
    Airport _start;
    Airport _destination;
    Time _departingAt;
    Time _arrivingAt;
    Date _departure;
    Date _arrival;
    vector<Seat> _listOfSeat;
public:
    
};