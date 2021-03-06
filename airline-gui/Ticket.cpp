#include "Ticket.h"
#include "Client.h"

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

Seat* Ticket::getSeat() {
    return &_seat;
}
void Ticket::SetSeatUnbook()
{
    _seat.setUnbooked();
}
int Ticket::calculatePrice() const{
    int discount = 0;
    int price = getPrice();
    //if (typeid(_client) == typeid(VipClient))
    //    discount += _client.getDiscount();
    if(!_isSkyBoss && _isSelectSeat)
        price += 300000;
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
   os << "**********************************************" << endl;
   os << _client << endl;
   os << "S??n bay kh???i h??nh:\t" << _flight.GetStartAiport().getNameAirport() << endl;
   os << "Th???i gian kh???i h??nh:\t" << _flight.GetDepartureDate() << "\t" << _flight.GetDepartTime() << endl;
   os << "S??n bay h??? c??nh:\t\t" << _flight.GetDestinateAiport().getNameAirport() << endl;
   os << "Th???i gian h??? c??nh:\t\t" << _flight.GetArrivalDate() << "\t" << _flight.GetArrivalTime() << endl;
   os << "V??? tr?? gh???:\t\t" << _seat <<endl;
   os << "Gi?? ti???n:\t\t\t" << calculatePrice() << endl;
   os << "**********************************************" << endl;
   return os.str();
}

//--------------------------------------------------------------------------------------------------------------

// L???y m???t v??i th??ng tin c?? b???n c???a v??
//
// Tr??? v???:
// m???t std::string, ch???a 6 th??ng tin c?? b???n c???a v?? theo format sau:
// t??n s??n bay ??i,t??n s??n bay ?????n,ng??y kh???i h??nh,gi??? kh???i h??nh,t??n ch??? v??,s??? ??i???n tho???i
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
