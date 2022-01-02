#include "Ticket.h"

using namespace std;

Ticket::Ticket() {
    _extraFee = 0;
}

Ticket::Ticket(Flight srcFl, Client srcCl, Seat seat, bool isSltSeat)
{
    _flight = srcFl;
    _client = srcCl;
    _seat = seat;
    _extraFee = 0;
    _isSelectSeat = isSltSeat;
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

Flight Ticket::getFlight() const {
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
    if(!_isSkyBoss && _isSelectSeat)
        price +=300000;
    return price - discount;
}
void Ticket::setSkyboss()
{
    _isSkyBoss = 1;
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

string Ticket::toString()
{
   stringstream os;
   os << "----------------------------------------" << endl;
   os << _client << endl;
   cout  << (_flight).GetStartAiport().getNameAirport() << " ====> " << _flight.GetDestinateAiport().getNameAirport() << "\t" << _flight.GetArrivalDate() << "\t" << _flight.GetDepartTime() << endl;
   os << _seat <<endl;
   os << "Cost: " << calculatePrice() << endl;
   os << "----------------------------------------" << endl;
   return os.str();
}

//--------------------------------------------------------------------------------------------------------------

// Lấy một vài thông tin cơ bản của vé
//
// Trả về:
// một std::string, chứa 6 thông tin cơ bản của vé theo format sau:
// tên sân bay đi,tên sân bay đến,ngày khởi hành,giờ khởi hành,tên chủ vé,số điện thoại
string Ticket::GetBasicInfo() const {
    stringstream ss;

    // Format: "DepartureAirportName,ArrivalAirportName,DepartureDate,DepartureTime,ClientName,ClientPhoneNumber"
    ss << this->_flight.GetStartAiport().getNameAirport() << ",";
    ss << this->_flight.GetDestinateAiport().getNameAirport() << ",";
    ss << this->_flight.GetDepartureDate().ToString() << ",";
    ss << this->_flight.GetDepartTime().ToString() << ",";
    ss << this->_client.getName() << ",";
    ss << this->_client.getPhoneNumber();

    return ss.str();
}
