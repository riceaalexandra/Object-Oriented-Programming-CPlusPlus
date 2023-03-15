#include "Punct.h"

Punct::Punct() { //constructor implicit
	this->x = 0;
	this->y = 0;
}
Punct::Punct(double x, double y) {//cnstructor cu toti parametrii
	this->x = x;
	this->y = y;
}

Punct::~Punct() { //destructor

}

void Punct::CitirePunct() {
	std::cout << "Introduceti coordonata lui x: ";
	std::cin >> x;
	std::cout << "Introduceti coordonata lui y: ";
	std::cin >> y;
}

void Punct::Perimetru() {
	std::cout << "\nPerimetru este: ";
}

void Punct::Arie() {
	std::cout << "Aria este: ";
}
double Distanta2puncte(Punct& p1, Punct& p2) {
	double lungime;
	lungime = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
	return lungime;
}