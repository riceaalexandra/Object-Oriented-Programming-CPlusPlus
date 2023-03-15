#pragma once
#include <iostream>

class Caine //clasa abstracta, contine cel putin o functie virtuala pura, nu poate fi instantiata
{			//desi nu se pot crea obiecte ale unei clase abstracte, se pot utilizia ointeri si referinte la o asemenea clasa
			//partea comuna dintr-o functie virtuala pura, pot sa o accesez in clasele derivate
			//functiile pur virtuale trebuie instantiate in clasele care deriveaza
			// in caz contrar, clasa derivata va fi considerata si ea o clasa abstracta

protected:
	std::string nume, culoare;
	float inaltime, greutate;
	int varsta;
	Caine() {};
public:
	virtual void Afisare_Caine() = 0; //utilitatea functiilor pur virtuale(=0) este de a nu uita implementarea functiei in clasele derivate
	virtual void Citire_Caine() = 0;
};