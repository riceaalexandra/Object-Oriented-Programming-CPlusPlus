#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
string stergere_comentarii(string program);
int nr_linii_fisier(ifstream& fin);
void sterge_comentarii(ifstream& fin);
int nr_cuvinte_fisier(ifstream& fin);