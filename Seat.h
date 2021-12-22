#include <vector>
#include<iostream>
using namespace std;
class Seat
{
private:
    int _row;
    char _column;
    bool _isBooked;

public:
    // Seat(/* args */);
    ~Seat() { ; };
    Seat()
    {
        _row = 0;
        _column = 'A';
        _isBooked = 0;
    }
    Seat(int row, char col)
    {
        _row = row;
        _column = col;
        _isBooked = 0;
    }
    int GetRow()
    {
        return _row;
    }
    char GetCol()
    {
        return _column;
    }
    void SetBooked()
    {
        _isBooked = 1;
    }
    static vector<vector<Seat>> InitListSeat(int row, char col)
    {
        vector<vector<Seat>> res;
        res.resize(row);
        for (int i = 0; i < row; i++)
        {
            for (char j = 'A'; j <= col; j++)
            {
                Seat c(i, j);
                res[i].push_back(c);
            }
        }
        return res;
    }
    bool isBooked()
    {
        return _isBooked;
    }
    //friend ostream &operator<<(ostream &os, Flight src);
    friend ostream& operator<<(ostream &os, const Seat src)
    {
        os << "Seat: ";
        os << src._row << "-" <<src._column <<endl;
        return os;
    }
};