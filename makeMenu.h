#include <iostream>
#include <fstream>
#include <string>
#include "Ticket.h"
using namespace std;
int selectOption(int limit);
int mainMenu();
int childMenu1();
void runMainMenu(int &option);
void runChildMenu1(int &option);
void printFile(string fileName);
vector<string> GetListAirportName(string filename);
string SelectAirport(vector<string> listAirportName, string except);
vector<Flight> GetListFlight(string str, string des);

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

int mainMenu()
{
    cout << "1. Book Ticket" << endl;
    cout << "2. Print Ticket" << endl;
    cout << "3. Purchase" << endl;
    cout << "4. Exit" << endl;
    return 5;
}

void runMainMenu(int &option)
{
    static vector<Ticket> listTicket;
    if (option == 1)
    {
        // lay danh sach cac san bay
        vector<string> list = GetListAirportName("VietNamAirport.txt");
        cout << "Select the start airport:" << endl;
        string startAiport = SelectAirport(list, "");
        system("clear");
        cout << "Select the destinate airport" << endl;
        string destinateAiport = SelectAirport(list, startAiport);
        vector<Flight> listFlight = GetListFlight(startAiport, destinateAiport);
    }
    else if (option == 2)
    {
        if (listTicket.size() == 0)
            cout << "Please book at least a ticket!";
        else
        {
            cout << "           LIST BOOKED TICKET" << endl;
            for (int i = 0; i < listTicket.size(); i++)
            {
                cout << listTicket[i] << endl;
            }
        }
        system("read -p 'Press Enter to continue...' var");
    }
    else if (option == 3)
    {
        // write list ticket to file
        cout << "Done!" << endl;
        system("read -p 'Press Enter to continue...' var");
    }
    else if (option == 4)
    {
        cout << "Press y to exit: ";
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
vector<Flight> GetListFlight(string str, string des)
{
    fstream openFile;
    string fileName = str;
    fileName += "_";
    fileName += des;
    fileName += ".txt";
    fileName = (("FlightSchedule/" +str) +"/")+ fileName;
    openFile.open(fileName);

    //
    //
    //

    openFile.close();
}