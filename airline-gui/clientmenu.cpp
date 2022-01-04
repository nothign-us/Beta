#include "clientmenu.h"
#include "mainwindow.h"
#include "ui_clientmenu.h"

#include <QScrollArea>

ClientMenu::ClientMenu(std::string username, Account* currentAcc , QWidget *parent ) :
    QDialog(parent),
    ui(new Ui::ClientMenu)
{
    CurrentAccount = currentAcc;
    ui->setupUi(this);
    this->setWindowTitle("Chọn thao tác");
    ui->usernameDisplay->setText(QString::fromStdString(username));
}

ClientMenu::~ClientMenu()
{
    delete ui;
}


void ClientMenu::on_bookTicketButton_clicked()
{
    SearchForOption optionSearch(CurrentAccount);
    optionSearch.exec();
    for(auto i:optionSearch.getBookedTicket())
        ListTicket.push_back(i);
}

void ClientMenu::on_signoutButton_clicked() {
    close();
}

void ClientMenu::on_printTicketButton_clicked()
{
    if(ListTicket.empty())
        QMessageBox::critical(this, "Tài khoản chưa đặt vé", "Vui lòng đặt vé");
    else
    {
        //Xuat danh sach ve ra man hinh
        OutScreen = new QDialog;
        OutScreen->setWindowTitle("Danh sách vé");
        OutScreen->setMinimumSize(500,450);

        QScrollArea* scroll = new QScrollArea(OutScreen);
        scroll->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scroll->setWidgetResizable(true);

        QWidget* widget = new QWidget(scroll);
        scroll->setWidget(widget);

        QVBoxLayout* OutScrLayout = new QVBoxLayout();
        OutScreen->setLayout(OutScrLayout);
        OutScrLayout->addWidget(scroll);
        QVBoxLayout* layout = new QVBoxLayout(widget);
        widget->setLayout(layout);

        //int index = 0;
        for(int i = 0; i < int(ListTicket.size()); i++)
        {
            string tmp = ListTicket[i]->toString();
            QCheckBox* newLabel = new QCheckBox(QString::fromStdString(tmp));
            layout->addWidget(newLabel);
            //newLabel->move(20, 20+300*(index++));
            checkbox.push_back(newLabel);
        }

        //Xu ly xoa ve khoi danh sach
        QPushButton *RemoveTicket = new QPushButton;
        RemoveTicket->setText("Xóa vé khỏi danh sách");
        layout->addWidget(RemoveTicket);
        if(connect(RemoveTicket, &QPushButton::clicked, this, &ClientMenu::RemoveFromListTicket))
           OutScreen->close();
        OutScreen->exec();
        delete OutScreen;
    }
}

void ClientMenu::RemoveFromListTicket()
{
    int index = 0;
    for(auto i:checkbox)
    {
        if(i->isChecked())
        {
            //Chuyển trạng thái ghê ngồi thành chưa đặt, vì các vị trí ghế ngồi được tạo trong ListTicket của Manager
            //do đó ta tiến hành lấy danh sách các vé ban đầu rồi đặt vị trí ghế là chưa đặt.
            vector<Ticket*> natureTicket = GetListTicket(Manager::listAirport,0,ListTicket[index]->getFlight().GetStartAiport().getNameAirport(),ListTicket[index]->getFlight().GetDestinateAiport().getNameAirport(),Date(1,1,1));
            for(auto j: natureTicket)
            {
                if(j->getFlight() == ListTicket[index]->getFlight() && j->getFlight().GetDepartureDate() == ListTicket[index]->getFlight().GetDepartureDate()){
                    if(*j->getSeat() == *ListTicket[index]->getSeat() && j->getSeat()->isBoss() == ListTicket[index]->getSeat()->isBoss())
                    {
                        j->getSeat()->setUnbooked();
                        break;
                    }
                }
            }
            ListTicket.erase(ListTicket.begin()+index);
        }
        else
            index++;
    }
    for(auto i: checkbox)
        delete i;
    checkbox.clear();
    QMessageBox OK;OK.setWindowTitle("OK!");
    OK.setText("Xóa vé thành công!");
    OK.exec();
    OutScreen->close();
}
void ClientMenu::on_purchaseButton_clicked()
{
    if(ListTicket.size() == 0)
        QMessageBox::critical(this, "Tài khoản chưa đặt vé", "Vui lòng đặt vé");
    else{
        long long totalPrice = 0;
        for(Ticket* i: ListTicket)
        {
            AdminAccount::addTicket(i);
            totalPrice += i->calculatePrice();
        }
        string totalPrice_Str = to_string(totalPrice);
        totalPrice_Str = "Tổng số tiền đã trả là: " + totalPrice_Str;
        totalPrice_Str += "\n Đặt vé thành công, cảm ơn bạn!";
        QMessageBox OK;OK.setWindowTitle("Xong"); OK.setText(QString::fromStdString(totalPrice_Str));
        OK.exec();

    }
}

