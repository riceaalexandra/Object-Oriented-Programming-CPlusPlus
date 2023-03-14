#pragma once
#include "bila.h"
#include "bilet.h"

class Agentie {
private:
	Bilet toate_biletele[400];
	Bila toate_bilele[49];
	Bila bile_castigatoare[6];
	int nr_bilete = 0;

public:
	Agentie();
	void extragere_6_bile();
    void cautare_castigator();
	void add_bilete(string nume);
};