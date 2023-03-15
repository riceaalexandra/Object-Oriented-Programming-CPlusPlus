#include "Iepure.h"

void Iepure::Afisare_Animal() {
	Animal::Afisare_Animal();
	std::cout << "\nSuprfata minima pentru iepure: ";
	std::cout << suprafata_minima;

}

void Iepure::Citire_Animal() {
	Animal::Citire_Animal();
	std::cout << "\nSuprfata minima pentru iepure: ";
	std::cin >> suprafata_minima;
}