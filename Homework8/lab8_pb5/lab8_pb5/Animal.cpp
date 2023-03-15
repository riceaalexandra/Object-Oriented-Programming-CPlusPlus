#include "Animal.h"

void Animal::Citire_Animal() {
	std::cout << "Introduceti numele: ";
	std::cin >> nume;
	std::cout << "\nIntroduceti data: ";
	std::cin >> data_aducerii;
	std::cout << "\nCanitatea de " << hrana_preferata << ": ";
	std::cin >> cantitate_zi;

}

void Animal::Afisare_Animal() {
	std::cout << "Introduceti numele: ";
	std::cout << nume;
	std::cout << "\nIntroduceti data: ";
	std::cout << data_aducerii;
	std::cout << "\nCanitatea de " << hrana_preferata << ": ";
	std::cout << cantitate_zi;
}