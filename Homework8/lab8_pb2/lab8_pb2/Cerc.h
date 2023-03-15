#pragma once
#include "Punct.h"

class Cerc : public Punct
{
private:
	double raza;
public:
	Cerc();
	Cerc(double, double, double);
	~Cerc();
	void Arie();
	void Perimetru();
};

