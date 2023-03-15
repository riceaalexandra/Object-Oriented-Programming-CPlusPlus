#include "Dreptunghi.h"

Dreptunghi::Dreptunghi(Punct *A, Punct *B) {
	this->A = A;
	D.x = A->x;
	C.y = A->y;
	this->B = B;
	C.x = B->x;
	D.y = B->y;
	lungime = Distanta2puncte(*A, C);
	std::cout << "Lungimea este: "<< lungime << "\n";
	latime = Distanta2puncte(*A, D);
	std::cout <<"Latimea este"<< latime;
}

void Dreptunghi::Arie() {
	std::cout << "\nAria este: " << lungime * latime;
}
void Dreptunghi::Perimetru() {
	std::cout << "\nPerimetru este: " << 2 * (lungime + latime);
}