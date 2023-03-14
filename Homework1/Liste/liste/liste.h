#pragma once
#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

struct Concurent {
	int nota;
	string nume;
	string prenume;
	Concurent* urm;
};

void Inserare_concurent(Concurent** c1);
void Sortare_lista_nota(Concurent *c1);
void Sortare_lista_alfabetic(Concurent* c1);
bool Cautare_lista(Concurent *c1, string, string);
void Admisi(Concurent *c1);
void Respinsi(Concurent* c1);
void Afisare_lista(Concurent *head);
void Interschimbare(Concurent* head, Concurent* urm);
int compara_string(string, string);