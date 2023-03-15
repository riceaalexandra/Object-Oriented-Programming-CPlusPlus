#include "Urs.h"

void Urs::Afisare_Animal() {
	Animal::Afisare_Animal();
	std::cout << "\nInceput hibernare: ";
	std::cout << inceput_hibernare;
	std::cout << "\nSfarsit hibernare: ";
	std::cout << sfarsit_hibernare;

}

void Urs::Citire_Animal() {
	Animal::Citire_Animal();
	std::cout << "\nInceput hibernare: ";
	std::cin >> inceput_hibernare;
	std::cout << "\nSfarsit hibernare: ";
	std::cin >> sfarsit_hibernare;
}