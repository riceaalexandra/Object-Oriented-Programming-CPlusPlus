#pragma once
#include "Animal.h"
class Erbivor : virtual public Animal
{
public: 
	Erbivor() {
		hrana_preferata = "Iarba";
	}
};

