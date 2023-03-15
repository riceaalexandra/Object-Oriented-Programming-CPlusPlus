#pragma once
#include <iostream>
#include <cmath>
class Polinom
{
private:
	float *coeficient;
	int grad;
public:
	Polinom(int = 0); //constructor general, care este explicit cu un parametru
	~Polinom(); //destructor
	float& operator[](int i); // supraincarcarea oepratorului [], supraincarcare OBLIGATORIE prin functie membra
	void Set_polinom(); //functie care seteaza gradul si coeficientii
	void Afisare_polinom(); //functie care afiseaza polinomul
	Polinom& operator=(const Polinom&); // supraincarcarea operatorului de atribuire, este NECESAR sa fie definit ca functie membru
	friend const Polinom operator+(const Polinom&, const Polinom&); // supraincarcarea operatorului +, este indicat sa fie definit ca functie prieten
	friend const Polinom operator-(const Polinom&, const Polinom&); /// supraincarcarea operatorului -
	friend Polinom operator*( Polinom&,  Polinom&); // supraincarcarea operatorului *
	const float operator()(const int = 0); // supraincarcarea operatorului !, care evalueaza o expresie
	friend Polinom operator^(Polinom&, int); // supraincarcarea operatorului *
};

