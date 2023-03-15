#include "Fractionar.h"

Fractionar::Fractionar(int numarator, int numitor) {
	this->numitor = numitor;
	this->numarator = numarator;
}

Fractionar::~Fractionar() {
	//std::cout << "Destructorul s-a apelat";
}

void Fractionar::Afisare_fractionar() {
	std::cout << this->numarator << "/" << this->numitor;
}

void Fractionar::Set_fractionar() {
	std::cout << "Introduceti numaratorul: ";
	std::cin >> numarator;
	this->numarator = numarator;
	std::cout << "Introduceti numitorul: ";
	std::cin >> numitor;
	this->numitor = numitor;
}

Fractionar& Fractionar::operator=(const Fractionar& f) {
	if (this != &f) { // pentru a evita atribuirea de tipul z = z
		this->numarator = f.numarator;
		this->numitor = f.numitor;
	}
	//std::cout << "Apel operatorul de atribuire ( = )\n";
	return *this;
}

const Fractionar operator+(const Fractionar& f1, const Fractionar& f2) {
	Fractionar rezultat;
	rezultat.numarator = f1.numarator * f2.numitor + f2.numarator * f1.numitor;
	rezultat.numitor = f1.numitor * f2.numitor;
	return rezultat;
}

const Fractionar operator-(const Fractionar& f1, const Fractionar& f2) {
	Fractionar rezultat;
	rezultat.numarator = f1.numarator * f2.numitor - f2.numarator * f1.numitor;
	rezultat.numitor = f1.numitor * f2.numitor;
	return rezultat;
}

const Fractionar operator/(const Fractionar& f1, const Fractionar& f2) {
	Fractionar rezultat;
	rezultat.numarator = f1.numarator * f2.numitor;
	rezultat.numitor = f2.numarator * f1.numitor;
	return rezultat;
}

const Fractionar operator*(const Fractionar& f1, const Fractionar& f2) {
	Fractionar rezultat;
	rezultat.numarator = f1.numarator * f2.numarator;
	rezultat.numitor = f2.numitor * f1.numitor;
	return rezultat;
}

int cmmdc(int a, int b) {
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

const Fractionar operator!(const Fractionar& f) {
	Fractionar rezultat;
	int simplificator = cmmdc(f.numarator, f.numitor);
	rezultat.numarator = f.numarator / simplificator;
	rezultat.numitor = f.numitor / simplificator;
	return rezultat;
}