#pragma once
#include <iostream>

// klasa abstrakcyjna - nie mozna tworzyc z niej obiektow
class Obserwator
{
public:
    virtual void odbierzDane(int wartosc) = 0;
protected:
};


// klasa majaca na celu wypisywanie
class ObserwatorWypisywacz: public Obserwator
{
public:
private:
    // wypisuje otrzymane dane
    void odbierzDane(int wartosc);
};


// klasa przechowujaca sume
class ObserwatorLicznik : public Obserwator
{
public:
    // zwraca sume
    int suma();
    // przygotowuje obiekt do uzycia
    ObserwatorLicznik();
private:
    int sum;
    // dodaje wartosc do sumy
    void odbierzDane(int wartosc);    
};

