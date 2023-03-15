#include "Caine.h"

void Caine::Afisare_Caine() {
	//std::cout << "Datele catelusului cu pete sunt: \n";
	std::cout << "\nNume: " << this->nume;
	std::cout << "\nVarsta: " << this->varsta;
	std::cout << "\nInaltime: " << this->inaltime;
	std::cout << "\nGreutate: " << this->greutate;
	std::cout << "\nCuloare: " << this->culoare;
}

void Caine::Citire_Caine() {
	std::cout << "\n\nIntroduceti datele catelusului: \n";
	std::cout << "Nume: ";
	std::cin >> nume;
	std::cout << "Varsta: ";
	std::cin >> varsta;
	std::cout << "Inaltime: ";
	std::cin >> inaltime;
	std::cout << "Greutate: ";
	std::cin >> greutate;
	std::cout << "Culoare: ";
	std::cin >> culoare;
}