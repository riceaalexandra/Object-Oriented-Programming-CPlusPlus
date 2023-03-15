#include "Leu.h"
#include "Urs.h"
#include "Rezervatie.h"

int main() {
	Rezervatie rezervatie;
	int option;
	while (true) {
		std::cout << "Alegeti optiunea: \n";
		std::cout << "1. Adauga animal; \n";
		std::cout << "2. Afisati animal; \n3. Inchideti program.\n\ Optiunea dvs:  ";
		std::cin >> option;
		switch (option) {
		case 1:
			rezervatie.adaugare_animal();
			break;
		case 2:
			rezervatie.afisare_animale();
			break;
		case 3:
			return 0;
		}
	}
}