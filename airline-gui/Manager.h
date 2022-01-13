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
    static vector<string> listAirport, listProvince;
    static vector<Ticket*> _tempBookedTicket; // Kho lưu vé chưa thanh toán
    
public:    
    static bool isGenerateTicket();
    static Account* getAccount(string username);
    static void printTicketToFile(vector<Ticket*>);
    static void loadTicket();
    static void addNewAccount(Account*);
    static Account* findAccount(std::string, std::string);
    static bool emptyAccount();
    static bool inTempBooked(Ticket*, int);
    static vector<Seat*> listEmptySeat(vector<Ticket*> list, bool isBoss, Flight);
    bool isBooked(Ticket*);
    static vector<Ticket*> searchFor(Airport _start, Airport _destination);
    static vector<Ticket*> searchFor(Airport _start, int _price);
    static vector<Ticket*> searchFor(Airport _start, Date _date);
    static void removeTicket(Ticket*);
    int getPrice(Ticket*, int extraFee);
    static bool RegisterAdminAccount(std::string username, std::string password);
    static vector<Flight> GetFlight(vector<Ticket*> listTicket);
    static Seat* SelectSeat(int isBoss, bool isSelect, vector<Ticket*> list, Flight _flight, int row, char col) throw (const char*);
    static vector<Ticket*> GetListTicket(vector<string> list,int type,string startAirport, string desAirport, Date date);
};
