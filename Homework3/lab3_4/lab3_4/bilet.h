#pragma once
#pragma once
#include "bila.h"

class Bilet {
private:
	string nume;
	Bila bile_bilet[49];
	Bila bile_extrase1[6];
	Bila bile_extrase2[6];
	Bila bile_extrase3[6];

public:
	Bilet(string nume); // constructor, creare un bilet
	Bilet() {
	}
	void init();
	void nr_alese_bilet1();
	void nr_alese_bilet2();
	void nr_alese_bilet3();
	void reset();
	Bila* get_1() {
		return this->bile_extrase1;
	}
	Bila* get_2() {
		return this->bile_extrase2;
	}
	Bila* get_3() {
		return this->bile_extrase3;
	}
	string get_nume() {
		return this->nume;
	}
};