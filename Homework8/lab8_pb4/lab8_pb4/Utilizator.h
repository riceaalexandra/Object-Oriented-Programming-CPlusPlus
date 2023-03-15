#ifndef UTILIZATOR_H
#define UTILIZATOR_H

#include <iostream>
#include <string>
using namespace std;

class Utilizator
{
public:
	Utilizator();
	Utilizator(string, int);
	void SetNume(string nume) {
		this->nume = nume;
	}
	void SetParola(int parola) {
		this->parola = parola;
	}
	string GetNume() {
		return this->nume;
	}
	int GetParola() {
		return this->parola;
	}
	~Utilizator();
protected:
	string nume;
	int parola;
};

#endif

