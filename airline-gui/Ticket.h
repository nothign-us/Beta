#pragma once
#include "Flight.h"
#include "Client.h"
#include <typeinfo>
#include <sstream>
using namespace std;
class Ticket  {
private:
    Flight _flight; // hai chiều
    Client _client;
    bool _isSkyBoss;    // có phải hạng thương gia
    Seat _seat;
    int _price;
    int _extraFee;
    bool _isSelectSeat;
public:
    Ticket();
    Ticket(Flight);
    Ticket(Flight, Client, Seat, bool);
    Ticket(Flight, Seat);
    ~Ticket() {;}
    virtual int getPrice() const = 0;
    void SetClient(Client);
    void SetExtraFee(int fee);
    bool _isBooked;
    Flight getFlight() const;
    Seat* getSeat();
    void SetSeatUnbook();
    void setSkyboss();
    bool operator== (const Ticket&);
    bool operator< (const Ticket&);
    friend istream &operator>>(istream &is, Ticket &src);
    friend ostream &operator<<(ostream &os, const Ticket &src);
    string toString();
    string GetBasicInfo() const;
public:
    void Book(Client);
    int calculatePrice() const;
};

class EcoTicket: public Ticket {
private:
    const int PRICE = 399000;
public:
    EcoTicket(Flight f, Seat s): Ticket(f, s) {;}
    EcoTicket(Flight f, Client c, Seat s,bool d): Ticket(f, c, s,d) {;}
    int getPrice() const;
};

class SkybossTicket: public Ticket {
private:
    const int PRICE = 1299000;
public:
    SkybossTicket(Flight f, Seat s): Ticket(f, s) {
        getSeat()->SetBoss();
    }
    SkybossTicket(Flight f, Client c, Seat s,bool d): Ticket(f, c, s, d) {
        getSeat()->SetBoss();
    }
    int getPrice() const;
};
