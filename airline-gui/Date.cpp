#include "Date.h"

using namespace std;

Date::Date()
{
    time_t currentTime;
    struct tm *localTime;

    time(&currentTime);                  // Get the current time
    localTime = localtime(&currentTime); // Convert the current time to the local time

    _day = localTime->tm_mday;
    _month = localTime->tm_mon + 1;
    _year = localTime->tm_year + 1900;
}

Date::Date(int day, int mon, int year)
{
    _day = day;
    _month = mon;
    _year = year;
}

Date::~Date()
{
}

bool Date::operator==(const Date& d) {
    return _day == d._day && _month == d._month && _year == d._year;
}

bool Date::operator!=(const Date& d) {
    return _day != d._day || _month != d._month || _year != d._year;
}

bool Date::operator<(const Date& d) {
    return _day < d._day 
        || (_day == d._day && _month < d._month) 
        || (_month == d._month && _year < d._year);
}

int Date::getDay()
{
    return _day;
}

int Date::getMonth()
{
    return _month;
}

int Date::getYear()
{
    return _year;
}

void Date::setDay(int day)
{
    _day = day;
}

void Date::setMonth(int mon)
{
    _month = mon;
}

void Date::setYear(int year)
{
    _year = year;
}

bool Date::IsLeapYear(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                return true;
            else
                return false;
        }
        else
            return true;
    }
    else
        return false;
}

bool Date::IsValidDate(int day, int mon, int year)
{
    if (mon < 1 || mon > 12)
        return false;
    if (day < 1 || day > 31)
        return false;

    if (mon == 2)
        return (IsLeapYear(year) ? day <= 29 : day <= 28);

    if (mon == 4 || mon == 6 ||
        mon == 9 || mon == 11)
        return (day <= 30);
    return true;
}

string Date::ToString() const
{
    stringstream writer;
    writer << ((_day < 10) ? ("0" + to_string(_day)) : to_string(_day));
    writer << "/" << ((_month < 10) ? ("0" + to_string(_month)) : to_string(_month));
    writer << "/" << to_string(_year);
    return writer.str();
}

Date Date::Parse(const string dateStr) {
    vector<string> tokens = Tokenizer::Parse(dateStr, "/");
    int day = stoi(tokens[0]);
    int month = stoi(tokens[1]);
    int year = stoi(tokens[2]);
    Date result(day, month, year);
    return result;
}

istream &operator>>(istream &inp, Date &d)
{
    cout << "Day: ";
    inp >> d._day;
    cout << "Month: ";
    inp >> d._month;
    cout << "Year: ";
    inp >> d._year;
    return inp;
}

ostream &operator<<(ostream &out, const Date &d)
{
    out << d.ToString();
    return out;
}
