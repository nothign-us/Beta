#ifndef SELECTFLIGHT_H
#define SELECTFLIGHT_H

#include <QWidget>
#include <QRadioButton>
#include <QGroupBox>
#include <QPushButton>
#include "Flight.h"
#include <vector>
#include <QString>
#include <QVBoxLayout>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui {
class SelectFlight;
}
QT_END_NAMESPACE
class SelectFlight : public QWidget
{
    Q_OBJECT

public:
    SelectFlight(vector<Flight> ListFlight, QWidget *parent = nullptr);
    ~SelectFlight();
    Flight getSelectedFlight();
private slots:
        void pushButtonHandler();

private:
    Flight SelectedFlight;
    Ui::SelectFlight *ui;
    vector<QRadioButton*> listRadioBtn;
    QGroupBox* grBox;
};

#endif // SELECTFLIGHT_H
