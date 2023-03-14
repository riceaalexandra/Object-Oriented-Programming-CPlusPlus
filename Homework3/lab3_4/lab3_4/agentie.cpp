 #include "bila.h"
#include "agentie.h"
#include "bilet.h"
Agentie::Agentie() {
	for (int i = 1; i <= 49; i++) {
		this->toate_bilele[i].set_valoare(i);
		this->toate_bilele[i].set_stare(0);
	}
}

void Agentie::add_bilete(string nume) {
	this->toate_biletele[this->nr_bilete] = Bilet(nume);
	this->nr_bilete++;
}

void Agentie::extragere_6_bile() {
	srand(time(NULL));
	cout << "Bilele castigatoare: ";
	for (int i = 0; i < 6; i++) {
		int random = rand() % 49 + 1;
		while (this->toate_bilele[random].get_stare() == 1) {
			random = rand() % 49 + 1;
		}
		this->bile_castigatoare[i].set_valoare(random);
		cout << bile_castigatoare[i].get_valoare() << " ";
		this->bile_castigatoare[i].set_stare(1);
		this->toate_bilele[random].set_stare(1);
	}
}

void Agentie::cautare_castigator() {
	bool castigator = 0;
	for (int k = 0; k < this->nr_bilete; k++) {
		//Bila* p=toate_biletele[k].get_1();
		int nr_castigatoare1 = 0, nr_castigatoare2 = 0, nr_castigatoare3 = 0;
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 6; j++) {
				if (bile_castigatoare[i].get_valoare() == toate_biletele[k].get_1()[j].get_valoare()) {
					nr_castigatoare1++;
				}
				if (bile_castigatoare[i].get_valoare() == toate_biletele[k].get_2()[j].get_valoare()) {
					nr_castigatoare2++;
				}
				if (bile_castigatoare[i].get_valoare() == toate_biletele[k].get_3()[j].get_valoare()) {
					nr_castigatoare3++;
				}
			}
		}
		if (nr_castigatoare1 == 6 || nr_castigatoare2 == 6 || nr_castigatoare3 == 6) {
			cout << "Castigatorul este"<<toate_biletele[k].get_nume()<<"cu 6 numere.";
			castigator = 1;
		}
		if (nr_castigatoare1 == 5 || nr_castigatoare2 == 5 || nr_castigatoare3 == 5) {
			cout << "Castigatorul este" << toate_biletele[k].get_nume()<<"cu 5 numere.";
			castigator = 1;
		}
	}
	if (castigator == 0) {
		cout << "Nu a castigat nimeni";
	}
}