#include "carti_de_joc.h"

int main() {
	Pachet pachet[53];
	creare_pachet(pachet);
	//afisare_pachet(carte_noua);
	joc_21(pachet);
}