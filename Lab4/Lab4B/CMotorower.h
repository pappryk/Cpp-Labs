#pragma once
#include <string>
#include "CSilnik.h"
#include "CPojazd.h"
class CMotorower: public CSilnik, public CPojazd
{
public:
    CMotorower(CSilnik silnik, std::string kolor, double licznik);
protected:
    CSilnik silnik;
};
