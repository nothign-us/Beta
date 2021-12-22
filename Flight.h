#include "Airport.h"
#include "Time.h"
#include "Date.h"
#include <vector>
#include "Seat.h"
#include <iomanip>

class Flight
{
    // private:
public:
    Airport _start;
    Airport _destination;
    Time _departingAt;
    Time _arrivingAt;
    Date _departure;
    Date _arrival;
    // vector<Seat> _listOfSeat;

public:
    // Mấy hàm nhập xuất này viết tạm để nhập chuyến bay thôi, khi cập nhật đủ lịch trình của các sân
    // bay tui viết lại sau.
    Flight();
    string GetStartAiport() const;
    string GetDestinateAiport() const;
    Date GetDate() const;
    Time GetDepartTime() const;
    Time GetArrivalTime() const;
    Flight(Airport strA, Airport des, Time str, Time end, Date departure, Date arrival);
    friend istream &operator>>(istream &is, Flight &src);
    friend ostream &operator<<(ostream &os, Flight src);
};