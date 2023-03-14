#pragma once

#include <iostream>
#include <stdlib.h>

using namespace std;

class Bila {
private:
	int numar_asociat;
	bool stare;
public:
	void set_valoare(int numar_asociat);
	void set_stare(bool stare);

	int get_valoare();
	bool get_stare();
};