#pragma once
#include "Caine.h"

class CaineCuPete : public Caine
{
private:
	int pete;
public:
	CaineCuPete(std::string nume, float greutate, float inaltime, std::string culoare, int varsta, int pete);
	CaineCuPete();
	void Afisare_Caine();
	void Citire_Caine();
};

