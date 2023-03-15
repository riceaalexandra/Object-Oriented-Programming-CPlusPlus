#include "Rezervatie.h"


void Rezervatie::adaugare_animal() {
	std::cout << "Animal:";
	std::string anim;
	std::cin >> anim;
	if (anim == "vulpe") {
		Vulpe fox;  
		fox.Citire_Animal();
		vulpe[nr_vulpi++] = fox;
	}
	else if (anim == "urs") {
		Urs bear;
		bear.Citire_Animal();
		urs[nr_ursi++] = bear;
	}
	else if (anim == "iepure") {
		Iepure rabbit;
		rabbit.Citire_Animal();
		iepure[nr_iepuri++] = rabbit;
	}
	else if (anim == "caprioara") {
		Caprioara deer;
		deer.Citire_Animal();
		caprioara[nr_caprioare++] = deer;
	}
	else if (anim == "leu") {
		Leu lion;
		lion.Citire_Animal();
		leu[nr_lei++] = lion;
	}
}

void Rezervatie::afisare_animale() {
	std::cout << "Rezervatia are " << nr_caprioare << " caprioare, " << nr_iepuri << " iepuri, " << nr_lei << " lei, " << nr_ursi << " ursi, " << nr_vulpi << " vulpi.";
		for (int i = 0; i < nr_caprioare; i++) {
			caprioara[i].Afisare_Animal();
		}
		for (int i = 0; i < nr_iepuri; i++) {
			iepure[i].Afisare_Animal();
		}
		for (int i = 0; i < nr_lei; i++) {
			leu[i].Afisare_Animal();
		}
		for (int i = 0; i < nr_ursi; i++) {
			urs[i].Afisare_Animal();
		}
		for (int i = 0; i < nr_vulpi; i++) {
			vulpe[i].Afisare_Animal();
		}
	}
}