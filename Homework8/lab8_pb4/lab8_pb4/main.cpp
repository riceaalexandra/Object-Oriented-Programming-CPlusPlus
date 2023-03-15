#include "Administrator.h"
#include "Retea.h"
#include "Utilizator.h"

int main() {
	Retea retea;
	Administrator* admin = retea.GetAdministrator();
	retea.Creare_Admin();
	retea.Creare_Utilizatori();
	while (true) {
		int option;
		cout << "\nAlegeti optiunea: \n";
		cout << "1. Afisare utilizatori;\n";
		cout << "2. Afisare admin; \n";
		cout << "3. Adauga utilizator; \n";
		cout << "4. Schimba parola unui utilizator;\n";
		cout << "5. Deconectarea utilizator;\n";
		cout << "6. Inchideti programul. \n";
		cin >> option;
		switch (option) {
		case 1:
			admin->VizualizareUtilizatori(&retea);
			break;
		case 2:
			admin->VizualizareAdmin(retea);
			break;
		case 3:
			retea.AdaugaUtilizator();
			break;
		case 4:
			retea.SchimbareParola();
			break;
		case 5:
			admin->DeconectareUtilizator(&retea);
			break;
		case 6:
			cout << "Verificati txt-ul.";
			retea.VizulaizareUtilizatoriFisier();
			return 0;
		}
	}
}