#include "bila.h"

void Bila::set_valoare(int numar_asociat)
{
	this->numar_asociat=numar_asociat;
}

void Bila::set_stare(bool stare)
{
	this->stare=stare;
}

int Bila::get_valoare() {
	return this->numar_asociat;
}

bool Bila::get_stare() {
	return this->stare;
}

