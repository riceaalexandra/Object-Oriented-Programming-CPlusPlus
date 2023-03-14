#include "prelucrare_fisier.h"
using namespace std;
ifstream fin("citire.txt");

int main()
{
    ifstream fin;
    int meniu = 1;
	while (meniu == 1)
	{
		cout << "\nAlegeti optiunea:" << endl;
		cout << "1. Afisare continut;" << endl;
		cout << "2. Afisare continut cu stergere comentarii;"<<endl;
		cout << "3. Afisare numar linii;" << endl;
		cout << "4. Afisare numar cuvinte;" << endl;
		cout << "5. Terminati sesiunea. \n\nOptiunea dvs:  ";
		int i;
		cin >> i;
		switch (i)
		{
		case 1:
		{
			cout << "Program Nemodificat: ";
			string program;
			fin.open("citire.txt", ios::in);
			while (getline(fin, program)) {
				cout<< program<<"\n";
			}
			fin.close();
			break;
		}
		case 2:
		{
			sterge_comentarii(fin);
			break;
		}
		case 3:
		{
			cout << "\n\n\nFisierul are " << nr_linii_fisier(fin)<<" linii.";
			cout << "\n\n";
			break;
		}
		case 4:
		{
			cout << "\n\n\nFisierul are " << nr_cuvinte_fisier(fin)<<" cuvinte";
			break;
		}
		case 5:
		{
			meniu = 0;
			break;
		}
		default:
		{
			cout << "\nTasta gresita! Reincercati:  ";
			meniu = 1;
		}
		}
	}
}