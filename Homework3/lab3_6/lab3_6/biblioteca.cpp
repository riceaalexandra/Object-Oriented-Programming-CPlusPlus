#include "biblioteca.h"

void Carte::creare_carte(string titlu, string editura, string isbn, string an, string pret)
{
	this->titlu = titlu;
	this->autor = autor;
	this->editura = editura;
	this->isbn = Isbn(isbn);
	this->an = an;
	this->pret = pret;
}

void Carte::set_titlu(string titlu)
{
	this->titlu= titlu;
}

void Carte::set_editura(string editura)
{
	this->editura= editura;
}

void Carte::set_isbn(string isbn)
{
	this->isbn=Isbn(isbn);
}

void Carte::set_autor(string autor)
{
	this->autor=autor;
}

void Carte::set_an(string an)
{
	this->an= an;
}

void Carte::set_pret(string pret)
{
	this->pret= pret;
}

string Carte::get_an() {
	return this->an;
}

string Carte::get_pret() {
	return this->pret;
}

string Carte::get_autor() {
	return this->autor;
}

string Carte::get_editura() {
	return this->editura;
}

Isbn Carte::get_isbn() {
	return this->isbn;
}

string Carte::get_titlu() {
	return this->titlu;
}

void creare_biblioteca(Carte carte[], ifstream& fin) {
	fin.open("carti.txt", ios::in);
	//fin.ignore(numeric_limits<streamsize>::max(), '\n');
	string titlu, editura, isbn, autor;
	string an, pret;
	for (int i = 0; i < CARTI; i++) {
		getline(fin, titlu);
		carte[i].set_titlu(titlu);
		getline(fin, autor);
		carte[i].set_autor(autor);
		getline(fin, editura);
		carte[i].set_editura(editura);
		getline(fin, isbn);
		carte[i].set_isbn(isbn);
		getline(fin, an);
		carte[i].set_an(an);
		getline(fin, pret);
		carte[i].set_pret(pret);
	}
} 

void afisare_biblioteca(Carte carte[]) {
	for (int i = 0; i < CARTI; i++) {
		cout << "Nume carte: " << carte[i].get_titlu() << endl;
		cout << "Nume autor: " << carte[i].get_autor() << endl;
		cout << "Nume editura: " << carte[i].get_editura() << endl;
		cout << "ISBN:" << carte[i].get_isbn().tostring() << endl;
		cout << "An:" << carte[i].get_an() << endl;
		cout << "Pret:" << carte[i].get_pret() << endl;
		cout << endl << endl << endl;
	}
}

int cautare_titlu(Carte carte[], string titlu_cautat) {
	int poz = -1;
	for (int i = 0; i < CARTI; i++) {
		if (carte[i].get_titlu() == titlu_cautat) {
			poz = i;
		}
	}
	return poz;
}

int cautare_editura(Carte carte[], string editura_cautata) {
	int poz = -1;
	for (int i = 0; i < CARTI; i++) {
		if (carte[i].get_editura() == editura_cautata) {
			poz = i;
		}
	}
	return poz;
}

int cautare_isbn(Carte carte[], string isbn_cautat) {
	int poz = -1;
	for (int i = 0; i < CARTI; i++) {
		if (carte[i].get_isbn().tostring() == isbn_cautat) {
			poz = i;
		}
	}
	return poz;
}

int cautare_autor(Carte carte[], string autor_cautat) {
	int poz = -1;
	for (int i = 0; i < CARTI; i++) {
		if (carte[i].get_autor() == autor_cautat) {
			poz = i;
		}
	}
	return poz;
}