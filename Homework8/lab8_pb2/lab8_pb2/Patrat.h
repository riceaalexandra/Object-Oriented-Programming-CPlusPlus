#pragma once
#include "Dreptunghi.h"

class Patrat
{
private:
	Punct* A, * B;
	Punct C, D;
	float latura;
public:

	Patrat(Punct* A, Punct* B);
	void Arie();
	void Perimetru();
};

