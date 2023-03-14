#include "carti_de_joc.h"

#define NR_JOCURI 5

void Pachet::creare_carte(int valoare, char suita, bool stare) {
	this->valoare = valoare;
	this->suita = suita;
	this->stare = stare;
};

int Pachet::get_valoare()
{
	return this->valoare;
}

char Pachet::get_suita()
{
	return this->suita;
}

bool Pachet::get_stare()
{
	return this->stare;
}

void Pachet::set_valoare(int valoare)
{
	this->valoare = valoare;
}

void Pachet::set_suita(char suita)
{
	this->suita = suita;
}

void Pachet::set_stare(int stare)
{
	this->stare = stare;
}

void creare_pachet(Pachet carte_noua[]) {
	int k = 0;
	char suita[4] = {'R','N','C','T'};
	for (int i = 0; i < 4; i++) {
		for (int j = 2; j <= 14; j++) {
			carte_noua[k].set_stare(0);
			carte_noua[k].set_valoare(j);
			carte_noua[k].set_suita(suita[i]);
			k++;
		}
	}
}
void afisare_pachet(Pachet carte_noua[]) {
	for (int i = 0; i < 52; i++) {
		cout << carte_noua[i].get_valoare() << carte_noua[i].get_suita() << carte_noua[i].get_stare() << endl;
	}
}

void reset_pachet(Pachet pachet[]) {
	for (int i = 0; i < 52; i++) {
		pachet[i].set_stare(0);
	}
}

void joc_21(Pachet pachet[]) {
	//srand(time(NULL));
	int nr_jocuri = 0;
	int suma_jucator1 = 0, suma_jucator2 = 0;
	int nr_meciuri_castigate_jucator1 = 0, nr_meciuri_castigate_jucator2 = 0;
	int nr_carte_jucator1, nr_carte_jucator2;
	while (true) {
		while (nr_jocuri != NR_JOCURI) {
			nr_carte_jucator1 = rand() % 52;
			while (pachet[nr_carte_jucator1].get_stare() == 1) {
				nr_carte_jucator1 = rand() % 52;
			}
			pachet[nr_carte_jucator1].set_stare(1);
			nr_carte_jucator2 = rand() % 52;
			while (pachet[nr_carte_jucator2].get_stare() == 1) {
				nr_carte_jucator2 = rand() % 52;
			}
			pachet[nr_carte_jucator2].set_stare(1);
			cout << "Cartea jucatorului 1 este:" << pachet[nr_carte_jucator1].get_suita() << pachet[nr_carte_jucator1].get_valoare() << endl;
			cout << "Cartea jucatorului 2 este:" << pachet[nr_carte_jucator2].get_suita() << pachet[nr_carte_jucator2].get_valoare() << endl;
			suma_jucator1 = suma_jucator1 + pachet[nr_carte_jucator1].get_valoare();
			suma_jucator2 = suma_jucator2 + pachet[nr_carte_jucator2].get_valoare();
			if (suma_jucator1 > 21) {
				cout << "Jucatorul 2 a castigat o data cu suma numerelor " << suma_jucator2 << "iar jucatorul 1 a pierdut cu suma" << suma_jucator1 << endl;
				suma_jucator1 = 0;
				suma_jucator2 = 0;
				nr_meciuri_castigate_jucator2++;
				nr_jocuri++;
				continue;
			}
			if (suma_jucator2 > 21) {
				cout << "Jucatorul 1 a castigat o data cu suma numerelor " << suma_jucator1 << "iar jucatorul 2 a pierdut cu suma" << suma_jucator2 << endl;
				suma_jucator1 = 0;
				suma_jucator2 = 0;
				nr_meciuri_castigate_jucator1++;
				nr_jocuri++;
				continue;
			}
		}
		if (nr_meciuri_castigate_jucator1 > nr_meciuri_castigate_jucator2) {
			cout << "Jucatorul 1 a castiagat cu " << nr_meciuri_castigate_jucator1 << " mecirui castiagte, Iar jucatorul 2 a pierdut cu " << nr_meciuri_castigate_jucator2 << " castigate";
		}

		else if (nr_meciuri_castigate_jucator1 < nr_meciuri_castigate_jucator2) {
			cout << "Jucatorul 2 a castiagat cu " << nr_meciuri_castigate_jucator2 << " mecirui castiagte, Iar jucatorul 1 a pierdut cu " << nr_meciuri_castigate_jucator1 << " castigate";
		}

		else if (nr_meciuri_castigate_jucator1 = nr_meciuri_castigate_jucator2)
		{
			cout << "A fost egaliatate, au fost " << nr_meciuri_castigate_jucator1 << " meciuri";
		}
		string a;
		cout << "\n\n\nDoriti sa continuati jocul? :> ";
		cin >> a;
		if (a == "da") {
			nr_jocuri = 0;
			reset_pachet(pachet);
			continue;
		}
		else
		{
			break;
		}
	}
}