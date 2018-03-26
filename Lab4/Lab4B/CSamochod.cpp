#include "CSamochod.h"

CSamochod::CSamochod(CSilnik silnik, std::string kolor, double licznik) : CPojazd(4, licznik, kolor)
{
    this->typPojazdu = "Ogolny typ samochod";    
    this->silnik = silnik;
}