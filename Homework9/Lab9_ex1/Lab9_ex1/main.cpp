#include "Matrice.h"
#include "complex.h"
#include <vector>
#define MAX 10

template <typename T>
void meniu(Matrice<T> mat) {
	Matrice<T>rezultat;
	int coloana, linie, pow; /*	cout << "\nCate matrici doriti sa introduceti?"; int nr_matrici; cin >> nr_matrici; for (int i = 0; i < nr_matrici; i++) { cout << "Introduceti numarul de linii: ";cin >> linie;cout << "Introduceti numarul de coloane: ";cin >> coloana;Matrice<T> matrice(linie, coloana);matrice.citire();matrici.push_back(matrice);}*/
	cout << "Introduceti prima matrice:\n";
	Matrice<T> matrice1; matrice1.citire();
	Matrice<T> matrice2; matrice2.citire();
	cout << "Matriciile sunt :\nMatricea 1:\n"; matrice1.afisare(); cout << endl << "Matricea 2:\n"; matrice2.afisare();
	int i, ok = 1;
	while (ok == 1) {
		cout << "\nCe operatii doriti sa realizati?\n1. Adunare; \n2. Scadere; \n3. Inmultire\n4.Ridicare la putere\n5.Iesiti din program\nOptiunea dvs: ";
		cin >> i;
		switch (i) {
		case 1: {
			rezultat = matrice1 + matrice2;
			rezultat.afisare();
			break;
		}
		case 2: {
			rezultat = matrice1 - matrice2;
			rezultat.afisare();
			break;
		}
		case 3: {
			rezultat = matrice1 * matrice2;
			rezultat.afisare();
			break;
		}
		case 4: {
			int option;
			cin >> option;
			cout << "Ce matrice doriti sa ridicati?";
			cin >> option;
			cout << "La ce putere doriti sa ridicati";
			cin >> pow;
			if (option == 1) {
				rezultat = matrice1 ^ pow;
				rezultat.afisare();
			}
			else if (option == 2) {
				rezultat = matrice2 ^ pow;
				rezultat.afisare();
			}
			break;
		}
		case 5:
		{
			ok = 0;
		}
		}
	}
}
int main() {
	int ok = 1;
	while (ok == 1) {
		cout << "Alegeti tipul elementelor din matrice(int, float, complex): ";
		string option;
		cin >> option;
		if (option == "int") {
			ok = 0;
			Matrice <int> mat;
			meniu(mat);
		}
		else if (option == "float") {
			ok = 0;
			Matrice <float> matR;
			meniu(matR);
		}
		else if (option == "complex") {
			ok = 0;
			Matrice <Complex> matco;
			meniu(matco);
		}
		else {
			cout << "Ati introdus gresit. Reincercati!!\n";
		}
	}
}