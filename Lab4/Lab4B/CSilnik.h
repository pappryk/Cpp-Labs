#pragma once
#include <string>
class CSilnik
{
public:
    CSilnik(int KM, double pojemnosc, std::string paliwo);
    CSilnik(){}
protected:
    int KM;
    double pojemnosc;
    std::string paliwo;
};
