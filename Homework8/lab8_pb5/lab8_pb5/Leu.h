#pragma once
#include "Carnivor.h"
class Leu : public Carnivor
{
private:
	int temperatura_minima;
	std::string tara_provenienta;
public:
	Leu() {
		temperatura_minima = 0;
	}
	void Citire_Animal();
	void Afisare_Animal();
};

