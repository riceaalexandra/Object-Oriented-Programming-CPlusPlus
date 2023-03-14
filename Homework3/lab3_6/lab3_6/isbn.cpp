#include "isbn.h"

Isbn::Isbn(string tara, string editura, string titlu) {
	identificator_tara = tara;
	identificator_titlu = titlu;
	identificator_editura = editura;
	string adunare;
	adunare = tara + titlu + editura;
	int num = stoi(adunare) % 11;
	if (num == 10) {
		cifra_control = 'X';
	}
	else {
		cifra_control = to_string(num)[0];
	}
} //3443-23-123-2
Isbn::Isbn(string isbn) {
	int nr = 0;
	for (int i = 0; i < 13; i++) {
		if (isbn[i] == '-')
			nr++;
		else
			if (nr == 0) {

				identificator_tara = identificator_tara + isbn[i];


			}
			else if (nr == 1) {
				identificator_editura = identificator_editura + isbn[i];

			}
			else if (nr == 2) {
				identificator_titlu = identificator_titlu + isbn[i];
			}

	}
	cifra_control = to_string(isbn[12])[0];
}

bool Isbn::validare_cifra_control() {
	string adunare = identificator_tara + identificator_editura + identificator_titlu;
	int num = stoi(adunare) % 11;
	if (to_string(num)[0] == cifra_control) {
		return true;
	}
	return false;
} 

void Isbn::afisare_isbn() {
	cout << identificator_tara << "-" << identificator_editura << "-" << identificator_titlu << "-" << cifra_control << "\n";
}

string Isbn::toString() {
	return identificator_tara + "-" + identificator_editura + "-" + identificator_titlu + "-" + cifra_control;
}