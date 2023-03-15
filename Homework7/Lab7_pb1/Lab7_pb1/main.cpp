#include "Complex.h"

void test_pentru_mine() {
	/*Complex z1(5.0, 12.0), z3(5.0, 12.0);
	Complex z2, z;
	std::cout << "Z1 este: ";
	z1.Afisare_complex();
	std::cout << "Z3 este: ";
	z3.Afisare_complex();
	z = z1 ^ 3;
	z.Afisare_complex();
	z = z * z1;
	z.Afisare_complex();
	std::cout << "Z3 este: ";
	z3.Afisare_complex();
	std::cout << "Z1+Z3 este: ";
	z = z1 + z3;                                     //  ??de ce in cauzl acesta se apeleaza si constructorul general
	z.Afisare_complex();
	std::cout << "Z1-Z3 este: ";
	z = z1 - z3;
	z.Afisare_complex();
	std::cout << "Z1/Z3 este: ";
	z = z1 / z3;
	z.Afisare_complex();
	std::cout << "Z1*Z3 este: ";
	z = z1 * z3;
	z.Afisare_complex(); 
	z = z1 ^ -4; 
	z.Afisare_complex(); */

}

void functie_test() {
	Complex z1, z2, z, suma_z1, suma_z2;
	std::cout << "Introduceti numarul de elemente ale vectorului:  ";
	int n;
	std::cin >> n;
	Complex v[100];
	std::cout << "Introduceti elementele vectorului: ";
	for (int i = 0; i < n; i++) {
		v[i].Set_complex();
	}
	for (int i = 0; i < n; i++) {
		v[i].Afisare_complex();
	}
	for (int i = 0; i < n; i = i + 2) {
		v[i] = v[i] ^ 4;
		v[i].Afisare_complex();
		z1 = suma_z1 + v[i];
	}
	for (int i = 0; i < n; i = i + 2) {
		v[i] = v[i] ^ 3;
		z1 = suma_z1 + v[i];
	}
	z = z1 / z2;
	z.Afisare_complex();
}

int main() {
	//test_pentru_mine();
	functie_test();
}