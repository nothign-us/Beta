#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Ticket.h"
using namespace std;

int selectOption(int limit);    //Hàm trả về option từ 1 đến limit
int SignMenu();                 //Sign in, sign up menu
int mainMenu();                 //Menu đặt vé
Client runSignMenu(int &option);//Chạy sign menu, trả về một Client, nghĩã là đăng nhập thành công 
void runMainMenu(int &option, Client client, vector<Ticket> &globalList, vector<vector<Seat>> &SkybossSeat, vector<vector<Seat>> &EcoSeat);
void printFile(string fileName);//In một file ra console
vector<string> GetListAirportName(string filename);//Lấy danh sách tên các sân bay
string SelectAirport(vector<string> listAirportName, string except);        //Chọn sân bay từ danh sách tên
vector<Flight> GetListFlight(string str, string des, Date departureDay);    //Lấy danh sách các chuyến bay từ str tới des (được lưu trong file txt)
int SelectFlight(vector<Flight> listFlight);                                //Chọn một chuyến bay từ danh sách các chuyên bay
Seat SelectSeat(int &totalFee, vector<vector<Seat>> list);                  //Chọn ghế ngồi từ danh sách các ghế ngồi

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
Client runSignMenu(int &option)
{
    if (option == 1)
    {
        // Sign in
        Client g;
        option = 3;
        return g;
    }
    else if (option == 2)
    {
        // signup
    }
}
void runMainMenu(int &option, Client client, vector<Ticket> &globalList, vector<vector<Seat>> &SkybossSeat, vector<vector<Seat>> &EcoSeat)
{
    //List ticket để lưu danh sách các vé đã đặt (Chưa được trả tiền)
    //Khi trả tiền thì listTicket sẽ được pust vào globalTicket.
    static vector<Ticket> listTicket;
    //Đặt vé
    if (option == 1)
    {
        // lay danh sach cac san bay
        cout << "Select arrival day: "<<endl;
        Date departureDay;
        cin >> departureDay;
        vector<string> list = GetListAirportName("VietNamAirport.txt");
        cout << "Select the start airport:" << endl;
        string startAiport = SelectAirport(list, "");
        system("clear");
        cout << "Select the destinate airport" << endl;
        string destinateAiport = SelectAirport(list, startAiport);
        // lay danh sach cac chuyen bay
        vector<Flight> listFlight = GetListFlight(startAiport, destinateAiport, departureDay);
        system("clear");
        int selectFlight = SelectFlight(listFlight); //Chọn chuyến bay
        //Chọn loại vé. Thương gia hay phổ thông
        cout << "Press 1 to book eco ticket. 2 to book skyboss: ";
        int c;
        cin >> c;
        c = (c == 1) ? 399000 : 1299000;
        //chọn ghế ngồi (Thương gia được chọn ghế miễn phí. Phổ thông nếu chọn vé sẽ tốn thêm phí)
        //nếu không chọn thì random ghế ngồi (dựa trên danh sách các ghế đã đặt)
        Seat seat;
        if (c == 399000)
            seat = SelectSeat(c, EcoSeat);
        else
            seat = SelectSeat(c, SkybossSeat);

        //Đưa ticket vào listTicket.
        if (selectFlight != listFlight.size())
        {
            Ticket tick(listFlight[selectFlight], client, c,seat);
            listTicket.push_back(tick);
            cout << "DONE~" << endl;
            system("read -p 'Press Enter to continue...' var");
        }
    }
    //In danh sách các vé đã đặt
    else if (option == 2)
    {
        if (listTicket.size() == 0)
            cout << "Please book at least a ticket!" << endl;
        else
        {
            cout << "       LIST BOOKED TICKET" << endl;
            for (int i = 0; i < listTicket.size(); i++)
            {
                cout << listTicket[i] << endl;
            }
        }
        system("read -p 'Press Enter to continue...' var");
    }
    //Trả tiền cho các vé. Đồng nghĩa với việc đưa listTicket lên globalTicket và Set vị trí các
    //ghê ngồi
    else if (option == 3)
    {

        for (int i = 0; i < listTicket.size(); i++){
            globalList.push_back(listTicket[i]);
            if(listTicket[i]._price ==399000)
                //đặt vị trí thành true
                EcoSeat[listTicket[i]._seat.GetRow()][listTicket[i]._seat.GetCol()-'A'].SetBooked();    
            else
                SkybossSeat[listTicket[i]._seat.GetRow()][listTicket[i]._seat.GetCol()-'A'].SetBooked();
        }
        cout << "Done!" << endl;
        system("read -p 'Press Enter to continue...' var");
    }
    //Sign out
    else if (option == 4)
    {
        cout << "Press y to sign out: ";
        char c;
        cin >> c;
        option = (c != 'y') ? -1 : 4;
    }
}

