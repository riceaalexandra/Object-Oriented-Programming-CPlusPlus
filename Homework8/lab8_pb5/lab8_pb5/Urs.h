#pragma once
#include "Carnivor.h"
#include "Erbivor.h"

class Urs : public Carnivor, public Erbivor
{
private:
	std::string inceput_hibernare;
	std::string sfarsit_hibernare;
public:
	Urs() {

	}
	void Citire_Animal();
	void Afisare_Animal();
};

