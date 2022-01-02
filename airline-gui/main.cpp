#include "mainwindow.h"
#include "Account.h"
#include "Manager.h"

#include <QApplication>

std::map<std::string, std::string> Account::_checkAccount;
std::vector<Ticket*> AdminAccount::bookedTickets;
vector<Ticket*> Manager::_availableTickets;
vector<Account*> Manager::_allAccount;
vector<Ticket*> Manager::_tempBookedTicket; // Kho lưu vé chưa thanh toán
vector<string> Manager::listAirport, Manager::listProvince;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow mainProgram;

    mainProgram.show();
    a.exec();
}
