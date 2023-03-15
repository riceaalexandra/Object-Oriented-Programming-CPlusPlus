#include "CaineCuPete.h"
#include "CaineFaraPete.h"
#include <vector>

template<typename Base, typename T>
inline bool instanceof(const T* ptr) {
	return dynamic_cast<const Base*>(ptr) != nullptr;
}

int main() {

	std::vector<CaineCuPete> CainiCuPete;
	CaineCuPete c_c;
	CaineFaraPete c_f;
	std::vector<Caine*> caini;
	std::vector<CaineFaraPete> CainiFaraPete;
	while (true) {
		std::cout << "Alegeti o optiune:\n";
		std::cout << "1. Introduceti un caine cu pete;\n";
		std::cout << "2. Introduceti un caine fara pete;\n";
		std::cout << "3. Afisati cainii cu pete;\n";
		std::cout << "4. Afisati cainii fara pete;\n";
		std::cout << "5. Afisati cainii;\n";
		std::cout << "6. Inchideti programul;\n\n";
		int optiune;
		std::cin >> optiune;
		switch (optiune) {
		case 1:
		{
			Caine* c = new CaineCuPete();
			c->Citire_Caine();
			caini.push_back(c);
			std::cout << "Datele au fost introduse cu succes!\n";
			std::cout << "\n\n\n";
			break;
		}
		case 2:
		{
			Caine* c = new CaineFaraPete();
			c->Citire_Caine();
			caini.push_back(c);
			std::cout << "Datele au fost introduse cu succes!\n";

			break;
		}
		case 3:
		{

			std::cout << "Lista cainlor cu pete este:";
			for (auto it : caini) {
				if (CaineCuPete* v = dynamic_cast<CaineCuPete*>(it)) {
					// old was safely casted to NewType
					v->Afisare_Caine();
				}
			}
			std::cout << "\n\n\n";
			break;
		}
		case 4:
		{
			std::cout << "Lista cainlor fara pete este:";
			for (auto it : CainiFaraPete) {
				it.Afisare_Caine();
			}
			std::cout << "\n\n\n";

			break;
		}
		case 5:
		{
			std::cout << "Lista cainlor ";

			for (auto it : caini) {
				it->Afisare_Caine();
			}
			std::cout << "\n\n\n";

			break;
		}
		case 6:
			return 0;
		}
	}
}