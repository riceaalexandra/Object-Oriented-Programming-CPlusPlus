#pragma once
#include <iostream>
#include <string>
using namespace std;

class Isbn
{

private:
	string identificator_tara = "";
	string identificator_editura = "";
	string identificator_titlu = "";
	char cifra_control;
public:
	Isbn() {

	}
	string toString();
	string tostring() {
		return identificator_tara + "-" + identificator_editura + "-" + identificator_titlu + "-" + cifra_control;
	}
	Isbn(string tara, string editura, string titlu);
	Isbn(string isbn);
	bool validare_cifra_control();
	void afisare_isbn();

};