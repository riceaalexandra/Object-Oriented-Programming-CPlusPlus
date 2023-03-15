#include "Patrat.h"

Patrat::Patrat(Punct* A, Punct* B) {
	this->A = A;
	D.x = A->x;
	C.y = A->y;
	this->B = B;
	C.x = B->x;
	D.y = B->y;
	latura = Distanta2puncte(*A, C);
	float latura_verificare = Distanta2puncte(*A, D);
	if (latura_verificare != latura) {
		std::cout << "Nu e patrat";
		exit(-876);
	}
	else
	{
		std::cout << "Latura este" << latura;
	}
}

void Patrat::Arie() {
	std::cout << "\nAria patratului este";
	std::cout << pow(latura, 2);
	std::cout << "\n";
}

void Patrat::Perimetru() {
	std::cout << "\nPerimetru patratului este";
	std::cout << 4 * latura;
	std::cout << "\n";
}