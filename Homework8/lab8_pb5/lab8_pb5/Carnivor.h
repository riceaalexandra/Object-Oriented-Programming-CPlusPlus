#pragma once
#include "Animal.h"
class Carnivor : virtual public Animal
{
public:
	Carnivor() {
		hrana_preferata = "carne";
	}
};

