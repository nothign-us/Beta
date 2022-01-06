#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <map>
#include "Ticket.h"
#include "Client.h"
#include <vector>

//===========================================================================
// LỚP TÀI KHOẢN
class Account {
protected:
    std::string _username;  // Tên đăng nhập
    std::string _password;  // Mật khẩu
    static std::map<std::string, std::string> _checkAccount;    // Lưu những tài khoản đã được đăng kí

public:
    Client _owner;  // Thông tin chủ sở hữu tài khoản
    bool _isAdmin;          // Là admin hay client

public:
    bool cmpUsername(string name);
    Account(std::string user, std::string pass);
    Account(std::string user, std::string pass, bool isAdmin);
    Client getClient();
    void SetClient(const Client& client);
    static bool SignUpAccount(std::string username, std::string password);
    static bool SignIn(std::string username, std::string password);
public:
    bool operator==(const Account &src_acc);
    bool operator<(const Account &src_acc);
};

//===========================================================================
// LỚP TÀI KHOẢN CỦA NGƯỜI DÙNG CUỐI (KHÁCH HÀNG)
class ClientAccount: public Account {
private:
    std::vector<Ticket*> _listBookedTickets;    // Lưu danh sách vé tài khoản này đã đặt
public:
    ClientAccount(std::string user, std::string pass, Client clientInfo);

public:
    bool Purchase(Ticket*&);
    void addTicket(Ticket* t);
};

//===========================================================================
// LỚP TÀI KHOẢN CỦA QUẢN TRỊ VIÊN
class AdminAccount: public Account {
private:
    static std::vector<Ticket*> bookedTickets;
public:    
    static void addTicket(Ticket*);
    static int GetNumberOfBookedTicket();
    static vector<string> GetBookedTicketInfo();
    AdminAccount(std::string user, std::string pass);
};

#endif
