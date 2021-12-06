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
    cout << "1. Flight Schedule" << endl;
    cout << "2. Book Ticket" << endl;
    cout << "3. Print Ticket" << endl;
    cout << "4. Purchase" << endl;
    cout << "5. Exit" << endl;
    return 5;
}
int childMenu1()
{
    cout << "1.  Buon Ma Thuot Airport Schedule" << endl;
    cout << "2.  Ca Mau Airport Schedule" << endl;
    cout << "3.  Cam Bi Airport Schedule" << endl;
    cout << "4.  Cam Ranh Airport Schedule" << endl;
    cout << "5.  Can Tho Airport Schedule" << endl;
    cout << "6.  Chu Lai Airport Schedule" << endl;
    cout << "7.  Con Dao Airport Schedule" << endl;
    cout << "8.  Da Nang Airport Schedule" << endl;
    cout << "9.  Dien Bien Phu Airport Schedule" << endl;
    cout << "10. Dong Hoi Airport Schedule" << endl;
    cout << "11. Lien Khuong Airport Schedule" << endl;
    cout << "12. Noi Bai Airport Schedule" << endl;
    cout << "13. Phu Bai Airport Schedule" << endl;
    cout << "14. Phu Cat Airport Schedule" << endl;
    cout << "15. Phu Quoc Airport Schedule" << endl;
    cout << "16. Pleiku Airport Schedule" << endl;
    cout << "17. Rach Gia Airport Schedule" << endl;
    cout << "18. Tan Son Nhat Airport Schedule" << endl;
    cout << "19. Tho Xuan Airport Schedule" << endl;
    cout << "20. Tuy Hoa Airport Schedule" << endl;
    cout << "21. Van Don Airport Schedule" << endl;
    cout << "22. Vinh Airport Schedule" << endl;
    cout << "23. Back" << endl;
    return 23;
}
void runMainMenu(int &option)
{
    static vector<Ticket> listTicket;
    if (option == 1)
    {
        int childOption = -1;
        while (childOption != 23)
        {
            childOption = selectOption(childMenu1());
            system("clear");
            runChildMenu1(childOption);
            system("read -p 'Press Enter to continue...' var");
            system("clear");
        }
    }
    else if (option == 2)
    {
        Ticket tmp;
        cin >> tmp;
        listTicket.push_back(tmp);
    }
    else if (option == 3)
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
    else if (option == 4)
    {
        // write list ticket to file
        cout << "Done!" << endl;
        system("read -p 'Press Enter to continue...' var");
    }
    else if (option == 5)
    {
        cout << "Press y to exit: ";
        char c;
        cin >> c;
        option = (c != 'y') ? -1 : 4;
    }
}

void runChildMenu1(int &option)
{
    switch (option)
    {
    case 1:
        printFile("FlightSchedule/BuonMaThuotSchedule.txt");
        break;
    case 2:
        printFile("FlightSchedule/CaMauSchedule.txt");
        break;
    case 3:
        printFile("FlightSchedule/CamBiSchedule.txt");
        break;
    case 4:
        printFile("FlightSchedule/CamRanhSchedule.txt");
        break;
    case 5:
        printFile("FlightSchedule/CanThoSchedule.txt");
        break;
    case 6:
        printFile("FlightSchedule/ChuLaiSchedule.txt");
        break;
    case 7:
        /* code */
        printFile("FlightSchedule/ConDaoSchedule.txt");
        break;
    case 8:
        /* code */
        printFile("FlightSchedule/DaNangSchedule.txt");
        break;
    case 9:
        /* code */
        printFile("FlightSchedule/DienBienPhuSchedule.txt");
        break;
    case 10:
        /* code */
        printFile("FlightSchedule/DongHoiSchedule.txt");
        break;
    case 11:
        /* code */
        printFile("FlightSchedule/LienKhuongSchedule.txt");
        break;
    case 12:
        /* code */
        printFile("FlightSchedule/NoiBaiSchedule.txt");
        break;
    case 13:
        /* code */
        printFile("FlightSchedule/PhuBaiSchedule.txt");
        break;
    case 14:
        /* code */
        printFile("FlightSchedule/PhuCatSchedule.txt");
        break;
    case 15:
        /* code */
        printFile("FlightSchedule/PhuQuocSchedule.txt");
        break;
    case 16:
        /* code */
        printFile("FlightSchedule/PleikuSchedule.txt");
        break;
    case 17:
        /* code */
        printFile("FlightSchedule/RachGiaSchedule.txt");
        break;
    case 18:
        /* code */
        printFile("FlightSchedule/TanSonNhatSchedule.txt");
        break;
    case 19:
        /* code */
        printFile("FlightSchedule/ThoXuanSchedule.txt");
        break;
    case 20:
        /* code */
        printFile("FlightSchedule/TuyHoaSchedule.txt");
        break;
    case 21:
        /* code */
        printFile("FlightSchedule/VanDonSchedule.txt");
        break;
    case 22:
        /* code */
        printFile("FlightSchedule/VinhSchedule.txt");
        break;
    default:
        break;
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