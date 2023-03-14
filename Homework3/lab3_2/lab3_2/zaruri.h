#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;
class Zar {
private:
	int fata;
	int frecventa_fata[7] ={};
public:
	static int  pereche_frecventa[100][100];
	static int pereche[1000][1000];
	void aruncare_zar();
	int get_fata();
	void frecventa();
	static void maxim_aparitii();
	static void maxim_aparitii_consecutiv(int m[], int x[]);
	static void minim_aparitii();
};
