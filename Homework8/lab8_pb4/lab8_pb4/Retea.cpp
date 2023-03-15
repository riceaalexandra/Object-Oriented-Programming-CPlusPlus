#include "Retea.h"
#include <fstream>
#include <algorithm>
ifstream fin("utilizatori.txt");
ofstream fout("utilizatori_rez.txt");

Retea::Retea() {
	nume_retea = "";
}

Retea::Retea(string nume_retea) {
	this->nume_retea = nume_retea;
}

void Retea::Creare_Admin() {
	string nume;
	int parola;
	administrator = new Administrator();
	fin >> nume;
	administrator->SetNume(nume);
	fin >> parola;
	administrator->SetParola(parola);
	numar_utilizatori++;
}

void Retea::Creare_Utilizatori() {
	string nume;
	int parola;
	int n;
	while (fin >> nume && fin >> parola) {
		utilizatori[numar_utilizatori].SetNume(nume);
		utilizatori[numar_utilizatori].SetParola(parola);
		numar_utilizatori++;
	}
}

void Retea::DeconectareUtilizator() {
	cout << "\nIntroduceti numele utilizatorlui pe care vreti sa il deconectati: ";
	string nume_deconectare;
	cin >> nume_deconectare;
	int i = 0;
	while (i < numar_utilizatori) {
		if (utilizatori[i].GetNume() == nume_deconectare) {
			for (int j = i; j < numar_utilizatori; j++) {
				utilizatori[j] = utilizatori[j + 1];
			}
			numar_utilizatori--;
			cout << "Utilizatorul a fost sters cu succes!";
			cout << numar_utilizatori;
		}
		else {
			i++;
		}
	}
	while (true) {
		cout << "\nDoriti sa mai deconectati un utilizator? :> ";
		string a;
		cin >> a;
		transform(a.begin(), a.end(), a.begin(), ::toupper);
		if (a == "DA") {
			string nume_deconectare;
			cin >> nume_deconectare;
			int i = 0;
			while (i < numar_utilizatori) {
				if (utilizatori[i].GetNume() == nume_deconectare) {
					for (int j = i; j < numar_utilizatori; j++) {
						utilizatori[j] = utilizatori[j + 1];
					}
					numar_utilizatori--;
					cout << "Utilizatorul a fost sters cu succes!";
					cout << numar_utilizatori;
				}
				else {
					i++;
				}
			}
		}
		else
		{
			break;
		}
	}
}

void Retea::VizulaizareAdmin() {
	cout << "\nLista admin: \n";
	cout << administrator->GetNume();
	cout << endl;
}

void Retea::VizulaizareUtilizatori() {
	cout << "\nLista cu utilziatori: \n";
	for (int i = 1; i < numar_utilizatori; i++) {
		cout << "\nNumele utilizatorului: " << utilizatori[i].GetNume();
	}
	cout << endl;
}

void Retea::VizulaizareUtilizatoriFisier() {
	fout << "\nLista cu utilziatori: \n";
	for (int i = 1; i < numar_utilizatori; i++) {
		fout << "\nNumele utilizatorului: " << utilizatori[i].GetNume();
		fout << "\nParola utilizatorului: " << utilizatori[i].GetParola();
	}
	fout << endl;
}

void Retea::AdaugaUtilizator() {
	string nume_nou;
	int parola_noua;
	if (numar_utilizatori >= 10) {
		cout << "\nNumarul de utilizatori depasit;\n";
	}
	else {
		cout << "Introduceti numele ";
		cin >> nume_nou;
		utilizatori[numar_utilizatori].SetNume(nume_nou);
		cout << "Introduceti parola utilizatorului " << nume_nou << " :";
		cin >> parola_noua;
		utilizatori[numar_utilizatori].SetParola(parola_noua);
		numar_utilizatori++;
		cout << "\nUtilizatorul a fost introdus cu succes!";
		//cout<< utilizatori[numar_utilizatori].GetNume();
		while (true) {
			cout << "\nDoriti sa mai adugati un utilizator? :>";
			if (numar_utilizatori >= 10) {
				cout << "Numarul de utilizatori depasit;\n";
			}
			else {
				string a;
				cin >> a;
				transform(a.begin(), a.end(), a.begin(), ::toupper);
				if (a == "DA") {
					cin >> nume_nou;
					cout << "Introduceti numele ";
					cin >> nume_nou;
					utilizatori[numar_utilizatori].SetNume(nume_nou);
					cout << "Introduceti parola utilizatorului " << nume_nou << " :";
					cin >> parola_noua;
					utilizatori[numar_utilizatori].SetParola(parola_noua);
					numar_utilizatori++;
					cout << "\nUtilizatorul a fost introdus cu succes!";
				}
				else
				{
					break;
				}
			}
		}
	}
}

void Retea::SchimbareParola() {
	string utilizator_schimbare;
	cout << "\nCare utilizator doreste sa-si modifice parola? :>";
	cin >> utilizator_schimbare;
	int parola_schimbata;
	for (int i = 0; i < numar_utilizatori; i++) {
		if (utilizatori[i].GetNume() == utilizator_schimbare) {
			cout << "\nIntroduceti noua parola: ";
			cin >> parola_schimbata;
			utilizatori[i].SetParola(parola_schimbata);
			cout << "\nParola a fost modificata cu succes.\n";
		}
	}

}

Retea::~Retea() {

}