void printFile(string fileName)
{
    fstream file;
    file.open(fileName);
    string line = "";
    while (!file.eof())
    {
        getline(file, line);
        cout << line << endl;
    }
    file.close();
}
vector<string> GetListAirportName(string filename)
{
    vector<string> list;
    fstream f;
    f.open(filename);
    while (!f.eof())
    {
        string line = "";
        getline(f, line);
        list.push_back(line);
    }
    list.pop_back();
    f.close();
    return list;
}
string SelectAirport(vector<string> listAirportName, string except)
{
    int index = 0;
    for (int i = 0; i < listAirportName.size(); i++)
        if (listAirportName[i] == except)
            listAirportName.erase(listAirportName.begin() + i);
    for (int i = 0; i < listAirportName.size(); i++)
    {
        cout << i << ". " << listAirportName[i] << endl;
    }

    cout << "Select Airport: ";
    int sl = selectOption(listAirportName.size());
    return listAirportName[sl];
}
vector<Flight> GetListFlight(string str, string des, Date departureDay)
{
    fstream openFile;
    string fileName = str;
    fileName += "_";
    fileName += des;
    fileName += ".txt";
    fileName = (("FlightSchedule/" + str) + "/") + fileName;
    openFile.open(fileName);

    vector<Flight> res;
    string line = "";
    int hour, minute = 0;
    int eco, boss = 0;
    while (!openFile.eof())
    {
        getline(openFile, line);
        vector<string> listData;
        string element = "";
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] != '_')
            {
                element += line[i];
            }
            else
            {
                listData.push_back(element);
                element = "";
            }
        }
        listData.push_back(element);
        Time strT = Time::TryParse(listData[0]);
        Time end = Time::TryParse(listData[1]);
        Airport strAirport(str);
        Airport desAirport(des);
        Flight tmp(strAirport, desAirport, strT, end, departureDay, departureDay);
        res.push_back(tmp);
    }
    openFile.close();
    return res;
}
int SelectFlight(vector<Flight> listFlight)
{
    cout << setw(20) << right << "StartAirport"
         << setw(20) << right << "DestinationAirport"
         << setw(20) << right << "Depart Day"
         << setw(20) << right << "Depart"
         << setw(20) << right << "Arrival"
         << setw(20) << right << "Promo"
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
Seat SelectSeat(int &totalFee, vector<vector<Seat>> list)
{
    cout << "Do you want to select seat (free for skyboss, 300000vnd for eco ticket), press 1 to agree,0 to disagree: ";
    bool n;
    cin >> n;
    if (n)
    {
        totalFee += (totalFee == 399000) ? 300000 : 0;
        int row;
        char col;
        do
        {
            cout << "Row: ";
            cin >> row;
            cout << "Col: ";
            cin >> col;

        } while (list[row][col-'A'].isBooked());
        Seat res(row,col);
        return res;
    }
    else
    {
        int row;
        char col;
        do
        {
            cout << "Row: ";
            row = rand()%list.size();
            cout << "Col: ";
            col = rand()%list[0].size()+'A';
        } while (list[row][col-'A'].isBooked());
        Seat res(row,col);
        return res;
    }
}