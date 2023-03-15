#pragma once
#include <iostream>
class Complex
{
private:
	long double real, imaginar;
public:
	Complex(); // constructor implicit, cu parametrii initailziati cu 0;
	Complex(long double, long double = 0.0); // constructor general care poate fi utilizat ca un constrcutor cu un parametru, dar si ca un constructor cu 2 parametrii (real,imaginar=0);
	Complex(const Complex&); // constructor de copiere
	~Complex();
	void Set_complex();
	void Afisare_complex(); //afisare numar complex sub forma (a) + (bi)
	Complex& operator=(const Complex&); // supraincarcarea operatorului de atribuire, este NECESAR sa fie definit ca functie membru
	friend const Complex operator+(const Complex&, const Complex&); // supraincarcarea operatorului +, este INDICAT sa fie definit ca functie prieten
	const Complex operator-(const Complex&); /// supraincarcarea operatorului -, declarata ca functie membru
	friend const Complex operator*(const Complex&, const Complex&); // supraincarcarea operatorului *
	friend const Complex operator/(const Complex&, const Complex&); // supraincarcarea operatorului /
    friend const Complex operator^(const Complex&, const int); // supraincarcarea operatorului ^, care ridica un numar complex la o putere
	friend const long double operator~(const Complex&); // supraincarcarea operatorului ~, care calculeaza modulul nuamrului complex
};