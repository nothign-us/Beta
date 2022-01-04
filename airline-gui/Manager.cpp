#include "Manager.h"
#include <fstream>
#include <algorithm>

#include <QDebug>

using namespace std;

#define PAUSE system("read -p 'Press Enter to continue...' var");

const string fileNameAirport = "VietNamAirport.txt";

// Mau file VietNamAirport.txt
// [Ten san bay]|[Ten tinh]
// San bay Tan Son Nhat|TP Ho Chi Minh
vector<string> getAirport() {
    ifstream inp;
    inp.open(fileNameAirport, ios::in);

    vector<string> name;

    if (inp.is_open() == false) {
        qDebug() << "Can't load Airport file!\n";
        return name;
    }

    string cur;
    while (getline(inp, cur)) {
        name.push_back(cur);
    }
    inp.close();
    return name;
}

 Account* Manager::getAccount(string username)
 {
    for(auto i:_allAccount)
    {
        if(i->cmpUsername(username))
        {
            return i;
        }
    }
 }

// tach ten san bay va ten tinh
// Airport.push_back("San bay Tan Son Nhat");
// Province.push_back("TP Ho Chi Minh");
void seperateInfor(vector<string> raw, vector<string> &listAirport, vector<string> &listProvince) {
    string tmp;
    for (int i = 0; i < int(raw.size()); i++) {
        tmp = "";
        for (int j = 0; j < int(raw[i].size()); j++) {
            if (raw[i][j] != '|')
                tmp += raw[i][j];
            else {
                listAirport.push_back(tmp);
                tmp = "";
            }
        }
        listProvince.push_back(tmp);
    }
}

void SetConnection(vector<string> vtA, vector<string> vtB, map<string, string>& AtoB, map<string, string>& BtoA) {
    int n = vtA.size();
    for (int i = 0; i < n; i++) {
        AtoB.insert({vtA[i], vtB[i]});
        BtoA.insert({vtB[i], vtA[i]});
    }
}

void generateTime(vector<Time> &t) {
    // Sinh giờ và phút riêng
    vector<int> h, m;
    for (int i = 0; i < 21; i++)
        h.push_back(i);
    for (int i = 0; i < 60; i += 5) {
        m.push_back(i);
    }
    bool d[24][60] = {0};   // Kiểm tra thời gian đã tồn tại
    // Trộn hai mảng giờ và phút
    for (int cnt = 0; cnt < 100; cnt++) {
        int ph, pm;
        do {
            ph = h[rand() % h.size()];
            pm = m[rand() % m.size()];
        } while (d[ph][pm] == 1);
        d[ph][pm] = 1;
        t.push_back(Time(ph, pm, 0));
    }
}

vector<string> getRandDestinationFor(string depart, vector<string> listAirport) {
    vector<string> to;
    int cnt = rand() % 5 + 1;
    while (cnt--) {
        string des = listAirport[rand() % (int)listAirport.size()];
        to.push_back(des);
    }
    sort(to.begin(), to.end());
    to.resize(distance(to.begin(), unique(to.begin(), to.end()))); // loại bỏ các sân bay trùng
    to.erase(find(to.begin(), to.end(), depart)); // loại bỏ trường hợp lặp lại sân bay đi (depart)
    return to;
}


void generateSeatForFlight(Flight curFlight, vector<Ticket*> &_availableTickets) {
    vector<Seat> SkyBossListSeat = Seat::InitListSeat(4, 'D', 1);   // Sinh danh sách ghế hạng Thương Gia
    vector<Seat> EcoListSeat =  Seat::InitListSeat(12, 'D', 0);     // Sinh danh sách ghế hạng Phổ Thông
    for (Seat s: SkyBossListSeat) {
        Ticket* t = new SkybossTicket(curFlight, s);
        //t->getSeat().SetBoss();
        _availableTickets.push_back(t);
    }
    for (Seat s: EcoListSeat) {
        Ticket* t = new EcoTicket(curFlight, s);
        _availableTickets.push_back(t);
    }
}

void Manager::printTicketToFile(vector<Ticket*> _availableTickets) {
    ofstream out;
    out.open("ListTickets.txt", ios::out);
    int n = _availableTickets.size();
    out << n << endl;
    for (int i = 0; i < n; i++) {
        while (i < n - 1 && _availableTickets[i]->getFlight() == _availableTickets[i + 1]->getFlight())
            i++;
        Ticket* cur = _availableTickets[i];
        Flight f = cur->getFlight();
        out << f.GetStartAiport().getNameAirport() << " ==> " << f.GetDestinateAiport().getNameAirport() << endl;
        out << "\t" << f.GetArrivalDate() << ": " << f.GetDepartTime() << endl;
    }
    out.close();
}

bool cmpTicket(Ticket* t1, Ticket* t2) {
    return *t1 < *t2;
}

