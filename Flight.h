#include "Airport.h"
#include "Time.h"
#include "Date.h"
#include <vector>
#include "Seat.h"

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
    // Mấy hàm nhập xuất này viết tạm để nhập chuyến bay thôi, khi cập nhật đủ lịch trình của các sân  
    // bay tui viết lại sau.
    friend istream &operator>>(istream &is, Flight &src)
    {
        fstream file;
        file.open("VietNamAirport.txt");
        vector<string> line;
        int i=0;
        while (!file.eof())
        {
            string tmp ="";
            getline(file, tmp);
            line.push_back(tmp);
            cout << line[i++] << endl;
        }
        int str,end;
        cout << "Choose the star Airport: "; cin >> str;
        cout << "Choose the destination Airport: "; cin >> end;
        src._start.setNameAirport(line[str]);
        src._destination.setNameAirport(line[end]);
        file.close();
        return is;
    }
    friend ostream &operator<<(ostream &os,Flight src)
    {
        os << src._start.getNameAirport() << " --- " << src._destination.getNameAirport() <<endl;
        return os;
    }
};