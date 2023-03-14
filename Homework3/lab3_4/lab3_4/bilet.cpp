#include "bilet.h"

Bilet::Bilet(string nume) {
	this->nume = nume;
	this->init();
	this->nr_alese_bilet1();
	this->nr_alese_bilet2();
	this->nr_alese_bilet3();
}
void Bilet::init() {
	for (int i = 1; i <= 49; i++) {
		this->bile_bilet[i].set_valoare(i);
		this->bile_bilet[i].set_stare(0);
	}
}
void Bilet::reset() {
	for (int i = 1; i <= 49; i++) {
		this->bile_bilet[i].set_valoare(i);
		this->bile_bilet[i].set_stare(0);
	}
}
void Bilet::nr_alese_bilet1() {
	//srand(time(NULL));
	cout << "Numerele de pe primul bilet al jucatorului: ";
	for (int i = 0; i < 6; i++) {
		int random = rand() % 49 + 1;
		while (this->bile_bilet[random].get_stare() == 1) {
			random = rand() % 49 + 1;
		}
		this->bile_extrase1[i].set_valoare(random);
		cout << bile_extrase1[i].get_valoare() << " " ;
		this->bile_extrase1[i].set_stare(1);
		this->bile_bilet[random].set_stare(1);
	}
	cout << endl;
}

void Bilet::nr_alese_bilet2() {
	//srand(time(NULL));
	this->reset();
	cout << endl;
	cout << "Numerele de pe al doilea bilet al jucatorului: ";
	for (int i = 0; i < 6; i++) {
		int random = rand() % 49 + 1;
		while (this->bile_bilet[random].get_stare() == 1) {
			random = rand() % 49 + 1;
		}
		this->bile_extrase2[i].set_valoare(random);
		cout << bile_extrase2[i].get_valoare() << " ";
		this->bile_extrase2[i].set_stare(1);
		this->bile_bilet[random].set_stare(1);
	}
}
void Bilet::nr_alese_bilet3() {
	//srand(time(NULL));
	cout << endl;
	this->reset();
	cout << "Numerele de pe al treilea bilet al jucatorului: ";
	for (int i = 0; i < 6; i++) {
		int random = rand() % 49 + 1;
		while (this->bile_bilet[random].get_stare() == 1) {
			random = rand() % 49 + 1;
		}
		this->bile_extrase3[i].set_valoare(random);
		cout << bile_extrase3[i].get_valoare()<<" ";
		this->bile_extrase3[i].set_stare(1);
		this->bile_bilet[random].set_stare(1);
	}
	cout << endl;
}