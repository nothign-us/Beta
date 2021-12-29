#pragma once
#include <chrono>
#include <iostream>
#include <ctime>
#include <string>
#include <sstream>

using namespace std;

class Date {
private:
    int _day;
    int _month;
    int _year;

public:
    Date();
    Date(int, int, int);
    ~Date();
    bool operator==(const Date& d);
    bool operator!=(const Date& d);
    bool operator<(const Date& d);
    int getDay();
    int getMonth();
    int getYear();
    void setDay(int);
    void setMonth(int);
    void setYear(int);

public:
    string ToString() const;
    static bool IsLeapYear(int year);
    static bool IsValidDate(int, int, int);

public:
    friend istream& operator>>(istream& inp, Date &d);
    friend ostream& operator<<(ostream& out, const Date &d);
};