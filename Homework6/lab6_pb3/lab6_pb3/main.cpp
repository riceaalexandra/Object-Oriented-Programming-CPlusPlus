#include "Carte_telefon.h"

int main() {
	Carte_telefon telefon;
	telefon.Add("Andreea", "Poligonului", "98765");
	telefon.Add("Mihai", "ASDESa", "088765");
	while (1)
	{
		cout << endl;
		cout << "Alegeti optiunea :" << endl;
		cout << "1. Adaugati un utilizator" << endl;
		cout << "2. Cautati un abonat dupa nume" << endl;
		cout << "3. Afisati cartea de telefon" << endl;
		cout << "4. Exit" << endl;


		int option;
		cin >> option;

		switch (option)
		{

		case 1:
		{
			cout << "Introduceti datele noului contact\nNume : ";
			string nume, adresa, numar_telefon;
			cin >> nume;
			cout << "Adresa : ";
			cin >> adresa;
			cout << "Numar de telefon : ";
			cin >> numar_telefon;
			telefon.Add(nume, adresa, numar_telefon);
			break;
		}

		case 2:
		{
			cout << "Introduceti numele contactului pe care il cautati:   ";
			string nume;
			cin >> nume;
			telefon.Cautare_lista(telefon.head, nume);
			break;
		}

		case 3:
		{
			telefon.Print(telefon.head);
			break;
		}

		case 4:
		{
			return 0;
		}

		}
	}

}