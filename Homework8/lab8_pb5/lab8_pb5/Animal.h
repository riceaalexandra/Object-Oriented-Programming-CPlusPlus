#pragma once
#include <iostream>

class Animal
{
public:
	virtual void Citire_Animal() = 0;
	virtual void Afisare_Animal() = 0;
protected:
	Animal() {
		nume = " ";
		data_aducerii = "";
		greutate = 0.0;
		hrana_preferata = "";
		cantitate_zi = 0;
	}
	std::string nume;
	std::string data_aducerii;
	float greutate;
	std::string hrana_preferata;
	int cantitate_zi;
};

