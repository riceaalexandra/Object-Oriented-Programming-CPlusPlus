#include "liste.h"

int main() {
	Concurent* head = NULL;
	int meniu = 1;

	while (meniu == 1)
	{
		cout << "\nAlegeti optiunea:" << endl;
		cout << "1. Inserati un concurent;" << endl;
		cout << "2. Sortare dupa nota;" << endl;
		cout << "3. Sortare alfabetica;" << endl;
		cout << "4. Cautati in lista un participant;" << endl;
		cout << "5. Afisare lista admisi;" << endl;
		cout << "6. Afisare lista respinsi;\n";
		cout << "7. Terminati sesiunea. \nOptiunea dvs:  ";
		int i;
		string nume, prenume;
		int nota;
		cin >> i;
		switch (i)
		{
		case 1:
		{
			Inserare_concurent(&head);
			string a;
			int ok = 1;
			while (ok == 1) {
				cout << "Doriti sa mai adaugati un concurent?      ";
				cin >> a;
				if (a == "da" || a == "Da" || a == "DA") {
					Inserare_concurent(&head);
				}
				else
				{
					ok = 0;
				}
			}
			break;

		}
		case 2:
		{
			Sortare_lista_nota(head);
			Afisare_lista(head);
			cout << "\nMai doriti ceva de la program? ?:>     ";
			string a;
			cin >> a;
			if (a == "da" || a == "Da" || a == "DA") {
				break;
			}
			else
			{
				return 0;
			}
			break;
		}

		case 3:
		{
			Sortare_lista_alfabetic(head);
			Afisare_lista(head);
			cout << "\nMai doriti ceva de la program? ?:>    ";
			string a;
			cin >> a;
			if (a == "da" || a == "Da" || a == "DA") {
				break;
			}
			else
			{
				return 0;
			}
			break;
		}
		case 4:
		{
			cout << "Introduceti numele si prenumele concurentului pe care il cautati:   ";
			cin >> nume >> prenume;
			if (Cautare_lista(head,nume,prenume) == 1) {
				cout << "Concurentul exista si are nota  " << head->nota<<".\n";
			}
			else {
				cout << "\nConcurentul nu exista";
			}
			int ok = 1;
			string a;
			while (ok == 1) {
				cout << "\nDoriti sa mai cautati un concurent?     ";
				cin >> a;
				if (a == "da" || a == "Da" || a == "DA") {
					cout << "Introduceti numele si prenumele concurentului pe care il cautati:   ";
					cin >> nume >> prenume;
					if (Cautare_lista(head, nume, prenume) == 1) {
						cout << "Concurentul exista si are nota  " << head->nota<<".\n";
						ok = 0;
					}
					else {
						cout << "\nConcurentul nu exista\n";
					}
				}
				else {
					ok = 0;
					break;
				}
			}
			cout << "\nMai doriti ceva de la program? ?:>     ";
			string b;
			cin >> b;
			if (b == "da" || b == "Da" || b == "DA") {
				break;
			}
			else
			{
				return 0;
			}
			break;

		}
		case 5: {
			Admisi(head);
			cout << "\nMai doriti ceva de la program? ?:>     ";
			string a;
			cin >> a;
			if (a == "da" || a == "Da" || a == "DA") {
				break;
			}
			else
			{
				return 0;
			}
			break;
		}
		case 6:
		{
			Respinsi(head);
			cout << "\nMai doriti ceva de la program? ?:>    ";
			string a;
			cin >> a;
			if (a == "da" || a == "Da" || a == "DA") {
				break;
			}
			else
			{
				return 0;
			}
			break;
		}
		case 7:
		{
			meniu = 0;
			break;
		}
		default:
		{
			cout << "\nTasta gresita! Reincercati:  ";
			meniu = 1;
		}
		}
	}
}
