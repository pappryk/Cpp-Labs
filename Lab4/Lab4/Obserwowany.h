#pragma once
#include <iostream>
#include "Obserwator.h"


// 
class Obserwowany
{
public:
    // dodaje jakiegos obserwatora i nie usuwa go
    void dodajObserwatora(Obserwator* obs);
    // przekazuje dane obserwatorowi
    void noweDaneNadeszly(int value);
    // przygotowuje obiekt do uzytku
    Obserwowany();
    ~Obserwowany();
protected:
    // przechowuje obserwatorow
    Obserwator** obsArray;
    // iterator
    int index;  
};
