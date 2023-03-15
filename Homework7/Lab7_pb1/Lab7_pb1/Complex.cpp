#include "Complex.h"

Complex::Complex() {
	this->real = 0.0;
	this->imaginar = 0.0;
	//std::cout << "Apel constructor implicit\n";
}

Complex::Complex(long double real, long double imaginar) {
	this->real = real;
	this->imaginar = imaginar;
	//std::cout << "Apel constructor general \n";
}

Complex::Complex(const Complex &z) {
	this->real = z.real;
	this->imaginar = z.imaginar;
	//std::cout << "Apel constructor de copiere z(" << this->real << "," << this->imaginar << ")\n";
}

void Complex::Afisare_complex() {
	std::cout << "(" << this->real << ") + (" << this->imaginar << "i)\n";
}

Complex& Complex::operator=(const Complex& z) {
	if (this != &z) { // pentru a evita atribuirea de tipul z = z
		this->real = z.real;
		this->imaginar = z.imaginar;
	}
	//std::cout << "Apel operatorul de atribuire ( = )\n";
	return *this;
}

const Complex operator+(const Complex& z1, const Complex& z2) {
	return Complex(z1.real + z2.real, z1.imaginar + z2.imaginar);
}

const Complex Complex::operator-(const Complex& z) {
	Complex rezultat;
	rezultat.real = this->real - z.real;
	rezultat.imaginar = this->imaginar - z.imaginar;
	return rezultat;
}

const Complex operator/(const Complex& z1, const Complex& z2) {
	Complex rezultat;
	rezultat.real = ((z1.real * z2.real) + (z1.imaginar * z2.imaginar)) / ((z2.real * z2.real) + (z2.imaginar * z2.imaginar));
	rezultat.imaginar = ((z1.imaginar * z2.real) - (z1.real * z2.imaginar)) / ((z2.imaginar * z2.imaginar) + (z2.real * z2.real));
	return rezultat;
}

const Complex operator*(const Complex& z1, const Complex& z2) {
	Complex rezultat;
	rezultat.real = (z1.real * z2.real - z1.imaginar * z2.imaginar);
	rezultat.imaginar = (z1.real * z2.imaginar + z1.imaginar * z2.real);
	return rezultat;
}

const Complex operator^(const Complex& z1, const int putere) {
	Complex rezultat;
	if (putere == 0) { //daca puterea e 0, programul se va termina si imi va afisa 1
		rezultat.real = 1;
		rezultat.imaginar = 0;
		return rezultat;
	}
	else
	{
		rezultat.real = z1.real;
		rezultat.imaginar = z1.imaginar;
		if (putere == 1) { //daca puterea e 1, programul imi va afisa numarul complex
			return rezultat;
		}
		int copie_putere;
		if (putere < 0) { //puterea poate sa fie atat negativa, cat si poztiva
			copie_putere = -putere;  //daca puterea este negativa i va parcurge pana la -putere deoarece un numar ridicat la o putere negativa este 1/(x)^putere =>tot 
									// o sa trebuiasca sa ridic numarul la putere
		}
		else {
			copie_putere = putere;
		}
		for (int i = 1; i <= copie_putere-1; i++) { //am parcurs cu ajutorul lui i pana la putere-1 sau -putere-1 (dupa caz)
			rezultat = rezultat * z1;
		}
		if (putere >= 1) { //daca puterea este poztiva, am returnat rezultatul
			return rezultat;
		}
		else if (putere <= -1) { //daca putere este negativa, m-am ajutat de operatorul definit anterior (/) pentru a calcula 1/ ((a+bi)^putere)
			Complex intermediar(1, 0);
			return intermediar / rezultat;
		}
	}
}

Complex::~Complex() {
	//std::cout << "Apelat destructorul";
}

void Complex::Set_complex() {
	int real, imaginar;
	std::cout << "Introduceti partea reala: ";
	std::cin >> real;
	std::cout << "Introduceti partea imaginara: ";
	std::cin >> imaginar;
	this->real = real;
	this->imaginar = imaginar;
}

const long double operator~(const Complex& z) {
	Complex rezultat;
	rezultat.real = sqrt(z.real * z.real + z.imaginar * z.imaginar);
	rezultat.imaginar = 0;
	return rezultat.real;
}