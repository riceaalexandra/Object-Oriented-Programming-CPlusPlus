#include "Cerc.h"
#include "Dreptunghi.h"
#include "Patrat.h"

int main() {
	while (1) {
		int option;
		std::cout << "\n1. Introduceti un cerc\n";
		std::cout << "2. Introduceti un dreptunghi\n";
		std::cout << "3. Introduceti un patrat\n";
		std::cout << "4. Inchideti programul\n";
		std::cout << "Alegeti optiunea:  ";
		std::cin >> option;
		switch (option)
		{
		case 1:
		{
			double raza, x, y;
			std::cout << "Introduceti coordonatele centrului cerclui\nX: "; ///????????? dc nu merge sa fac punct si sa aplez cerc c(punct, raza)
			std::cin >> x;
			std::cout << "Y: ";
			std::cin >> y;
			std::cout << "Introduceti raza cercului: ";
			std::cin >> raza;
			Cerc c(x, y, raza);
			c.Arie();
			c.Perimetru();
			break;
		}
		case 2:
		{
			Punct a, b;
			std::cout << "Introduceti coordonatele lui A\n";
			a.CitirePunct();
			std::cout << "Introduceti coordonatele lui B\n";
			b.CitirePunct();
			Dreptunghi cd(&a, &b);
			cd.Arie();
			cd.Perimetru();
			break;
		}
		case 3:
		{
			Punct a, b;
			std::cout << "Introduceti coordonatele lui A\n";
			a.CitirePunct();
			std::cout << "Introduceti coordonatele lui B\n";
			b.CitirePunct();
			Patrat cp(&a, &b);
			cp.Arie();
			cp.Perimetru();
			break;
		}
		case 4:
		{
			return 0;
		}
		default:
			break;
		}
		
	}
}