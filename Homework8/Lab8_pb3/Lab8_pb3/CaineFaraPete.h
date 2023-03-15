#pragma once
#include "Caine.h"

class CaineFaraPete : public Caine
{

public:
	CaineFaraPete(std::string nume, float greutate, float inaltime, std::string culoare, int varsta);
	CaineFaraPete();
	void Afisare_Caine();
	void Citire_Caine();
};

