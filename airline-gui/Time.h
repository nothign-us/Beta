#pragma once
#include <chrono>
#include <ctime>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class Time{
private:
    int _hour;
    int _minute;
    int _second;

public:
    Time();
    Time(int, int, int);
    ~Time();
    bool operator==(const Time &t);
    bool operator!=(const Time &t);
    bool operator<(const Time &t);
    int getHour();
    int getMinute();
    int getSecond();
    void setHour(int);
    void setMinute(int);
    void setSecond(int);
    
public:
    //Hàm lấy danh sách giờ bay
    static vector<Time> getListArriveTime();
    static Time TryParse(string input);
    static bool IsValidTime(int, int, int);
    string ToString() const;
    friend istream& operator>> (istream& inp, Time *t);
    friend ostream& operator<< (ostream& out, const Time &t);
};