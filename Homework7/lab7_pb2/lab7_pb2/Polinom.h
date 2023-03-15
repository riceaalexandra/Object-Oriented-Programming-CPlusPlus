#include "Fractionar.h"

class Polinom
{
private:
	Fractionar fractii[100];
	int nr_fractii;
public:
	Polinom(int nr_functii = 0);
	~Polinom();
	void Set_polinom();
	void Afisare_polinom();
};