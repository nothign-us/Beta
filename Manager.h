#pragma once

#include <vector>
#include "Ticket.h"
#include "Account.h"

class Manager {
private:
    static vector<Ticket*> _availableTickets;
    static vector<Account*> _allAccount;
    map<std::string, std::string> AtoP, PtoA; // airport -> province & province -> airport
    double currentDiscount;
public:
    static vector<Ticket*> _tempBookedTicket; // Kho lưu vé chưa thanh toán
    static vector<string> listAirport, listProvince;
    static void printTicketToFile(vector<Ticket*>);
    static void loadTicket();
    static void addNewAccount(Account*);
    static Account* findAccount(std::string, std::string);
    static bool emptyAccount();
    static bool inTempBooked(Ticket*, int);
    static vector<Seat> listEmptySeat(vector<Ticket*> list, bool isBoss, Flight);
    bool isBooked(Ticket*);
    static vector<Ticket*> searchFor(Airport _start, Airport _destination);
    static vector<Ticket*> searchFor(Airport _start, int _price);
    static vector<Ticket*> searchFor(Airport _start, Date _date);
    static void removeTicket(Ticket*);
    bool bookTicket(Ticket*);
    int getPrice(Ticket*, int extraFee);
};