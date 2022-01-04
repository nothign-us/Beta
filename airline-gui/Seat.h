#pragma once
#ifndef SEAT_H
#define SEAT_H

#include <vector>
#include<iostream>
using namespace std;
class Seat
{
private:
    int _row;
    char _column;
    bool _isBooked;
    bool _isBoss;

public:
    // Seat(/* args */);
    ~Seat() { ; };
    Seat();
    Seat(int row, char col);
    Seat(int row, char col, bool boss);
    Seat(const Seat &s);
    int GetRow();
    char GetCol();
    bool isBoss();
    void SetBooked();
    void SetFree();
    void SetBoss() {
        _isBoss = 1;
    }
    void set(int row, char col, bool isBoss);
    static vector<Seat> InitListSeat(int row, char col, bool boss);
    bool isBooked();
    bool operator== (const Seat &s);
    Seat& operator=(const Seat &src);
    //friend ostream &operator<<(ostream &os, Flight src);
    friend ostream& operator<<(ostream &os, const Seat src);
};

#endif
