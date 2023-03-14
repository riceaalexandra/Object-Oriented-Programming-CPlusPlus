#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

struct Nume {
	string nume;
	string prenume;
};
struct Adresa {
	string nume_oras;
	string strada;
	int cod_oras;
	int numar;
};
struct Telefon {
	int prefix;
	long numar;
};
struct Student {
	Adresa adresa;
	Telefon nr_telefon;
	Nume nume;
	string facultate;
	int varsta;
	int note[10];
	float medie;
	int nr_absente;
};
void Citire_adresa(Student& student, string nume_oras, string strada, int numar_strada, int cod_oras);
void Citire_telefon(Student& student, int numar_telefon, int prefix);
void Citire_nume(Student& student, string nume_student, string prenume);
void Citire_student(Student& student, string cod_facultate, int varsta);
void Citire_note(Student& student);
float Medie(Student& student);
void Citire_student_nou(Student& student);
void Modificare_adresa(Student& student, string nume_oras, string strada, int numar_strada, int cod_oras);
void Modificare_telefon(Student& student, long numar_telefon, int prefix);
void Modificare_note(Student& student);
void Modificare_varsta(Student& student, int varsta);
void Max_medie(Student* student, int nr);
void Max_restante(Student* student, int nr);
int Nr_restante(Student& student);
int Nr_absente(Student& student);
int compara_string(string a, string b);
void Afisare_stud_promovati_alfabetic(Student* student, int nr);
void Afisare_stud_promovati_medie(Student* student, int nr);
void Afisare_stud_restantieri_alfabetic(Student* student, int nr);
void Afisare_stud_restantieri_restante(Student* student, int nr);
void Afisare_date_student(Student& student);