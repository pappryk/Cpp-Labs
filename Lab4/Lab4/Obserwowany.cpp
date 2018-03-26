#include "Obserwowany.h"

void Obserwowany::noweDaneNadeszly(int value)
{
    for(int i = 0; i < index; i++)
    {
        obsArray[i]->odbierzDane(value);
    }
}

void Obserwowany::dodajObserwatora(Obserwator* obs)
{
    obsArray[index] = obs;
    index++;
}






Obserwowany::Obserwowany()
{
    index = 0;
    obsArray = new Obserwator*[10];
}



Obserwowany::~Obserwowany()
{

    delete [] obsArray;
}