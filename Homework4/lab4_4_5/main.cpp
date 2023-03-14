#include "event.h"
#include "Agenda.h"
int main() {

	Agenda evenimente;
	std::string day, month, year,name;
	
	while (true) {
		std::cout << "ORGANIZARE EVENIMENTE \n";
		std::cout << "1->Creati un eveniment \n";
		std::cout << "2->Schimbati data unui eveniment \n";
		std::cout << "3->Afisati evenimentele \n";
		std::cout << "4->Inchideti aplicatia \n";

		int option;
		std::cin >> option;

		switch (option) {
		case 1:
		{
			std::cout << "Introduceti ziua evenimentului";
			std::cin >> day;
			std::cout << "Introduceti luna evenimentului";
			std::cin >> month;
			std::cout << "Introduceti anul evenimentului";
			std::cin >> year;
			std::cout << "Introduceti numele evenimentului";
			std::cin >> name;
			Date date(day, month, year);
			if (date.check()) {
				std::cout << "Data este corecta\n";
				evenimente.adauga_eveniment(Event(date, name));
			}
			else {
				std::cout << "Data introdusa nu este corecta\n";
			}
			break;
		}
		case 2:
		{
			std::cout << "Introduceti numele evenimentului";
			std::cin >> name;
			Date aux;
			for (int i = 0; i < evenimente.get_numar_evenimente(); i++) {
				if (evenimente.get_evenimente()[i].getName() == name) {
					std::cout << "Introduceti ziua evenimentului";
					std::cin >> day;
					std::cout << "Introduceti luna evenimentului";
					std::cin >> month;
					std::cout << "Introduceti anul evenimentului";
					std::cin >> year;

					evenimente.get_evenimente()[i].set_date(day, month, year);
					break;
				}
			}
			break;
		}
		case 3:
		{
			evenimente.afiseaza_evenimente();
			break;
		}

		case 4:
		{
			return 0;
		}
		
		}




	}

}