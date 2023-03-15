#include "Vulpe.h"

void Vulpe::Afisare_Animal() {
	Animal::Afisare_Animal();
	std::cout << "\nTemperatura maxima: ";
	std::cout << temperatura_maxima;
	std::cout << "\nTip vulpe: ";
	std::cout << tip;

}

void Vulpe::Citire_Animal() {
	Animal::Citire_Animal();
	std::cout << "\nTemperatura maxima: ";
	std::cin >> temperatura_maxima;
	std::cout << "\nTip vulpe: ";
	std::cin >> tip;
}