#include "Caprioara.h"

void Caprioara::Afisare_Animal() {
	Animal::Afisare_Animal();
	std::cout << "\nNumar pui: ";
	std::cout << numar_pui;

}

void Caprioara::Citire_Animal(){
	Animal::Citire_Animal();
	std::cout << "\nNumar pui: ";
	std::cin >> numar_pui;
}