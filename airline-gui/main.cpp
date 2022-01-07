#include "mainwindow.h"
#include "Account.h"
#include "Manager.h"
#include <QApplication>

#include "makeMenu.h"
#include <SelectFlight.h>

std::map<std::string, std::string> Account::_checkAccount;
bool addAdmin1 = Account::SignUpAccount("admin1", "p@ssw0rd");
std::vector<Ticket*> AdminAccount::bookedTickets;
vector<Ticket*> Manager::_availableTickets;
vector<Account*> Manager::_allAccount = { new AdminAccount("admin1","p@ssw0rd") };
vector<Ticket*> Manager::_tempBookedTicket; // Kho lưu vé chưa thanh toán
vector<string> Manager::listAirport, Manager::listProvince;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/Images/Images/icon-airline-app.png"));

    MainWindow mainProgram;
    mainProgram.show();

    a.exec();
    return 0;
}
