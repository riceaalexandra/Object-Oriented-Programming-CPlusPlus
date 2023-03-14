#include "zaruri.h"

int main() {

	Zar zar1, zar2;
	int v_zar1[100], v_zar2[100];
	int aruncare_zar1, aruncare_zar2;
	srand(time(NULL));
	for (int i = 0; i < 30; i++) {
		zar1.aruncare_zar();
		aruncare_zar1 = zar1.get_fata();
		cout << aruncare_zar1 << " ";
		//frecventa_fata_zar1[aruncare_zar1]++;
		zar2.aruncare_zar();
		aruncare_zar2 = zar2.get_fata();
		cout << aruncare_zar2;
		//frecventa_fata_zar2[aruncare_zar2]++;
		cout << endl;
		if (aruncare_zar1 == aruncare_zar2) {
			Zar::pereche_frecventa[aruncare_zar1][aruncare_zar2]++;
		}
		else
		{
			Zar::pereche_frecventa[aruncare_zar1][aruncare_zar2]++;
			Zar::pereche_frecventa[aruncare_zar2][aruncare_zar1]++;
		}
		v_zar1[i] = aruncare_zar1;
		v_zar2[i] = aruncare_zar2;

	}
	cout << endl;
	cout << "Frecventa zar 1: \n";
	zar1.frecventa();
	cout << "\n\n\n\n\n\n\n";
	cout << "Frecventa zar 2: \n";
	zar2.frecventa();
	Zar::maxim_aparitii();
	Zar::minim_aparitii();
	Zar::maxim_aparitii_consecutiv(v_zar1, v_zar2);
}