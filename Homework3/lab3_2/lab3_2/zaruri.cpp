#include "zaruri.h"
int  Zar::pereche_frecventa[100][100]={};
int Zar::pereche[1000][1000]={};
void Zar::aruncare_zar() {
	int fata;
	fata = rand() % 6 + 1;
	this->fata = fata;
	frecventa_fata[fata]++;
};

int Zar::get_fata() {
	return fata;
}

void Zar::frecventa() {
	for (int i = 1; i <= 6; i++) {

		cout << "Frecevnata de aparitie a fetei " << i << " este " << frecventa_fata[i] << endl;
	}
} 

void Zar::maxim_aparitii() {
	int maxim = 0, maxim_fata_zar1 = 0, maxim_fata_zar2 = 0;
	int minim = 9000, minim_fata_zar1 = 0, minim_fata_zar2 = 0;
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			if (pereche_frecventa[i][j] > maxim) {
				maxim = pereche_frecventa[i][j];
				maxim_fata_zar1 = i;
				maxim_fata_zar2 = j;
			}
		}
	}
	cout << "Perechea " << maxim_fata_zar1 << " si " << maxim_fata_zar2 << "a aparut de cele mai multe ori: " << maxim << endl;
}

void Zar::minim_aparitii() {
	int maxim = 0, maxim_fata_zar1 = 0, maxim_fata_zar2 = 0;
	int minim = 9000, minim_fata_zar1 = 0, minim_fata_zar2 = 0;
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
			if (pereche_frecventa[i][j] < minim) {
				minim = pereche_frecventa[i][j];
				minim_fata_zar1 = i;
				minim_fata_zar2 = j;
			}
		}
	}
	cout << "Perechea " << minim_fata_zar1 << " si " << minim_fata_zar2 << "a aparut de cele mai putine ori: " << minim << endl;
}

void Zar::maxim_aparitii_consecutiv(int v_zar1[], int v_zar2[]) {
	int maxim_consecutiv = 0, nr = 1, maxim_consecutiv_fata1 = 0, maxim_consecutiv_fata2 = 0;
	for (int i = 0; i < 30; i++) {
		if ((v_zar1[i] == v_zar1[i + 1] && v_zar2[i] == v_zar2[i + 1]) || (v_zar1[i] == v_zar2[i + 1] && v_zar1[i + 1] == v_zar2[i])) {
			nr++;
			if (nr > maxim_consecutiv) {
				maxim_consecutiv = nr;
				maxim_consecutiv_fata1 = v_zar1[i];
				maxim_consecutiv_fata2 = v_zar2[i];
			}
		}
		else
		{
			nr = 1;
		}
	}
	cout << "Perechea " << maxim_consecutiv_fata1 << " si " << maxim_consecutiv_fata2 << "a aparut de cele mai multe ori consecutiv: " << maxim_consecutiv;
}