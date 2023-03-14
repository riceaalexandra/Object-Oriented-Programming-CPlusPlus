#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;
class Pachet {
private:
	char suita;//t,n,r,c
	int valoare;
	int stare;
public:
	void creare_carte(int valoare, char suita, bool stare);
	
	int get_valoare();
	char get_suita();
	bool get_stare();

	void set_valoare(int valoare);
	void set_suita(char suita);
	void set_stare(int stare);
};
void creare_pachet(Pachet *c);
void afisare_pachet(Pachet* c);
void joc_21(Pachet *c);