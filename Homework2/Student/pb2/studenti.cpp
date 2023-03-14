#include "studenti.h"

void Citire_adresa(Student& student, string nume_oras, string strada, int numar_strada, int cod_oras) {
	student.adresa.cod_oras = cod_oras;
	student.adresa.numar = numar_strada;
	student.adresa.nume_oras = nume_oras;
	student.adresa.strada = strada;
}

void Citire_telefon(Student& student, int numar_telefon, int prefix) {
	student.nr_telefon.numar = numar_telefon;
	student.nr_telefon.prefix = prefix;
}

void Citire_nume(Student& student, string nume_student, string prenume) {
	student.nume.nume = nume_student;
	student.nume.prenume = prenume;
}

void Citire_student_nou(Student& student) {
	string nume_student, prenume, nume_oras, strada, cod_facultate;
	int numar_strada, cod_oras, nr_absente, varsta, prefix, note[10];
	long nr_tel;
	float medie;
	cout << "Introduceti numele studentului nou:";
	cin >> nume_student;
	cout << "Introduceti prenumele studentului nou:";
	cin >> prenume;
	Citire_nume(student, nume_student, prenume);
	cout << "Introduceti orasul unde locuieste studentului nou:";
	cin >> nume_oras;
	cout << "Introduceti strada unde locuieste studentului nou:";
	cin >> strada;
	cout << "Introduceti numarul strazii unde locuieste studentul nou:";
	cin >> numar_strada;
	cout << "Introduceti codul orasului unde locuieste studentul nou:";
	cin >> cod_oras;
	Citire_adresa(student, nume_oras, strada, numar_strada, cod_oras);
	cout << "Introduceti codul facultatii la care este studentul nou:";
	cin >> cod_facultate;
	cout << "Introduceti varsta studentului nou:";
	cin >> varsta;
	Citire_student(student, cod_facultate, varsta);
	cout << "Introduceti prefixul de la numarul de telefon al studentului nou: ";
	cin >> prefix;
	cout << "Introduceti numarul de telefon al studentului nou: ";
	cin >> nr_tel;
	Citire_telefon(student, nr_tel, prefix);
	cout << "Introduceti cele 10 note";
	for (int i = 0; i < 10; i++) {
		cin >> note[i];
		student.note[i] = note[i];
	}
	medie = Medie(student);
	student.nr_absente = Nr_absente(student);
}

void Citire_student(Student& student, string cod_facultate, int varsta) {
	student.facultate = cod_facultate;
	student.varsta = varsta;
}

void Afisare_date_student(Student& student) {
	cout << "Numele studentului:  " << student.nume.nume << " " << student.nume.prenume << "\n";
	cout << "Varsta: " << student.varsta << "ani\n";
	cout << "Adresa studentului:\nOras: " << student.adresa.nume_oras << "\nCodul orasului: " << student.adresa.cod_oras << "\nStrada  " << student.adresa.strada << "  Numarul  " << student.adresa.numar;
	cout << "\nNumar student: " << student.nr_telefon.prefix << " " << student.nr_telefon.numar;
	cout << "\nCodul facultatii:  " << student.facultate;
	cout << "\nNumar absente: " << Nr_absente(student);
	cout << "\nMedie:  " << Medie(student);
	cout << "\n\n\n\n\n";
}

float Medie(Student& student) {
	float suma_note = 0.0;
	for (int i = 0; i < 10; i++) {
		suma_note = suma_note + student.note[i];
	}
	float medie = suma_note / 10;
	student.medie = medie;
	return medie;
}

void Modificare_adresa(Student& student, string nume_oras, string strada, int numar_strada, int cod_oras) {
	student.adresa.cod_oras = cod_oras;
	student.adresa.numar = numar_strada;
	student.adresa.nume_oras = nume_oras;
	student.adresa.strada = strada;
}

void Modificare_telefon(Student& student, long numar_telefon, int prefix) {
	student.nr_telefon.numar = numar_telefon;
	student.nr_telefon.prefix = prefix;
}

void Max_medie(Student* student, int nr) {
	Student aux;
	for (int i = 0; i < nr-1 ; i++) {
		for (int j = i + 1; j < nr; j++) {
			if (student[i].medie < student[j].medie) {
				aux = student[i];
				student[i] = student[j];
				student[j] = aux;
			}
		}
	}
	cout << "Cea mai mare medie este:  " << student[0].medie<<endl;
	cout <<"A studentilor:\n"<< student[0].nume.nume << " " << student[0].nume.prenume<<endl;
	for (int i = 0; i < nr-1; i++) {
		if (student[i].medie == student[i + 1].medie) {
			cout << student[i + 1].nume.nume << " " << student[i + 1].nume.prenume << endl;
		}
		else
		{
			break;
		}
	}
}

int Nr_restante(Student& student) {
	int nr_restante = 0;
	for (int i = 0; i < 10; i++) {
		if (student.note[i] < 5)
			nr_restante++;
	}
	return nr_restante;
}

