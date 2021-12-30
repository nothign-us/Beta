#pragma once
#ifndef MAKEMENU_H
#define MAKEMENU_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "Account.h"

using namespace std;

int selectOption(int limit);            //Hàm trả về option từ 1 đến limit
int SignMenu();                         //Sign in, sign up menu
int mainMenu();                         //Menu đặt vé
Account* runSignMenu(int &option);      //Chạy sign menu, trả về một Client, nghĩa là đăng nhập thành công 
void runMainMenu(int &option, Account* acc);
void printFile(string fileName);                                        //In một file ra console
vector<string> GetListAirportName(string filename);                     //Lấy danh sách tên các sân bay
string SelectAirport(vector<string> listAirportName, string except = "");    //Chọn sân bay từ danh sách tên
//vector<Flight> GetListFlight(string str, string des, Date departureDay);//Lấy danh sách các chuyến bay từ str tới des (được lưu trong file txt)
vector<Ticket*> GetListFlight(string str, string des, Date departureDay);
int SelectFlight(vector<Flight> listFlight);                            //Chọn một chuyến bay từ danh sách các chuyến bay
Seat SelectSeat(int isBoss, vector<Ticket*> list, Flight _flight);              //Chọn ghế ngồi từ danh sách các ghế ngồi

#endif