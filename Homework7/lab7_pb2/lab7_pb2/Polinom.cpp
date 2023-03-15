#include "Polinom.h"

Polinom::Polinom(int nr_fractii) {
	this->nr_fractii = nr_fractii;
}

Polinom::~Polinom() {

}

void Polinom::Set_polinom() {
	std::cout << "Introduceti gradul polinomului: ";
	std::cin >> nr_fractii;
	for (int i = 0; i < nr_fractii; i++) {
		std::cout << "Coeficientul lui x^" << i<<std::endl;
		fractii[i].Set_fractionar();
		std::cout << std::endl;
	}
}

void Polinom::Afisare_polinom() {
	std::cout << "\nPolinomul: ";
	for (int i = 0; i < nr_fractii; i++) {
		std::cout << "(";
		fractii[i].Afisare_fractionar();
		std::cout << ")*X^" << i;
		if (nr_fractii -1 != i) {
			std::cout << "+";
		}
	}
	
}