void Max_restante(Student* student, int nr) {
	Student aux;
	for (int i = 0; i < nr - 1; i++) {
		for (int j = i + 1; j < nr; j++) {
			if (Nr_restante(student[i]) < Nr_restante(student[j])) {
				aux = student[i];
				student[i] = student[j];
				student[j] = aux;
			}
		}
	}
	cout << "Cele mai multe restante sunt: " << Nr_restante(student[0]) << endl;
	cout << "Ale studentilor:\n" << student[0].nume.nume << " " << student[0].nume.prenume << endl;
	for (int i = 0; i < nr - 1; i++) {
		if (Nr_restante(student[i]) == Nr_restante(student[i+1])) {
			cout << student[i + 1].nume.nume << " " << student[i + 1].nume.prenume << endl;
		}
		else
		{
			break;
		}
	}
}

int Nr_absente(Student& student) {
	int nr_absente = 0;
	for (int i = 0; i < 10; i++) {
		if (student.note[i] == 0) {
			nr_absente++;
		}
	}
	return nr_absente;
}

void Modificare_note(Student& student) {
	int note[10], suma_note = 0;
	cout << "Introduceti cele 10 note:  ";
	for (int i = 0; i < 10; i++) {
		cin >> note[i];
		student.note[i] = note[i];
		suma_note = suma_note + note[i];
	}
	student.medie = suma_note / 10.0;
	student.nr_absente = Nr_absente(student);
}

void Afisare_stud_promovati_alfabetic(Student* student, int nr) {
	Student aux, copie_student[100];
	int nr_copie = 0;
	for (int i = 0; i < nr; i++) {
		if (Nr_restante(student[i]) == 0) {
			copie_student[nr_copie] = student[i];
			nr_copie++;
		}
	}
	for (int i = 0; i < nr_copie - 1; i++) {
		for (int j = i + 1; j < nr_copie; j++) {
			if (compara_string(copie_student[i].nume.nume, copie_student[j].nume.nume)==0) {
				aux = copie_student[i];
				copie_student[i] = copie_student[j];
				copie_student[j] = aux;
			}
		}
	}
	for (int i = 0; i < nr_copie; i++) {
		cout << copie_student[i].nume.nume << " " << copie_student[i].nume.prenume << " " << copie_student[i].medie<<endl;
	}
}

void Afisare_stud_promovati_medie(Student* student, int nr) {
	Student aux, copie_student[100];
	int nr_copie = 0;
	for (int i = 0; i < nr; i++) {
		if (Nr_restante(student[i]) == 0) {
			copie_student[nr_copie] = student[i];
			nr_copie++;
		}
	}
	for (int i = 0; i < nr_copie - 1; i++) {
		for (int j = i + 1; j < nr_copie; j++) {
			if (copie_student[i].medie < copie_student[j].medie) {
				aux = copie_student[i];
				copie_student[i] = copie_student[j];
				copie_student[j] = aux;
			}
		}
	}
	for (int i = 0; i < nr_copie; i++) {
		cout << copie_student[i].nume.nume << " " << copie_student[i].nume.prenume << " " << copie_student[i].medie << endl;
	}

}

void Afisare_stud_restantieri_alfabetic(Student* student, int nr) {
	Student aux, copie_student[100];
	int nr_copie = 0;
	for (int i = 0; i < nr; i++) {
		if (Nr_restante(student[i]) != 0) {
			copie_student[nr_copie] = student[i];
			nr_copie++;
		}
	}
	for (int i = 0; i < nr_copie - 1; i++) {
		for (int j = i + 1; j < nr_copie; j++) {
			if (compara_string(copie_student[i].nume.nume, copie_student[j].nume.nume) == 0) {
				aux = copie_student[i];
				copie_student[i] = copie_student[j];
				copie_student[j] = aux;
			}
		}
	}
	for (int i = 0; i < nr_copie; i++) {
		cout << copie_student[i].nume.nume << " " << copie_student[i].nume.prenume << endl;
	}
}

void Afisare_stud_restantieri_restante(Student* student, int nr) {
	Student aux, copie_student[100];
	int nr_copie = 0;
	for (int i = 0; i < nr; i++) {
		if (Nr_restante(student[i]) != 0) {
			copie_student[nr_copie] = student[i];
			nr_copie++;
		}
	}
	for (int i = 0; i < nr_copie - 1; i++) {
		for (int j = i + 1; j < nr_copie; j++) {
			if (Nr_restante(copie_student[i]) < Nr_restante(copie_student[j])) {
				aux = copie_student[i];
				copie_student[i] = copie_student[j];
				copie_student[j] = aux;
			}
		}
	}
	for (int i = 0; i < nr_copie; i++) {
		cout << copie_student[i].nume.nume << " " << copie_student[i].nume.prenume << " " << Nr_restante(copie_student[i]) << endl;
	}
}

int compara_string(string a, string b) {
	if (a.size() <= b.size()) {
		for (int i = 0; i < a.size(); i++) {
			if (a[i] < b[i]) {
				return 1;
			}
			else if (a[i] > b[i]) {
				return 0;
			}
		}
		return 1;
	}
	else
	{
		for (int i = 0; i < b.size(); i++) {
			if (a[i] < b[i]) {
				return 1;
			}
			else if (a[i] > b[i]) {
				return 0;
			}
		}
		return 1;
	}
}
