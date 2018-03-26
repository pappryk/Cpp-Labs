#pragma once
#include <string>
#include <iostream>

class CPojazd
{
public:
    CPojazd(){}
    CPojazd(int kola, int licznik, std::string kolor);
    ~CPojazd();
    friend std::ostream& operator << (std::ostream& stream, const CPojazd& pojazd);
protected:
    int kola;
    int licznik;
    std::string kolor;
    std::string typPojazdu;
};

    std::ostream& operator << (std::ostream& stream, const CPojazd& pojazd);
