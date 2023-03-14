#include "biblioteca.h"
#include <fstream>
ifstream fin("carti.txt");

int main() {
	Carte carte[CARTI];
	ifstream fin;
	Isbn isbn1("123-241-234-2");
	bool nr=isbn1.validare_cifra_control();
	exit(0);
	creare_biblioteca(carte, fin);
	while (true) {
		cout << "Alegeti optiunea :" << endl;
		cout << "1. Introduceti o carte;" << endl;
		cout << "2. Afisati biblioteca;" << endl;
		cout << "3. Cautati carte dupa titlu;" << endl;
		cout << "4. Cautati carte dupa editura;" << endl;
		cout << "5. Cautati carte dupa cod isbn;" << endl;
		cout << "6. Cautati carte dupa autor;" << endl;
		cout << "7. Iesire." << endl;
		int a;
		cin >> a;
		switch (a) 
		{
		case 1:
		{
			break;
		}
		case 2:
		{
			afisare_biblioteca(carte);
			break;
		}
		case 3:
		{
			string titlu_cautat;
			cout << "Introduceti numele cartii pe care o cautati:  ";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			getline(cin,titlu_cautat);
			if (cautare_titlu(carte, titlu_cautat) != -1) {
				cout << "Cartea exista.\nDetalii carte:\n";
				cout << "Nume autor: " << carte[cautare_titlu(carte, titlu_cautat)].get_autor() << endl;
				cout << "Nume editura: " << carte[cautare_titlu(carte, titlu_cautat)].get_editura() << endl;
				cout << "ISBN:" << carte[cautare_titlu(carte, titlu_cautat)].get_isbn().tostring() << endl;
				cout << "An:" << carte[cautare_titlu(carte, titlu_cautat)].get_an() << endl;
				cout << "Pret:" << carte[cautare_titlu(carte, titlu_cautat)].get_pret() << endl;
				cout << endl << endl << endl;
			}
			else
			{
				cout << "Cartea nu exista.\n";
			}
			break;
		}
		case 4:
		{
			string editura_cautata;
			cout << "Introduceti numele editurii pe care o cautati:  ";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			getline(cin, editura_cautata);
			if (cautare_editura(carte, editura_cautata) != -1) {
				cout << "Cartea exista.\nDetalii carte:\n";
				cout << "Nume carte: " << carte[cautare_editura(carte, editura_cautata)].get_titlu() << endl;
				cout << "Nume autor: " << carte[cautare_editura(carte, editura_cautata)].get_autor() << endl;
				cout << "ISBN:" << carte[cautare_editura(carte, editura_cautata)].get_isbn().tostring() << endl;
				cout << "An:" << carte[cautare_editura(carte, editura_cautata)].get_an() << endl;
				cout << "Pret:" << carte[cautare_editura(carte, editura_cautata)].get_pret() << endl;
				cout << endl << endl << endl;
			}
			else
			{
				cout << "Cartea nu exista.\n";
			}
			break;
		}
		case 5:
		{
			string isbn_cautat;
			cout << "Introduceti codul isbn pe care il cautati:  ";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			getline(cin, isbn_cautat);
			if (cautare_isbn(carte, isbn_cautat) != -1) {
				cout << "Cartea exista.\nDetalii carte:\n";
				cout << "Nume carte: " << carte[cautare_isbn(carte, isbn_cautat)].get_titlu() << endl;
				cout << "Nume autor: " << carte[cautare_isbn(carte, isbn_cautat)].get_autor() << endl;
				cout << "Nume editura: " << carte[cautare_isbn(carte, isbn_cautat)].get_editura() << endl;
				cout << "An:" << carte[cautare_isbn(carte, isbn_cautat)].get_an() << endl;
				cout << "Pret:" << carte[cautare_isbn(carte, isbn_cautat)].get_pret() << endl;
				cout << endl << endl << endl;
			}
			else
			{
				cout << "Cartea nu exista.\n";
			}
			break;
		}
		case 6:
		{
			string autor_cautat;
			cout << "Introduceti numele autorului pe care il cautati:  ";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			getline(cin, autor_cautat);
			if (cautare_autor(carte, autor_cautat) != -1) {
				cout << "Cartea exista.\nDetalii carte:\n";
				cout << "Nume carte: " << carte[cautare_autor(carte, autor_cautat)].get_titlu() << endl;
				cout << "Nume editura: " << carte[cautare_autor(carte, autor_cautat)].get_editura() << endl;
				cout << "ISBN:" << carte[cautare_autor(carte, autor_cautat)].get_isbn().tostring() << endl;
				cout << "An:" << carte[cautare_autor(carte, autor_cautat)].get_an() << endl;
				cout << "Pret:" << carte[cautare_autor(carte, autor_cautat)].get_pret() << endl;
				cout << endl << endl << endl;
			}
			else
			{
				cout << "Cartea nu exista.\n";
			}
			break;
		}
		case 7:
		{
			return 0;
		}
		default:
		{
			cout << "Tasta gresita. Reincercati. " << endl;
			break;
		}
		}
	}

}