#pragma once
#include "Carnivor.h"
class Vulpe : public Carnivor
{
private:
	int temperatura_maxima;
	std::string tip;
public:
	Vulpe() {
		temperatura_maxima = 0;
	}
	void Citire_Animal();
	void Afisare_Animal();
};

