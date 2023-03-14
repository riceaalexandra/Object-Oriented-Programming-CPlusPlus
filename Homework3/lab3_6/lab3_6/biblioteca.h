#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "isbn.h"
using namespace std;

#define CARTI 6

class Carte
{
private:
	string titlu;
	string autor;
	string editura;
	Isbn isbn;
	string an;
	string pret;
public:

	void creare_carte(string title, string edit, string isbn,string an, string pret);
	
	string get_titlu();
	string get_editura();
	string get_autor();
	Isbn get_isbn();
	string get_an();
	string get_pret();

	void set_titlu(string titlu);
	void set_editura(string editura);
	void set_autor(string autor);
	void set_isbn(string isbn);
	void set_an(string an);
	void set_pret(string pret);

};

void creare_biblioteca(Carte *c, ifstream& fin);
void afisare_biblioteca(Carte* carte);
int cautare_titlu(Carte *c, string);
int cautare_isbn(Carte* c, string);
int cautare_editura(Carte* c, string);
int cautare_autor(Carte* c, string);