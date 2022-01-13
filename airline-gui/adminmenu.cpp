#include "adminmenu.h"
#include "ui_adminmenu.h"

#include "Account.h"
#include "Tokenizer.h"

AdminMenu::AdminMenu(std::string username, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminMenu)
{
    parent->setVisible(false);
    ui->setupUi(this);
    ui->usernameDisplay->setText(QString::fromStdString(username));
    this->setWindowTitle("Quản lý vé đã đặt và thanh toán thành công");
    ui->bookedTicketDisplay->setEditTriggers(QTableWidget::NoEditTriggers);

    ui->bookedTicketDisplay->setColumnCount(6);
    ui->bookedTicketDisplay->setRowCount(AdminAccount::GetNumberOfBookedTicket());
    ui->bookedTicketDisplay->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    QStringList headers;
    headers << "Sân bay đi" << "Sân bay đến" << "Ngày khởi hành" << "Giờ khởi hành" << "Tên chủ vé" << "Số điện thoại";
    ui->bookedTicketDisplay->setHorizontalHeaderLabels(headers);

    int nRow = AdminAccount::GetNumberOfBookedTicket();
    vector<string> bookedTicketsInfo = AdminAccount::GetBookedTicketInfo();
    for (int i = 0; i < nRow; i++) {
        vector<string> tokens = Tokenizer::Parse(bookedTicketsInfo[i], ",");
        for (int j = 0; j < int(tokens.size()); j++) {
            ui->bookedTicketDisplay->setItem(i, j, new QTableWidgetItem(QString::fromStdString(tokens[j])));
        }
    }

    ui->bookedTicketDisplay->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->bookedTicketDisplay->horizontalHeader()->setStretchLastSection(true);
}

AdminMenu::~AdminMenu()
{
    delete ui;
}
