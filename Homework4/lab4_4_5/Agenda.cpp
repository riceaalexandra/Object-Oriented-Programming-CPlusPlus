#include "Agenda.h"

void Agenda::adauga_eveniment(Event event) {
	this->evenimente[this->numar_evenimente] = event;
		this->numar_evenimente++;
}

void Agenda::afiseaza_evenimente() {
	for (int i = 0; i < this->numar_evenimente; i++) {
		this->evenimente[i].print();
	}
}

