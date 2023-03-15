#include "Administrator.h"

Administrator::Administrator(string nume, int parola) {
	this->nume = nume;
	this->parola = parola;
}

void Administrator::DeconectareUtilizator(Retea* retea) {
	retea->DeconectareUtilizator();
}

void Administrator::VizualizareUtilizatori(Retea* retea) {
	retea->VizulaizareUtilizatori();
}

void Administrator::VizualizareAdmin(Retea retea) {
	retea.VizulaizareAdmin();
}