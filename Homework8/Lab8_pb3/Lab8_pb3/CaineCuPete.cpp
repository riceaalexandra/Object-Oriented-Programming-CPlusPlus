#include "CaineCuPete.h"

CaineCuPete::CaineCuPete(std::string nume, float greutate, float inaltime, std::string culoare, int varsta, int pete) {
	this->nume = nume;
	this->greutate = greutate;
	this->inaltime = inaltime;
	this->culoare = culoare;
	this->varsta = varsta;
	this->pete = pete;
}

CaineCuPete::CaineCuPete() {
	this->nume = " ";
	this->greutate = 0.0;
	this->inaltime = 0.0;
	this->culoare = " ";
	this->varsta = 0;
	this->pete = 0;
}


void CaineCuPete::Afisare_Caine() {
	//std::cout << "Datele catelusului cu pete sunt: \n";
	Caine::Afisare_Caine();
	std::cout << "\n Numarul de pete: "<< this->pete;
}

void CaineCuPete::Citire_Caine() {
	Caine::Citire_Caine();
	std::cout << "Numarul de pete: ";
	std::cin >> pete;
}