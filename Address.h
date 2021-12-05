#include <string>

class Address
{
private:
    std::string _nation;
    std::string _province;
    std::string _district;
    std::string _town;
    std::string _street;

public:
    Address();
    Address(const Address& srcAdd);
    ~Address();
};

