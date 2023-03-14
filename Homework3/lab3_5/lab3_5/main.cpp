#include "isbn.h"

int main() {
	
	Isbn v[100];
	string tara, editura, titlu;
	int nr;
	printf("Introduceti numarul de carti");
	cin >> nr;
	for (int i = 0; i < nr; i++) {
		printf("Introduceti tara");
		cin >> tara;
		printf("Introduceti editura");
		cin >> editura;
		printf("Introduceti titlul");
		cin >> titlu;
		Isbn aux(tara, editura, titlu);
		v[i] = aux;
	}

	for (int i = 0; i < nr; i++) {
		v[i].afisare_isbn();
	}
	cout << "Nr instante=" << Isbn::nr_i;
}

