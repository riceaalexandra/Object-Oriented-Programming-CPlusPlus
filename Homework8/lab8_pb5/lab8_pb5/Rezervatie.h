#pragma once
#include "Leu.h"
#include "Caprioara.h"
#include "Iepure.h"
#include "Urs.h"
#include "Vulpe.h"
class Rezervatie
{
public:
	void adaugare_animal();
	void afisare_animale();
private:
	int nr_lei = 0, nr_caprioare = 0, nr_iepuri = 0, nr_ursi = 0, nr_vulpi = 0;
	Leu leu[5];
	Caprioara caprioara[5];
	Iepure iepure[5];
	Urs urs[5];
	Vulpe vulpe[5];
};

