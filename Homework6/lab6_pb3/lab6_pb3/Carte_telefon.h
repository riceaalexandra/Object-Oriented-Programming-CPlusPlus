#pragma once
#include <iostream>

using namespace std;
class Carte_telefon {
private:
	struct node {
		string nume;
		string adresa;
		string numar_telefon;
		node* next;
		node(string nume, string adresa, string numar_telefon) : nume(nume), adresa(adresa), numar_telefon(numar_telefon), next(0) { }
		~node() { next = 0; }
	};
public:
	node* head;
	Carte_telefon() { head = 0; }
	~Carte_telefon() { head = 0; }
	void Add(string nume, string adresa, string numar_telefon);
	void Print(node *node);
	void Cautare_lista(node *node,string nume);

};