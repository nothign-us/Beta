/*#include "makeMenu.h"
#include "Manager.h"
#include <algorithm>

#define PAUSE system("read -p 'Press Enter to continue...' var");

using namespace std;

const int ECOPRICE = 399000;
const int SKYBOSSPRICE = 1299000;

int selectOption(int limit)
{
    int select;
    cout << "Select Option: ";
    cin >> select;
    while (select < 0 || select > limit)
    {
        cout << "Error, reselect: ";
        cin >> select;
    }
    return select;
}

int SignMenu()
{
    cout << "1. Sign In" << endl;
    cout << "2. Sign Up" << endl;
    cout << "3. Exit" << endl;
    return 3;
}

int mainMenu()
{
    cout << "1. Book Ticket" << endl;
    cout << "2. Print Ticket" << endl;
    cout << "3. Purchase" << endl;
    cout << "4. Sign Out" << endl;
    return 4;
}

Account* runSignMenu(int &option)
{
    Account* cur = nullptr;
    string user, pass;
    if (option == 1) {
        // Sign In
        if (Manager::emptyAccount()) {
            cout << "Please sign Up an account!\n";
            PAUSE
            option = -1;
            return cur;
        }
        while (true) {
            system("clear");
            cout << "Sign In:\n";
            cout << "Username: ";   cin >> user;
            cout << "Password: ";   cin >> pass;
            if (Account::SignIn(user, pass)) {
                cur = Manager::findAccount(user, pass);
                break;
            }
        }
        option = 3;
    }
    else if (option == 2) {
        // Sign Up
        while (true) {
            system("clear");
            cout << "Sign Up:\n";
            cout << "Username: ";   cin >> user;
            cout << "Password: ";   cin >> pass;
            bool flag = Account::SignUpAccount(user, pass);
            if (flag == 1) {
                //cur = new ClientAccount(user, pass);
                Manager::addNewAccount(cur);
                break;
            }
        }
        option = -1;
    }
    return cur;
}

void selectTypeSearch(int &type) {
    cout << "0. Start and Destination.\n";
    cout << "1. Start and Date.\n";
    type = selectOption(1);
}

// Ch???n ki???u t??m ki???m v?? t??m c??c v?? ph?? h???p b???ng Manager::searchFor
// Manager::searchFor = ??a h??nh
vector<Ticket*> GetListTicket(vector<string> list,int type,string startAirport, string desAirport, Date date) {
    vector<Ticket*> res;
    if (type == 0) {
        res = Manager::searchFor(Airport(startAirport), Airport(desAirport));
    }
    else {
        res =  Manager::searchFor(Airport(startAirport), date);
    }
    return res;
}

// Do m???i Ticket ch???a c??? chuy???n bay (Flight) v?? V?? tr?? (Seat)
// n??n d??ng h??m n??y ????? hi???n th??? m???i chuy???n bay
vector<Flight> GetFlight(vector<Ticket*> listTicket) {
    vector<Flight> res;
    for (Ticket* t: listTicket) {
        Flight cur = t->getFlight();
        if (res.empty() || (res.back().GetDepartTime() != cur.GetDepartTime() && res.back().GetDepartureDate() != cur.GetDepartureDate())|| (res.back().GetDestinateAiport().getNameAirport() != cur.GetDestinateAiport().getNameAirport()))
            res.push_back(cur);
    }
    return res;
}

void runMainMenu(int &option, Account* acc)
{
    // tempBookedTicket ????? l??u danh s??ch c??c v?? ???? ?????t (Ch??a ???????c tr??? ti???n)
    // Khi tr??? ti???n th?? tempBookedTicket s??? ???????c push v??o globalTicket.
    
    // Danh s??ch t??n s??n bay
    vector<string> listAirport = Manager::listAirport;
    //?????t v??
    if (option == 1)
    {
        // Li???t k?? v?? c??n trong kho
        // Ch???n ki???u t??m ki???m
        //vector<Ticket*> listTicket = GetListTicket(listAirport);
        system("clear");
        vector<Flight> listFlight = GetFlight(listTicket);
        int selectFlight = SelectFlight(listFlight); //Ch???n chuy???n bay

        //????a ticket v??o tempBookedTicket.
        if (selectFlight != listFlight.size()) 
        {

            Ticket* tick;
            if (isBoss)
                tick = new SkybossTicket(listFlight[selectFlight], acc->getClient(), selectedSeat);
            else tick = new EcoTicket(listFlight[selectFlight], acc->getClient(), selectedSeat);

            Manager::_tempBookedTicket.push_back(tick);
            cout << "DONE~" << endl;
            PAUSE

        }
    }
    // In danh s??ch c??c v?? ???? ?????t
    // 2. Print Ticket
    else if (option == 2)
    {
        if (Manager::_tempBookedTicket.size() == 0)
            cout << "Please book at least a ticket!" << endl;
        else
        {
            cout << "\tLIST BOOKED TICKET" << endl;
            for (int i = 0; i < Manager::_tempBookedTicket.size(); i++)
            {
                cout << *Manager::_tempBookedTicket[i] << endl;
            }
        }
        PAUSE
    }
    // Tr??? ti???n cho c??c v??. ?????ng ngh??a v???i vi???c 
    // x??a c??c v?? tempBookedTicket tr??n Manager::_availableTickets 
    // v?? Set v??? tr?? c??c gh??? ng???i
    // 3. Purchase
    else if (option == 3)
    {
        // X??a v?? ???? ?????t kh???i kho v??
        int totalPrice = 0;
        for (int i = 0; i < Manager::_tempBookedTicket.size(); i++) {
            totalPrice += Manager::_tempBookedTicket[i]->calculatePrice();            
            Manager::removeTicket(Manager::_tempBookedTicket[i]);
        }
        // X??a kho l??u v?? t???m th???i
        Manager::_tempBookedTicket.clear();
        cout << "Total price: " << totalPrice << endl;
        cout << "Done!" << endl;
        system("read -p 'Press Enter to continue...' var");
    }
    //Sign out
    else if (option == 4)
    {
        cout << "Press y to sign out: ";
        char c;
        cin >> c;
        if (c == 'y') {
            option = 4; // khi ra main option = 4 s??? tho??t kh???i ch????ng tr??nh
            if (!Manager::_tempBookedTicket.empty()) { // tr?????ng h???p kh??ch h??ng ch??a thanh to??n s??? v?? ???? ?????t
                for (Ticket* cur: Manager::_tempBookedTicket) {
                    cur->getSeat().SetFree();
                }
                Manager::_tempBookedTicket.clear();
            }
        }
        else option = -1; //ti???p t???c qu?? tr??nh ?????t v??
    }

    ;
}

string SelectAirport(vector<string> listAirportName, string except)
{
    if (except != "")
        listAirportName.erase(find(listAirportName.begin(), listAirportName.end(), except));

    for (int i = 0; i < listAirportName.size(); i++)
    {
        cout << i << ". " << listAirportName[i] << endl;
    }
    cout << "Select Airport: ";
    int sl = selectOption(listAirportName.size());
    return listAirportName[sl];
}

int SelectFlight(vector<Flight> listFlight)
{
    system("clear");
    cout << setw(25) << right << "StartAirport"
         << setw(25) << right << "DestinationAirport"
         << setw(20) << right << "Depart Day"
         << setw(20) << right << "Depart"
         << setw(20) << right << "Arrival"
         << setw(20) << right << "Eco"
         << setw(20) << right << "Skyboss" << endl;
    for (int i = 0; i < listFlight.size(); i++)
    {
        cout << i << ".  ";

        cout << listFlight[i];
    }
    cout << listFlight.size() << ".  Back" << endl;
    cout << "Select flight: ";
    int select = selectOption(listFlight.size());
    return select;
}

void printAvailableSeat(vector<Seat> availableSeats) {
    int preRow = 1;
    int n = availableSeats.size();
    cout << "Seat can book:\n";
    for (int i = 0; i < n; i++) {
        Seat cur = availableSeats[i];
        if (cur.GetRow() != preRow)
            cout << endl;
        cout << cur << ' ';        
        preRow = cur.GetRow();
    }
    cout << endl;
}

Seat* SelectSeat(int isBoss, bool isSelect, vector<Ticket*> list, Flight _flight, int row, char col) throw (const char*)
{
    Seat* res;
    vector<Seat*> availableSeats = Manager::listEmptySeat(list, isBoss, _flight);
    if (isSelect) {
        Seat tmp(row,col,isBoss);
        bool isFind = false;
        for(auto i:availableSeats)
        {
            if(*i==tmp)
            {
                isFind = true;
                res = i;
            }
        }
        if(!isFind)
            throw "Ghe da duoc dat";
    }
    else {
        row = availableSeats[0]->GetRow();
        col = availableSeats[0]->GetCol();
        res = availableSeats[0];
        cout << "Your seat was booked at: \n";
        cout << "Row: " << row << endl << "Col: " << col << endl;
    }

    res->SetBooked();
    return res;
}*/
