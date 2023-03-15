#pragma once
#include "Erbivor.h"
class Caprioara : public Erbivor
{
private:
	int numar_pui;
public:
	Caprioara() {
		numar_pui = 0;
	}
	void Citire_Animal();
	void Afisare_Animal();
};

