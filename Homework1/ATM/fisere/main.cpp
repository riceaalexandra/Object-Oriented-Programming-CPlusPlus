#include "atm.h"
#include <fstream>
using namespace std;

ifstream fin("Atm.txt");
ofstream fout("Atm_rez.txt");

int Meniu() {
	cout << "\n1. Reveniti la meniu;\n2. Terminati sesiunea.\nOptiunea dumneavoastra:  ";
	int a;
	cin >> a;
	switch (a)
	{
	case 1:
	{
		return 1;
	}
	case 2:
	{
		
		return 0;
	}
	default:
	{
		return 0;
	}
	}
}
int main() {
	Client* client;
	client = new Client[100 * sizeof(Client)];
	int i = 0;
	if (fin.fail() || fout.fail())
	{
		cout << "Citirea/Afisarea din fisier nu a mers";
	}
	else
	{
		while (fin >> client[i].nume >> client[i].prenume >> client[i].pin >> client[i].cont >> client[i].sold >> client[i].valuta) {
			i++;
		}
		int term = 1;
		while (term == 1) {
			string cont, nim_cont_pr;
			int meniu = 1, k;
			cout << "Introduceti contul:  ";
			cin >> cont;
			if (Gasire_cont(client, i, cont) == 1) {
				cout << "\n\n";
				for (int a = 0; a < 2; a++) {
					cout << "************************\n";
				}
				cout << "*****Bine ati venit!****\n";
				for (int a = 0; a < 2; a++) {
					cout << "************************\n";
				}
				k = pozitie(client, i, cont);
				while (meniu == 1)
				{
					cout << "\nAlegeti optiunea:" << endl;
					cout << "1. Detalii cont;" << endl;
					cout << "2. Extragere;" << endl;
					cout << "3. Transfer;" << endl;
					cout << "4. Schimb valutar;" << endl;
					cout << "5. Apeleaza la un prieten" << endl;
					cout << "6. Intrati in alt cont;\n";
					cout << "7. Terminati sesiunea. \n\nOptiunea dvs:  ";
					int i;
					cin >> i;
					switch (i)
					{
					case 1:
					{
						Detalii_card(&client[k]);
						if (Meniu() == 0) {
							meniu = 0;
							term = 0;
							cout << "Verificati in txt.";
							break;
						}
						else {
							break;
						}

					}
					case 2:
					{
						Extragere_bani(&client[k]);
						if (Meniu() == 0) {
							meniu = 0;
							term = 0;
							cout << "Verificati in txt.";
							break;
						}
						else {
							break;
						}
					}

					case 3:
					{
						int suma;
						cout << "\nIntroduceti suma pe care vreti sa o transferati:   ";
						cin >> suma;
						while (client[k].sold < suma) {
							cout << "Sold insudicient. Reintroduceti suma: ";
							cin >> suma;
						}
							cout << "Introduceti contul prietenului:  ";
							cin >> nim_cont_pr;
							int p = pozitie(client, i, nim_cont_pr);
							if (p != -1) {
								Transfer_bani(&client[k], &client[p], suma);
							}
							else {
								while (p == -1) {
									cout << "Contul nu exista! Reincercati: ";
									cin >> nim_cont_pr;
									p = pozitie(client, i, nim_cont_pr);
									if (p != -1) {
										Transfer_bani(&client[k], &client[p], suma);
									}
								}
							}
						if (Meniu() == 0) {
							meniu = 0;
							term = 0;
							cout << "Verificati in txt.";
							break;
						}
						else {
							break;
						}
						break;
					}
					case 4:
					{
						Schimb(&client[k]);
						if (Meniu() == 0) {
							meniu = 0;
							term = 0;
							cout << "Verificati in txt.";
							break;
						}
						else {
							break;
						}
						break;

					}
					case 5: {
						cout << "Introduceti contul prietenului:  ";
						string cont_pr, pin_pr;
						cin >> cont_pr;
						int suma_pr;
						int poz = pozitie(client, i, cont_pr);
						if (poz != -1) {
							cout << "\nIntroduceti pin:  ";
							cin >> pin_pr;
							if (Verificare_pin(&client[poz], pin_pr) == 1) {
								cout << "\nIntroduceti suma dorita: ";
								cin >> suma_pr;
								Transfer_bani(&client[poz], &client[k], suma_pr);
							}
						}
						else {
							while (poz == -1) {
								cout << "Contul nu exista! Reincercati: ";
								cin >> nim_cont_pr;
								poz = pozitie(client, i, nim_cont_pr);
								if (poz != -1) {
									if (Verificare_pin(&client[poz], pin_pr) == 1) {
										cout << "\nIntroduceti suma dorita: ";
										cin >> suma_pr;
										Transfer_bani(&client[poz], &client[k], suma_pr);
									}
								}
							}
						}
						if (Meniu() == 0) {
							meniu = 0;
							term = 0;
							cout << "Verificati in txt.";
							break;
						}
						else {
							break;
						}
						break;
					}
					case 6:
					{
						meniu = 0;
						break;
					}
					case 7:
					{
						cout << "\nVerificati in text cati bani mai aveti voi si prietenii dvs!\n";
						term = 0;
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
				meniu = 1;
			}
			else {
			term = 0;
}
		}
	}

	for (int l = 0; l < i; l++) {
		fout << client[l].nume << " " << client[l].prenume << " " << client[l].sold <<" " << client[l].valuta << '\n';
	}
	fin.close();
	fout.close();
	return 0;
}