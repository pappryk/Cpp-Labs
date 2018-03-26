#include "CPojazd.h"

std::ostream& operator << (std::ostream& stream, const CPojazd& pojazd)
{
    stream << std::endl << "Liczba kol " << pojazd.kola << std::endl <<
              "Stan licznika " << pojazd.licznik << " [km]" << std::endl << "Kolor " << pojazd.kolor << std::endl;
    return stream;
}

CPojazd::CPojazd(int kola, int licznik, std::string kolor)
{
    this->kola = kola;
    this->licznik = licznik;
    this->kolor = kolor;
}

CPojazd::~CPojazd()
{

}
