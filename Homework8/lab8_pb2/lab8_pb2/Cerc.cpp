#include "Cerc.h"

#define PI 3.14159265359

Cerc::~Cerc() {
	//Destructorului cercului
}

Cerc::Cerc(double x, double y, double raza) : Punct{ x, y } { //constructor cu parametrii, consider punctul mostenit ca fiind centrul cercului
//	std::cout << "Centrul cercului este: " << x<< " " << y<<std::endl;
	this->raza = raza;
}

Cerc::Cerc() :Punct() { //constructor implicit, fara parametrii
	this->raza = 0;
}

void Cerc::Arie() {
	Punct::Arie();
	std::cout << PI * PI * raza;
}

void Cerc::Perimetru() {
	Punct::Perimetru();
	std::cout << 2 * PI * raza;
}
