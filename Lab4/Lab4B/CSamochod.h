#pragma once
#include <string>
#include "CPojazd.h"
#include "CSilnik.h"
class CSamochod : public CPojazd, public CSilnik
{
public:
    CSamochod(CSilnik silnik, std::string kolor, double licznik);
protected:
    CSilnik silnik;
};
