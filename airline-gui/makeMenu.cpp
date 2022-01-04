#include "makeMenu.h"
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

// Chọn kiểu tìm kiếm và tìm các vé phù hợp bằng Manager::searchFor
// Manager::searchFor = đa hình
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

// Do mỗi Ticket chứa cả chuyến bay (Flight) và Ví trí (Seat)
// nên dùng hàm này để hiển thị mỗi chuyến bay
vector<Flight> GetFlight(vector<Ticket*> listTicket) {
    vector<Flight> res;
    for (Ticket* t: listTicket) {
        Flight cur = t->getFlight();
        if (res.empty() 
        || (res.back().GetDepartTime() != cur.GetDepartTime() 
            && res.back().GetDepartureDate() != cur.GetDepartureDate()))
            res.push_back(cur);
    }
    return res;
}

void runMainMenu(int &option, Account* acc)
{
    /*
    // tempBookedTicket để lưu danh sách các vé đã đặt (Chưa được trả tiền)
    // Khi trả tiền thì tempBookedTicket sẽ được push vào globalTicket.
    
    // Danh sách tên sân bay
    vector<string> listAirport = Manager::listAirport;
    //Đặt vé
    if (option == 1)
    {
        // Liệt ké vé còn trong kho
        // Chọn kiểu tìm kiếm
        //vector<Ticket*> listTicket = GetListTicket(listAirport);
        system("clear");
        vector<Flight> listFlight = GetFlight(listTicket);
        int selectFlight = SelectFlight(listFlight); //Chọn chuyến bay

        //Đưa ticket vào tempBookedTicket.
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
    // In danh sách các vé đã đặt
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
    // Trả tiền cho các vé. Đồng nghĩa với việc 
    // xóa các vé tempBookedTicket trên Manager::_availableTickets 
    // và Set vị trí các ghế ngồi
    // 3. Purchase
    else if (option == 3)
    {
        // Xóa vé đã đặt khỏi kho vé
        int totalPrice = 0;
        for (int i = 0; i < Manager::_tempBookedTicket.size(); i++) {
            totalPrice += Manager::_tempBookedTicket[i]->calculatePrice();            
            Manager::removeTicket(Manager::_tempBookedTicket[i]);
        }
        // Xóa kho lưu vé tạm thời
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
            option = 4; // khi ra main option = 4 sẽ thoát khỏi chương trình
            if (!Manager::_tempBookedTicket.empty()) { // trường hợp khách hàng chưa thanh toán số vé đã đặt
                for (Ticket* cur: Manager::_tempBookedTicket) {
                    cur->getSeat().SetFree();
                }
                Manager::_tempBookedTicket.clear();
            }
        }
        else option = -1; //tiếp tục quá trình đặt vé
    }
*/
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
/*
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
*/
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
}
