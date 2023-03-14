#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;
static int frecventa_fata[6], pereche_frecventa[100][100], pereche[1000][1000];

class Zar {
private:
	int fata;
public:
	void aruncare_zar();
	int get_fata();
};

void maxim_aparitii(int m[][100]);
void maxim_aparitii_consecutiv(int m[], int x[]);
void minim_aparitii(int m[][100]);
void frecventa(int m[]);
void perechi_aparitii(int pereche_frecventa[][100]);