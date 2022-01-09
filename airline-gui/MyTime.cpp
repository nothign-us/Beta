#include "MyTime.h"
#include <iostream>

using namespace std;

//---------------------------------------------------------------
Time Time::TryParse(string input)
{
    // chac chan raang input la hop le
    Time res;
    string tmp = "";
    for (int i = 0; i < int(input.length()); i++)
    {
        if(input[i] != ':')
            tmp += input[i];
        else   {
            cout << tmp << ' ';
            res.setHour(stoi(tmp));
            tmp = "";
        }
    }
    res.setMinute(stoi(tmp));
    return res;
}

//-----------------------------------------------------------------
// Source: https://stackoverflow.com/questions/43493794/how-to-get-local-time-c
Time::Time()
{
    time_t currentTime;
    struct tm *localTime;

    time(&currentTime);                  // Get the current time
    localTime = localtime(&currentTime); // Convert the current time to the local time

    _hour = localTime->tm_hour;
    _minute = localTime->tm_min;
    _second = localTime->tm_sec;
}

//-----------------------------------------------------------------
Time::Time(int hour, int min, int sec)
{
    _hour = hour;
    _minute = min;
    _second = sec;
}

//-----------------------------------------------------------------
bool Time::operator==(const Time &t) {
    return _hour == t._hour && _minute == t._minute && _second == t._second;
}

//-----------------------------------------------------------------
bool Time::operator!=(const Time &t) {
    return _hour != t._hour || _minute != t._minute || _second != t._second;
}

//-----------------------------------------------------------------
bool Time::operator<(const Time &t) {
    return _hour < t._hour 
        || (_hour == t._hour && _minute < t._minute) 
        || (_minute == t._minute && _second < t._second);
}

//-----------------------------------------------------------------
vector<Time> Time::getListArriveTime()
{
    vector<Time> listTime;
    for (int i = 7; i <= 16; i++)
    {
        for (int j = 0; j <= 30; j += 30)
        {
            Time newTime(i, j, 0);
            listTime.push_back(newTime);
        }
    }
    return listTime;
}

//-----------------------------------------------------------------
int Time::getHour()
{
    return _hour;
}

//-----------------------------------------------------------------
int Time::getMinute()
{
    return _minute;
}

//-----------------------------------------------------------------
int Time::getSecond()
{
    return _second;
}

//-----------------------------------------------------------------
void Time::setHour(int hour)
{
    _hour = hour;
}

//-----------------------------------------------------------------
void Time::setMinute(int min)
{
    _minute = min;
}

//-----------------------------------------------------------------
void Time::setSecond(int sec)
{
    _second = sec;
}

//-----------------------------------------------------------------
bool isBetween(int val, int L, int R)
{ // check L <= val <= R
    return (val >= L && val <= R);
}

//-----------------------------------------------------------------
bool Time::IsValidTime(int hour, int min, int sec)
{
    return (isBetween(hour, 0, 23) && isBetween(min, 0, 59) && isBetween(sec, 0, 59));
}

//-----------------------------------------------------------------
string Time::ToString() const
{
    stringstream writer;
    writer << (_hour < 10 ? "0" : "") << _hour;
    writer << ":" << (_minute < 10 ? "0" : "") << _minute;
    return writer.str();
}

//-----------------------------------------------------------------
istream &operator>>(istream &inp, Time *t)
{
    cout << "Nhap gio: ";
    inp >> t->_hour;
    cout << "Nhap phut: ";
    inp >> t->_minute;
    cout << "Nhap giay: ";
    inp >> t->_second;
    return inp;
}

//-----------------------------------------------------------------
ostream &operator<<(ostream &out, const Time &t)
{
    out << t.ToString();
    return out;
}
