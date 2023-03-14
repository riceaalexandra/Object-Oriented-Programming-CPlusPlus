#pragma once
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Calendar
{
private:
	int anul_inceput, anul_sfarsit;

public:
	Calendar();
	Calendar(int anul_inceput, int anul_sfarsit);
	~Calendar() {

	}
	void set_anul_sfarsit(int anul_sfarsit);
	void set_anul_inceput(int anul_inceput);
	int get_anul_sfarsit();
	int get_anul_inceput();
	void Afisare_Calendar(int anul_sfarsit, int anul_inceput);
	void Afisare_Sarbatori(int anul_sfarsit, int anul_inceput);
	void Afisare_luna_an(int anul_sfarsit, int anul_inceput);
};

