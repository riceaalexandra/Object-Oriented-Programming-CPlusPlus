#include "Fractionar.h"
#include "Polinom.h"

void f_pentru_mine() {
	/* ---Testare clasa Fractionar-----
	Fractionar f1(24, 8), f2(30, 16), f;
	std::cout << "F1 este: ";
	f1.Afisare_fractionar();
	std::cout << "F2 este: ";
	f2.Afisare_fractionar();
	std::cout << "F1+F2 este: ";
	f = f1 + f2;
	f = !f;
	f.Afisare_fractionar();
	std::cout << "F1-F2 este: ";
	f = f1 - f2;
	f = !f;
	f.Afisare_fractionar();
	std::cout << "F1*F2 este: ";
	f = f1 * f2;
	f = !f;
	f.Afisare_fractionar();
	std::cout << "F1/F2 este: ";
	f = f1 / f2;
	f = !f;
	f.Afisare_fractionar();
	----Testare functia cmmdc---
	std::cout<<cmmdc(5, 7);*/
	Polinom p;
	p.Set_polinom();
	p.Afisare_polinom();

}

int main() {
	f_pentru_mine();
}