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
    Seat();
    Seat(int row, char col);
    Seat(int row, char col, bool boss);
    Seat(const Seat &s);
public:
    int GetRow();
    char GetCol();
    bool isBoss();
    bool isBooked();
    void SetBooked();
    void SetBoss();
    void setUnbooked();
    void set(int row, char col, bool isBoss);
public:
    static vector<Seat> InitListSeat(int row, char col, bool boss);
    bool operator== (const Seat &s);
    Seat& operator=(const Seat &src);
    friend ostream& operator<<(ostream &os, const Seat src);
};

#endif