// Sinh ra bộ vé ban đầu
void Manager::loadTicket() {
    vector<string> name = getAirport();
    vector<Time> time;
    seperateInfor(name, listAirport, listProvince);
    //SetConnection(listAirport, listProvince, AtoP, PtoA);
    generateTime(time); // size = 100
    // Tạo vé theo ngày 15->31/1/2022
    for (int day = 15; day <= 31; day++) {
        // duyệt từng sân bay
        for (string depart: listAirport) {
            vector<string> to = getRandDestinationFor(depart, listAirport);
            for (string des: to) {
                Date date(day, 1, 2021);
                Time t1 = time[rand() % time.size()];
                Time t2 = Time(t1.getHour() + 2, t1.getMinute(), t1.getSecond());
                Flight flight(depart, des, date, date, t1, t2);
                generateSeatForFlight(flight, _availableTickets);
            }
        }
    }
    //sort(_availableTickets.begin(), _availableTickets.end(), cmpTicket);
    printTicketToFile(_availableTickets);
}

bool Manager::inTempBooked(Ticket* t, int isBoss) {
    if (_tempBookedTicket.empty())
        return false;
    for (Ticket* cur: _tempBookedTicket) {        
        if (cur->getSeat().isBoss() != isBoss)  
            continue;
        Flight f1 = cur->getFlight(), f2 = t->getFlight();
        Seat s1 = cur->getSeat(), s2 = t->getSeat();        
        if (f1 == f2 && f1.GetDepartTime() == f1.GetDepartTime()
        && f1.GetDepartureDate() == f2.GetDepartureDate() && s1 == s2)
            return true;
    }
    return false;
}

vector<Seat> Manager::listEmptySeat(vector<Ticket*> list, bool isBoss, Flight _flight) {
    vector<Seat> res;
    for (Ticket* t: list) {
        Seat thisSeat = t->getSeat();
        Flight thisFl = t->getFlight();
        
        if (thisSeat.isBooked() == 0 && thisSeat.isBoss() == isBoss
        && thisFl.GetArrivalDate() == _flight.GetArrivalDate()
        && thisFl.GetDepartTime() == _flight.GetDepartTime()
        && !inTempBooked(t, isBoss)) 
        {
            res.push_back(thisSeat);
        }
    }
    return res;
}

bool Manager::isBooked(Ticket* src_ticket) {
    return src_ticket->_isBooked;
}

vector<Ticket*> Manager::searchFor(Airport _start, Airport _destination) {
    vector<Ticket*> res;
    for (Ticket* cur: _availableTickets) {
        Flight _flight = cur->getFlight();
        if (_flight.GetStartAiport() == _start && _flight.GetDestinateAiport() == _destination)
            res.push_back(cur);
    }
    return res;
}

vector<Ticket*> Manager::searchFor(Airport _start, int _price) {
    vector<Ticket*> res;
    for (Ticket* cur: _availableTickets) {
        Flight _flight = cur->getFlight();
        if (_flight.GetStartAiport() == _start && cur->calculatePrice() <= _price)
            res.push_back(cur);
    }
    return res;
}

vector<Ticket*> Manager::searchFor(Airport _start, Date _date) {
    vector<Ticket*> res;
    for (Ticket* cur: _availableTickets) {
        Flight _flight = cur->getFlight();
        if (_flight.GetStartAiport() == _start && _flight.GetDepartureDate() == _date)
            res.push_back(cur);
    }
    return res;
}

bool Manager::bookTicket(Ticket*) {
    return false;
}

int Manager::getPrice(Ticket* src_ticket, int extraFee) {
    return src_ticket->calculatePrice() + extraFee;
}

void Manager::addNewAccount(Account* src_acc) {
    _allAccount.push_back(src_acc);
}

Account* Manager::findAccount(string user, string pass) {
    Account* temp = new Account(user, pass, false);
    for (int i = 0; i < int(_allAccount.size()); i++)
        if (*temp == *_allAccount[i]) {
            delete temp;
            return _allAccount[i];
        }
    return nullptr;
}

bool Manager::emptyAccount() {
    return _allAccount.empty();
}

void Manager::removeTicket(Ticket* t) {
    for (int i = 0; i < int(_availableTickets.size()); i++) {
        Ticket* cur = _availableTickets[i];

        Flight _flight = cur->getFlight();
        Time time = _flight.GetDepartTime();
        Date date = _flight.GetDepartureDate();
        Seat seat = cur->getSeat();

        Flight tFlight = t->getFlight();
        Time tTime = tFlight.GetDepartTime();
        Date tDate = tFlight.GetDepartureDate();
        Seat tSeat = t->getSeat();

        if (_flight == tFlight && time == tTime && date == tDate && seat == tSeat
            && typeid(cur) == typeid(t)) {
            _availableTickets.erase(_availableTickets.begin() + i);
            break;
        }
    }
}
