#include <fstream>
#include <iostream>
#include <vector>
#include "Airport.h"    // #include "Address.h"
#include "Account.h"
#include "makeMenu.h"   // #include "Ticket.h"
#include "Manager.h"
#include "Time.h"

using namespace std;

map<string, string> Account::_checkAccount;
vector<Ticket*> AdminAccount::bookedTickets;
vector<Ticket*> Manager::_availableTickets, Manager::_tempBookedTicket;
vector<Account*> Manager::_allAccount;
vector<string> Manager::listAirport, Manager::listProvince;

// BUG <- tìm để chỉnh

void InitData() {
    Manager::loadTicket();
}

int main()
{
    srand(time(NULL));
    InitData();
    int option = -1;
    //client
    Client client;
    Account* curAccount;
    int numChoice;
    
    while (option != 3)
    {
        // Sign in or Sign Up
        while (option != 3)
        {
            numChoice = SignMenu();
            /*  1. Sign In
                2. Sign Up
                3. Exit     */
            option = selectOption(numChoice); 
            if (option == 3)    // Thoát khỏi chương trình lớns
                return 0;
            curAccount = runSignMenu(option);
            system("clear");
        }
        // Quá trình dặt vé
        //danh sách các ghế ngồi (chỉ rõ ghế đó đã được đặt hay chưa)
        option = -1;
        while (option != 4)
        {
            numChoice = mainMenu();
            /*  1. Book Ticket
                2. Print Ticket
                3. Purchase
                4. Sign Out     */
            option = selectOption(numChoice);
            runMainMenu(option, curAccount);
            system("clear");
        }
    }
    delete curAccount;
    // make Airport schedule
}