#pragma once
#include <iostream>
#include <string>
using namespace std;

class Isbn
{

private:
	string identificator_tara="";
	string identificator_editura="";
	string identificator_titlu="";
	char cifra_control;
public:
	static int nr_i;
	Isbn() {
		nr_i++;
		cout << "s-a apelat constructorul implicit";
	}
	Isbn(string tara, string editura, string titlu);
	Isbn(string isbn);
	bool validare_cifra_control();
	void afisare_isbn();

};