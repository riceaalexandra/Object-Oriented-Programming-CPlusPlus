#pragma once
#include "Event.h"

class Agenda {
	Event evenimente[100];
	int numar_evenimente;
public:
	Agenda() {
		this->numar_evenimente = 0;
	}
	void adauga_eveniment(Event event);
	void afiseaza_evenimente();
	int get_numar_evenimente() { return this->numar_evenimente; }
	Event* get_evenimente() { return this->evenimente; }
};