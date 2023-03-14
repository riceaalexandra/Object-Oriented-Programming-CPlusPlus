#pragma once
#include <iostream>
#include <string>
using namespace std;

struct Client{
	string cont, nume, prenume, pin, valuta;
	float sold;
};

int Verificare_pin(Client *c, string& pin);
void Extragere_bani(Client *c);
void Transfer_bani(Client *c, Client *c2, int);
void Detalii_card(Client* c);
int Verifcare_cont(Client* c);
int Gasire_cont(Client* c, int, string & cont);
int pozitie(Client *c, int, string);
void Schimb(Client* c);