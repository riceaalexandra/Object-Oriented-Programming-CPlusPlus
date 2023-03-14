#include "studenti.h"
ifstream fin("student.txt");
ofstream fout("student_rez.txt");

void Citire_note(Student& student) {
	int note[10];
	for (int i = 0; i < 10; i++) {
		fin >> note[i];
		student.note[i] = note[i];
	}
}

void Citire_din_fisier(Student& student) {
	string nume_student, prenume, nume_oras, strada, cod_facultate;
	int numar_strada, cod_oras, nr_absente, varsta, prefix;
	long nr_tel;
	float medie;
	fin >> nume_student;
	fin >> prenume;
	Citire_nume(student, nume_student, prenume);
	fin >> nume_oras >> strada >> numar_strada >> cod_oras;
	Citire_adresa(student, nume_oras, strada, numar_strada, cod_oras);
	fin >> cod_facultate >> varsta;
	Citire_student(student,  cod_facultate, varsta);
	fin >> prefix >> nr_tel;
	Citire_telefon(student, nr_tel, prefix);
	Citire_note(student);
	medie = Medie(student);
}

int main() {
	Student* student;
	student = new Student[500 * sizeof(student)];
	string nume_student, prenume, nume_oras, strada, cod_facultate;
	int numar_strada, cod_oras, nr_absente, varsta, nr_studenti = 0,prefix;
	long nr_tel;
	float medie;
	if (fin.fail())
	{
		cout << "Citirea din fisier nu a mers";
	}
	else
	{
		fin >> nr_studenti;
		for (int i = 0; i < nr_studenti; i++) {
			Citire_din_fisier(student[i]);
		}
	}
	int ok = 1;
	while (ok == 1) {
		cout << "\nAlegeti optiunea:" << endl;
		cout << "1. Numarul studentilor din grupa;" << endl;
		cout << "2. Afisarea datelor tuturor studentilor;" << endl;
		cout << "3. Afisarea datelor despre un student;" << endl;
		cout << "4. Adaugare student nou;" << endl;
		cout << "5. Stergerea unui student;" << endl;
		cout << "6. Modificarea datelor unui student;\n";
		cout << "7. Afisarea studentilor cu cea mai mare medie;\n";
		cout << "8. Afisarea studentilor cu cele mai multe restante si absente;\n"; //daca are in nota 0 inseamna ca are absenta si daca are sub 5 restanta
		cout << "9. Afisarea studentilor promovati in ordine alfabetica;\n";
		cout << "10.Afisarea studentilor promovati in ordinea descrescatoare a mediilor;\n";
		cout << "11. Afisarea studentilor restantieri in ordine alfabetica;\n";
		cout << "12. Afisarea studentilor restantieri in ordinea crescatoare a numarul de restante si absente;\n";
		cout << "13. Terminati sesiunea. \n\nOptiunea dvs:  ";
		int b;
		cin >> b;
		switch (b)
		{
		case 1:
		{
			cout << "Numarul studentilor este " << nr_studenti;
			cout << "\nMai doriti ceva de la program? ?:>     ";
			string a;
			cin >> a;
			transform(a.begin(),a.end(),a.begin(), ::toupper);
			if (a == "DA") {
				break;
			}
			else
			{
				ok= 0;
				cout << "Verificati in txt noile date.";
				break;
			}
		}
		case 2:
		{
			for (int i = 0; i < nr_studenti; i++) {
				Afisare_date_student(student[i]);
			}
			cout << "\nMai doriti ceva de la program? ?:>     ";
			string a;
			cin >> a;
			transform(a.begin(), a.end(), a.begin(), ::toupper);
			if (a == "DA") {
				break;
			}
			else
			{
				ok= 0;
				cout << "Verificati in txt noile date.";
				break;
			}
		}
		case 3:
		{
			int k = 1;
			string nume, prenume;
			cout << "Introduceti numele si prenumele studentului pe care il cautati:";
			int t = 0;

			cin >> nume >> prenume;
			for (int i = 0; i < nr_studenti; i++) {
				if (student[i].nume.nume == nume && student[i].nume.prenume == prenume) {
					Afisare_date_student(student[i]);
					t = 1;
					break;
				}
			}
			while (t == 0) {
				cout << "Studentul  nu a fost gasit. Reintroduceti numele si prenumele:  ";
				cin >> nume >> prenume;
				for (int i = 0; i < nr_studenti; i++) {
					if (student[i].nume.nume == nume && student[i].nume.prenume == prenume) {
						Afisare_date_student(student[i]);
						t = 1;
						break;
					}
				}
			}
			cout << "\nMai doriti ceva de la program? ?:>     ";
			string a;
			cin >> a;
			transform(a.begin(), a.end(), a.begin(), ::toupper);
			if (a == "DA") {
				break;
			}
			else
			{
				cout << "Verificati in txt noile date.";
				ok= 0;
				break;
			}
		}
		case 4:
		{
			nr_studenti++;
			Citire_student_nou(student[nr_studenti-1]);
			int k = 1;
			string a;
			while (k == 1) {
				cout << "Doriti sa mai adaugati un student?      ";
				cin >> a;
				transform(a.begin(), a.end(), a.begin(), ::toupper);
				if (a == "DA") {
					nr_studenti++;
					Citire_student_nou(student[nr_studenti - 1]);
				}
				else
				{
					k = 0;
				}
			}
			cout << "\nMai doriti ceva de la program? ?:>     ";
			cin >> a;
			transform(a.begin(), a.end(), a.begin(), ::toupper);
			if (a == "DA") {
				break;
			}
			else
			{
				cout << "Verificati in txt noile date.";
				ok=0;
				break;
			}
		}
		case 5:
		{
			int t = 0;
			string nume, prenume;
			cout << "Introduceti numele si prenumele studentului pe care doriti sa il stergeti:";
			cin >> nume >> prenume;
			for (int i = 0; i < nr_studenti; i++) {
				if (student[i].nume.nume == nume && student[i].nume.prenume == prenume) {
					t = 1;
					for (int j = i + 1; j <= nr_studenti; ++j)
						student[j - 1] = student[j];
					nr_studenti--;
					i--;
				}
			}
			while (t == 0) {
				cout << "Studentul  nu a fost gasit. Reintroduceti numele si prenumele:  ";
				cin >> nume >> prenume;
				for (int i = 0; i < nr_studenti; i++) {
					if (student[i].nume.nume == nume && student[i].nume.prenume == prenume) {
						t = 1;
						for (int j = i + 1; j <= nr_studenti; ++j)
							student[j - 1] = student[j];
						nr_studenti--;
						i--;
					}
				}
			}
			cout << "\nMai doriti ceva de la program? ?:>     ";
			string a;
			cin >> a;
			transform(a.begin(), a.end(), a.begin(), ::toupper);
			if (a == "DA") {
				break;
			}
			else
			{
				cout << "Verificati in txt noile date.";
				ok=0;
				break;
			}
		}
		case 6:
		{
			string nume_cautat, prenume_cautat;
			cout << "Introduceti numele si prenumele studentului caruia vreti sa ii modificati: ";
			cin >> nume_cautat >> prenume_cautat;
			for (int i = 0; i < nr_studenti; i++) {
				if (student[i].nume.nume == nume_cautat && student[i].nume.prenume == prenume_cautat) {
					int ok2 = 1;
					while (ok2 == 1) {
						cout << "\n1. Modicare adresa;\n";
						cout << "2. Modificare telefon;\n";
						cout << "3. Modificare cod facultate;\n";
						cout << "4. Modificare note;\n";
						cout << "5. Modificare varsta;\n";
						cout << "6. Nemodificare\n\nOptiunea dvs:";
						int alegere;
						cin >> alegere;
						switch (alegere) {
						case 1:
						{
							string nume_oras_nou, strada_noua;
							int numar_strada_nou, cod_oras_nou;
							cout << "Introduceti noul oras:";
							cin >> nume_oras_nou;
							cout << "Introduceti noua strada:";
							cin >> strada_noua;
							cout << "Introduceti noul numar al strazii:";
							cin >> numar_strada_nou;
							cout << "Introduceti noul cod al orasului:";
							cin >> cod_oras_nou;
							Modificare_adresa(student[i], nume_oras_nou, strada_noua, numar_strada_nou, cod_oras_nou);
							break;
						}
						case 2:
						{
							int numar_telefon_nou, prefix_nou;
							cout << "Introduceti noul prefix:";
							cin >> prefix_nou;
							cout << "Introduceti noul numar de telefon:";
							cin >> numar_telefon_nou;
							Modificare_telefon(student[i], numar_telefon_nou, prefix_nou);
							break;
						}
						case 3:
						{
							string cod_facultate_nou;
							cout << "Introduceti codul facultatii noi:";
							cin >> cod_facultate_nou;
							student[i].facultate = cod_facultate_nou;
							break;
						}
						case 4:
						{
							Modificare_note(student[i]);
							
							break;
						}
						case 5:
						{
							int varsta_noua;
							cout << "Introduceti noua varsta a studentului:";
							cin >> varsta_noua;
							student[i].varsta = varsta_noua;
							break;
						}
						case 6:
						{
							ok2 = 0;
							break;
						}
						default:
						{
							cout << "\nTasta gresita! Reincercati:  ";
							ok2 = 1;
						}
						}
					}
				}
			}
			cout << "\nMai doriti ceva de la program? ?:>     ";
			string a;
			cin >> a;
			transform(a.begin(), a.end(), a.begin(), ::toupper);
			if (a == "DA") {
				break;
			}
			else
			{
				cout << "Verificati in txt noile date.";
			   ok = 0;
			   break;
			}
		}
		case 7:
		{
			Max_medie(student, nr_studenti);
			cout << "\nMai doriti ceva de la program? ?:>     ";
			string a;
			cin >> a;
			transform(a.begin(), a.end(), a.begin(), ::toupper);
			if (a == "DA") {
				break;
			}
			else
			{
				cout << "Verificati in txt noile date.";
				ok = 0;
				break;
			}
		}
		case 8:
		{
			Max_restante(student, nr_studenti);
			cout << "\nMai doriti ceva de la program? ?:>     ";
			string a;
			cin >> a;
			transform(a.begin(), a.end(), a.begin(), ::toupper);
			if (a == "DA") {
				break;
			}
			else
			{
				cout << "Verificati in txt noile date.";
				ok = 0;
				break;
			} 
		}
		case 9:
		{
			Afisare_stud_promovati_alfabetic(student, nr_studenti);
			cout << "\nMai doriti ceva de la program? ?:>     ";
			string a;
			cin >> a;
			transform(a.begin(), a.end(), a.begin(), ::toupper);
			if (a == "DA") {
				break;
			}
			else
			{
				cout << "Verificati in txt noile date.";
				ok = 0;
				break;
			}
		}
		case 10:
		{
			Afisare_stud_promovati_medie(student, nr_studenti);
			cout << "\nMai doriti ceva de la program? ?:>     ";
			string a;
			cin >> a;
			transform(a.begin(), a.end(), a.begin(), ::toupper);
			if (a == "DA") {
				break;
			}
			else
			{
				cout << "Verificati in txt noile date.";
				ok = 0;
				break;
			}
		}
		case 11:
		{
			Afisare_stud_restantieri_alfabetic(student, nr_studenti);
			cout << "\nMai doriti ceva de la program? ?:>     ";
			string a;
			cin >> a;
			transform(a.begin(), a.end(), a.begin(), ::toupper);
			if (a == "DA") {
				break;
			}
			else
			{
				cout << "Verificati in txt noile date.";
				ok = 0;
				break;
			}
		}
		case 12:
		{
			Afisare_stud_restantieri_restante(student, nr_studenti);
			cout << "\nMai doriti ceva de la program? ?:>     ";
			string a;
			cin >> a;
			transform(a.begin(), a.end(), a.begin(), ::toupper);
			if (a == "DA") {
				break;
			}
			else
			{
				cout << "Verificati in txt noile date.";
				ok = 0;
				break;
			} 
		}
		case 13:
		{
			cout << "Verificati in txt noile date.";
			ok = 0;
			break;
		}
		default:
		{
			cout << "\nTasta gresita! Reincercati:  ";
			ok = 1;
		}
		}
	}
	for (int l = 0; l < nr_studenti; l++) {
		
		fout << "Numele studentului:\n" << student[l].nume.nume << " " << student[l].nume.prenume << "\n";
		fout << "Varsta: " << student[l].varsta << "ani\n";
		fout << "Adresa studentului:\nOras: " << student[l].adresa.nume_oras << "\nCodul orasului: " << student[l].adresa.cod_oras << "\nStrada  " << student[l].adresa.strada << "  Numarul  " << student[l].adresa.numar;
		fout << "\nNumar student: " << student[l].nr_telefon.prefix << " " << student[l].nr_telefon.numar;
		fout << "\nCodul facultatii:  " << student[l].facultate;
		fout << "\nNumar absente: " << Nr_absente(student[l]);
		fout << "\nMedie:" << Medie(student[l]);
		fout << "\n\n\n\n\n";
	}
	delete[] student;
	fin.close();
}