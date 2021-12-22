#include "Airport.h"
#include <iostream>
#include <fstream>
#include "Time.h"
#include "makeMenu.h"
#include <vector>
using namespace std;
int main()
{
    int option = -1;
    //client
    Client client;
    
    while (option != 3)
    {
        //Sign in or Sign Up
        while (option != 3)
        {
            option = selectOption(SignMenu());
            if (option == 3)
                return 0;
            client = runSignMenu(option);
            system("clear");
        }
        //Quá trình dặt vé
        option = -1;
        //danh sách các ghế ngồi (chỉ rõ ghế đó đã được đặt hay chưa)
        static vector<Ticket> globalListTicket;                                 //Danh sách vẽ (đã được trả tiền)
        static vector<vector<Seat>> SkyBossListSeat = Seat::InitListSeat(4,'D');//Danh sách ghế hạng Thương Gia
        static vector<vector<Seat>> EcoListSeat =  Seat::InitListSeat(12,'D');  //Danh sách ghế hạng Phổ Thông
        while (option != 4)
        {
            option = selectOption(mainMenu());
            runMainMenu(option,client,globalListTicket,SkyBossListSeat,EcoListSeat);
            system("clear");
        }
    }
    // make Airport schedule
}