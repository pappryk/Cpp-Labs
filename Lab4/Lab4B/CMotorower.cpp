#include "CMotorower.h"

CMotorower::CMotorower(CSilnik silnik, std::string kolor, double licznik): CPojazd(2, licznik, kolor)
{
    this->typPojazdu = "Ogolny typ motorower";
    this->silnik = silnik;
}
