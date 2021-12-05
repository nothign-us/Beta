#include "Address.h"

Address::Address(){
    _nation = "";
    _province = "";
    _district = "";
    _town = "";
    _street = "";
}

Address::Address(const Address &srcAdd)
{
    _nation = srcAdd._nation;
    _province = srcAdd._province;
    _district = srcAdd._district;
    _town = srcAdd._town;
    _street = srcAdd._street;
}
Address::~Address(){;}