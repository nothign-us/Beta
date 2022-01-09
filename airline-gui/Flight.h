#pragma once

#include "Airport.h"
#include "MyTime.h"
#include "Date.h"
#include "Seat.h"

#include <vector>
#include <iomanip>
#include <sstream>

class Flight
{
private:
    Airport _start;
    Airport _destination;
    Time _departingAt;
    Time _arrivingAt;
    Date _departure;
    Date _arrival;
    vector<Seat> _listOfSeat;

public:
    // Mấy hàm nhập xuất này viết tạm để nhập chuyến bay thôi,
    // khi cập nhật đủ lịch trình của các sân bay
    // tui viết lại sau.
    Flight();
    Flight(string strA, string des);
    Flight(Airport strA, Airport des, Date departure, Date arrival, Time strT, Time endT);
    
    Airport GetStartAiport() const;
    Airport GetDestinateAiport() const;
    Date GetArrivalDate() const;
    Date GetDepartureDate() const;
    Time GetDepartTime() const;
    Time GetArrivalTime() const;
    string toString();

    friend istream &operator>>(istream &is, Flight &src);
    friend ostream &operator<<(ostream &os, const Flight& src);
    bool operator==(const Flight&);
    bool operator<(const Flight&);
};
