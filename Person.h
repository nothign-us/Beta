#pragma once
#include "Account.h"
#include <string>
#include "Date.h"

class Person {
private:
    std::string _fullName;
    Date _birth;
    std::string _address;
    std::string _nationality;
    std::string _ID;
    std::string _phoneNumber;

public:
};

// class Client: public Person {
// private:
//     ClientAccount _account;
// };

class Employee: public Person {
private:    
    EmployeeAccount _account;
};

class Admin: public Person {
private:
    AdminAccount _account;
};