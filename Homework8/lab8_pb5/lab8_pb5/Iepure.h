#pragma once
#include "Erbivor.h"
class Iepure : public Erbivor
{
private:
	int suprafata_minima;
public:
	Iepure() {
		suprafata_minima = 0;
	}
	void Citire_Animal();
	void Afisare_Animal();
};

