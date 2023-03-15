#include "CaineFaraPete.h"

CaineFaraPete::CaineFaraPete(std::string nume, float greutate, float inaltime, std::string culoare, int varsta) {
	this->nume = nume;
	this->greutate = greutate;
	this->inaltime = inaltime;
	this->culoare = culoare;
	this->varsta = varsta;
}

CaineFaraPete::CaineFaraPete() {
	this->nume = " " ;
	this->greutate = 0.0;
	this->inaltime = 0.0;
	this->culoare = " ";
	this->varsta = 0;
}

void CaineFaraPete::Afisare_Caine() {
	//std::cout << "Datele catelusului cu pete sunt: \n";
	Caine::Afisare_Caine();
}

void CaineFaraPete::Citire_Caine() {
	Caine::Citire_Caine();
}