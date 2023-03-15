#pragma once
#include <iostream>

class Fractionar
{
private:
	int numitor, numarator;
public:
	Fractionar(int = 0, int = 1); //constructor general, care este explicit cu toti parametrii si poate fi apelat oricum
	~Fractionar(); //destructor
	void Set_fractionar(); //functie care seteaza numitorul si numaratorul
	void Afisare_fractionar(); //functie care afiseaza numitorul si numaratorul
	Fractionar& operator=(const Fractionar&); // supraincarcarea operatorului de atribuire, este NECESAR sa fie definit ca functie membru
	friend const Fractionar operator+(const Fractionar&, const Fractionar&); // supraincarcarea operatorului +, este indicat sa fie definit ca functie prieten
	friend const Fractionar operator-(const Fractionar&, const Fractionar&); /// supraincarcarea operatorului -
	friend const Fractionar operator*(const Fractionar&, const Fractionar&); // supraincarcarea operatorului *
	friend const Fractionar operator/(const Fractionar&, const Fractionar&); // supraincarcarea operatorului /
	friend const Fractionar operator!(const Fractionar&); // supraincarcarea operatorului !, care simplifica o fractie
};

int cmmdc(int a, int b); //returneaza cmmdc-ul pentru a ajuta la simplificarea fractiei si la aflarea solutiei