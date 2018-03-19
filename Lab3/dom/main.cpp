#include <iostream>

class A 
{ 
 public: 
    virtual void wyswietl(void) { std::cout << "Klasa A" << std::endl; } //pierwsza definicja
}; 

class B : public A 
{ 
 public: 
    void wyswietl(void) { std::cout << "Klasa B" << std::endl; }  //druga definicja 
}; 

void pokaz(A* a)
{
	a->wyswietl();
}


int main()
{	
	A* a = new A;
	B* b = new B;

	a->wyswietl();	//użyta zostanie funkcja A::wyswietl()
	b->wyswietl();	//użyta zostanie funkcja B::wyswietl()

	pokaz(a);	//użyta zostanie funkcja A::wyswietl()
	pokaz(b);	//użyta zostanie funkcja B::wyswietl()
    return 0;
}