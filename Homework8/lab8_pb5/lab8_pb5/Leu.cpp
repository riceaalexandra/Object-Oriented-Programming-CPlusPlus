#include "Leu.h"

void Leu::Afisare_Animal() {
	Animal::Afisare_Animal();
	std::cout << "\nTemperatura minima pentru leu: ";
	std::cout << temperatura_minima;
	std::cout << "\nTara de unde provine: ";
	std::cout << tara_provenienta;

}

void Leu::Citire_Animal() {
	Animal::Citire_Animal();
	std::cout << "\nTemperatura minima pentru leu: ";
	std::cin >> temperatura_minima;
	std::cout << "\nTara de unde provine: ";
	std::cin >> tara_provenienta;
}