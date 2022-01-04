#include "Seat.h"

using namespace std;

Seat::Seat()
{
    _row = 0;
    _column = 'A';
    _isBooked = 0;
}

Seat::Seat(int row, char col)
{
    _row = row;
    _column = col;
    _isBooked = 0;
}

Seat::Seat(int row, char col, bool boss)
{
    _row = row;
    _column = col;
    _isBoss = boss;
    _isBooked = 0;
}

Seat::Seat(const Seat &s) {
    _row = s._row;
    _column = s._column;
    _isBoss = s._isBoss;
    _isBooked = s._isBooked;    
}
void Seat::set(int row, char col, bool isBoss)
{
    _row = row;
    _column = col;
    _isBoss = isBoss;
}
int Seat::GetRow()
{
    return _row;
}

char Seat::GetCol()
{
    return _column;
}

void Seat::SetBooked()
{
    _isBooked = 1;
}

void Seat::SetFree() {
    _isBooked = 0;
}

bool Seat::isBoss() {
    return _isBoss;
}

vector<Seat> Seat::InitListSeat(int row, char col, bool boss)
{
    vector<Seat> res;
    for (int i = 1; i <= row; i++)    {
        for (char j = 'A'; j <= col; j++)    {
            res.push_back(Seat(i, j, boss));
        }
    }
    return res;
}

bool Seat::isBooked()
{
    return _isBooked;
}

bool Seat::operator== (const Seat &s) {
    return _row == s._row && _column == s._column;
}
Seat& Seat::operator=(const Seat &src)
{
     this->_column = src._column;
     this->_row = src._row;
     this->_isBooked = src._isBooked;
     this->_isBoss = src._isBoss;
     return *this;
}
ostream& operator<<(ostream &os, const Seat src)
{
    //os << "Seat: ";
    os << src._row << "-" << src._column;
    return os;
}
