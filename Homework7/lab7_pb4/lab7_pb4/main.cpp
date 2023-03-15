#include "Polinom.h"

void functie_pentru_mine() {
	/*TESTAREA FUNCTIILOR : =, +, -, *, AFISARE POLINOM, SETARE POLINOM
	Polinom p1(4);
	p1.Set_polinom();
	p1.Afisare_polinom();
	Polinom p2;
	p2 = p1;
	std::cout << "\n\n P2=P1 \n";
	p2.Afisare_polinom();
	Polinom p1(1), p2(2), p;
	std::cout << "Introduceti date p1:\n";
	p1.Set_polinom();
	std::cout << "Introduceti date p2:\n";
	p2.Set_polinom();
	std::cout << "\nP1 este:";
	p1.Afisare_polinom();
	std::cout << "\nP2 este";
	p2.Afisare_polinom();
	std::cout << "\nP1+P2: ";
	p = p1 + p2;
	p.Afisare_polinom();
	std::cout << "\nP1-P2: ";
	p = p1 - p2;
	p.Afisare_polinom();
	std::cout << "\nP1*P2: ";
	p = p1 * p2;
	p.Afisare_polinom();  
	Polinom p1(1);
	p1.Set_polinom();
	std::cout << "\nValoare pentru x = 3";
	std::cout << p1(3); 
	Polinom p1(3), p;
	p1.Set_polinom();
	p = p1 ^ 3;
	p.Afisare_polinom(); */
}

void functie() {
	Polinom p1, p2, p3;
	Polinom v2;
	std::cout << "----Polinom 1----\n";
	p1.Set_polinom();
	std::cout << "----Polinom 2----";
	p2.Set_polinom();
	std::cout << "----Polinom 3----";
	p3.Set_polinom();
	std::cout << "\nIntroduceti x-ul:";
	int x;
	std::cin >> x;
	Polinom inmultire, putere1, pol_final;
	float val1, val2, val3, val_final, inmultire_i;
	putere1 = p1 ^ 2;
	val1 = putere1(x);
	val2 = p2(x);
	val3 = p3(x);
	inmultire_i = val2 * val3;
	std::cout << "V1 = " << val1 - inmultire_i << std::endl;
	inmultire = p2 * p3;
	pol_final = putere1 - inmultire;
	val_final = pol_final(x);
	std::cout << "V2 = " << val_final;
	if (val_final == val1 - inmultire_i) {
		std::cout << "\nAM UN CREIER AMG";
	}
}

int main() {
	//functie_pentru_mine();
	functie();
}