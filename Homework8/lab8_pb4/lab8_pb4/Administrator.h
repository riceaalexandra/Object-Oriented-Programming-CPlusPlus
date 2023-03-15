#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include "Utilizator.h"
#include "Retea.h"
class Retea;
class Administrator : public Utilizator
{
public:
	Administrator() {
		nume = "";
		parola = 0;
	}
	void SetNume(string nume) {
		this->nume = nume;
	}
	void SetParola(int parola) {
		this->parola = parola;
	}
	Administrator(string, int);
	void DeconectareUtilizator(Retea* retea);
	void VizualizareUtilizatori(Retea* retea);
	void VizualizareAdmin(Retea);
	~Administrator() {

	}
};
#endif
