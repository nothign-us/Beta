#include "Ticket.h"

using namespace std;

Ticket::Ticket() {
    _extraFee = 0;
}

Ticket::Ticket(Flight srcFl, Client srcCl, Seat seat)
{
    _flight = srcFl;
    _client = srcCl;
    _seat = seat;
    _extraFee = 0;
}

Ticket::Ticket(Flight srcFl, Seat seat) {
    _flight = srcFl;
    _seat = seat;
    _extraFee = 0;
}

Ticket::Ticket(Flight srcFl) {
    _flight = srcFl;
    _extraFee = 0;
}

bool Ticket::operator== (const Ticket& t) {
    return _flight == t._flight;
}

bool Ticket::operator< (const Ticket &t) {
    return _flight < t._flight;
}

void Ticket::Book(Client owner)
{
    _isBooked = 1;
    _client = owner;
}

void Ticket::SetExtraFee(int fee) {
    _extraFee = fee;
}

void Ticket::SetClient(Client c) {
    _client = c;
}

Flight Ticket::getFlight() {
    return _flight;
}

int SkybossTicket::getPrice() const {
    return PRICE;
}

int EcoTicket::getPrice() const{
    return PRICE;
}

Seat Ticket::getSeat() {
    return _seat;
}

int Ticket::calculatePrice() const{
    int discount = 0;
    int price = getPrice();
    if (typeid(_client) == typeid(VipClient))
        discount += _client.getDiscount();
    return price - discount;
}

istream &operator>>(istream &is, Ticket &src)
{
    is >> src._client;
    is >> src._flight;
    src._price = 700000;
    return is;
}

ostream &operator<<(ostream &os, const Ticket &src)
{
    os << "----------------------------------------" << endl;
    os << src._client << endl;
    cout  << (src._flight).GetStartAiport().getNameAirport() << " ====> " << src._flight.GetDestinateAiport().getNameAirport() << "\t" << src._flight.GetArrivalDate() << "\t" << src._flight.GetDepartTime() << endl;
    os << src._seat <<endl;
    os << "Cost: " << src.calculatePrice() << endl;
    os << "----------------------------------------" << endl;
    return os;
}