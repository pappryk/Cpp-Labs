#include "Obserwator.h"

int ObserwatorLicznik::suma()
{
    return sum;
}


ObserwatorLicznik::ObserwatorLicznik()
{
    sum = 0;
}

void ObserwatorLicznik::odbierzDane(int wartosc)
{
    sum += wartosc;
}

void ObserwatorWypisywacz::odbierzDane(int wartosc)
{
    std::cout << " " << wartosc;
}