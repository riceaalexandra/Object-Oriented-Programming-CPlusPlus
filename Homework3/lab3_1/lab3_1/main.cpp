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
		frecventa_fata[aruncare_zar1]++;
		zar2.aruncare_zar();
		aruncare_zar2 = zar2.get_fata();
		cout << aruncare_zar2;
		frecventa_fata[aruncare_zar2]++;
		cout << endl;
		if (aruncare_zar1 == aruncare_zar2) {
			pereche_frecventa[aruncare_zar1][aruncare_zar2]++;
		}
		else
		{
			pereche_frecventa[aruncare_zar1][aruncare_zar2]++;
			pereche_frecventa[aruncare_zar2][aruncare_zar1]++;
		}
		v_zar1[i] = aruncare_zar1;
		v_zar2[i] = aruncare_zar2;

	}
	cout << endl;
	frecventa(frecventa_fata);
	maxim_aparitii(pereche_frecventa);
	minim_aparitii(pereche_frecventa);
	maxim_aparitii_consecutiv(v_zar1, v_zar2);
}