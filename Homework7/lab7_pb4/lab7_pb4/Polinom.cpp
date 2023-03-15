#include "Polinom.h"

Polinom::Polinom(int grad) {
	this->grad = grad;
	coeficient = new float[grad+2];
	for (int i = 0; i <= this->grad; i++) {
		this->coeficient[i] = 0;
	}
}

Polinom::~Polinom() {
	//delete[] coeficient;
	coeficient = 0;
	grad = 0;
}

float &Polinom::operator[](int i) {
	if (i >= 0 && i < grad) {
		return this->coeficient[i];
	}
	else {
		std::cout << "Eroare indice: " << i;
		exit(1);
	}
}

void Polinom::Set_polinom() {
	if (grad == 0) {
		std::cout << "Introduceti gradul polinomului: ";
		std::cin >> grad;
		this->grad = grad;
		coeficient = new float[grad+2];
	}
	for (int i = 0; i <= this->grad; i++) {
		std::cout << "Coeficientul lui x^" << i <<": ";
		std::cin >> coeficient[i];
	}
	std::cout << std::endl;
}

void Polinom::Afisare_polinom() {
	std::cout << "\nPolinomul: ";
	for (int i = 0; i <= grad; i++) {
		std::cout << "(";
		std::cout << coeficient[i];
		std::cout << ")*X^" << i;
		if (grad != i) {
			std::cout << "+";
		}
	}
}

Polinom& Polinom::operator=(const Polinom& p) {
	coeficient = new float[p.grad+2];
	if (this != &p) { // pentru a evita atribuirea de tipul z = z
		this->grad = p.grad;
		for (int i = 0; i <= grad; i++) {
			this->coeficient[i] = p.coeficient[i];
		}
	}
	//std::cout << "Apel operatorul de atribuire ( = )\n";
	return *this;
}

Polinom operator*(Polinom& p1, Polinom& p2) {
	Polinom rezultat(p1.grad + p2.grad);
	for (int i = 0; i <= p1.grad; i++) {
		for (int j = 0; j <= p2.grad; j++) {
			rezultat.coeficient[i + j] = rezultat.coeficient[i + j] + p1.coeficient[i] * p2.coeficient[j];
		}
	}
	return rezultat;
}

const Polinom operator+(const Polinom& p1, const Polinom& p2) {
	Polinom rezultat(std::max(p1.grad, p2.grad));
	for (int i = 0; i <= p1.grad; i++)
		rezultat.coeficient[i] = p1.coeficient[i];
	for (int i = 0; i <= p2.grad; i++)
		rezultat.coeficient[i] = rezultat.coeficient[i] + p2.coeficient[i];
	return rezultat;
}

const Polinom operator-(const Polinom& p1, const Polinom& p2) {
	Polinom rezultat(std::max(p1.grad, p2.grad));
	for (int i = 0; i <= p1.grad; i++)
		rezultat.coeficient[i] = rezultat.coeficient[i] + p1.coeficient[i];
	for (int i = 0; i <= p2.grad; i++)
		rezultat.coeficient[i] = rezultat.coeficient[i] - p2.coeficient[i];
	return rezultat;
}

const float Polinom::operator()(const int valoare) {
	float suma = 0;
	for (int i = 0; i <= grad; i++) {
		suma = suma + coeficient[i] * pow(valoare, i);
	}
	return suma;
}

Polinom operator^(Polinom& p, int putere) {
	Polinom rezultat(0);
	for (int i = 0; i <= p.grad; i++) {
		rezultat.coeficient[i] = 1;
	}
	for (int i = 1; i <= putere; i++) {
		rezultat = rezultat * p;
	}
	return rezultat;
}