#include "atm.h"

int Verificare_pin(Client* c1, string& pin) {
	static int nr = 0;
	if (c1->pin == pin) {
		return 1;
	}
	else
	{
		if (nr == 3) {
			cout << "Parola gresita. Ati incercat parola de prea multe ori.\n";
			return 0;
		}
		while (nr < 3 ) {
			cout << "Parola gresita. Mai aveti "<<3-nr<<" incercari.\nReintroduceti parola:  ";
			cin >> pin;
			nr++;
			if (Verificare_pin(c1, pin) == 1) {
				return Verificare_pin(c1, pin);
			}
		}
	}
}
int pozitie(Client* c1, int i, string cont) {
	int cont_gasit = -1;
	for (int k = 0; k < i; k++) {
		if (c1[k].cont == cont) {
			cont_gasit = k;
		}
	}
	return cont_gasit;
}
int Gasire_cont(Client* c, int i, string& cont) {
	int ok = 1, cont_gasit=pozitie(c,i,cont);
	string nim_cont;
	if (cont_gasit != -1) {
		string pin;
		cout << "Introduceti pinul:  ";
		cin >> pin;
		if (Verificare_pin(&c[cont_gasit], pin) == 1)
			return 1;
		else
			return 0;
	}
	else
	{
		while (ok == 1) {
			cout << "Contul dumneasvoastra nu a fost gasit. Reintroduceti contul:  ";
			cin >> cont;
			return Gasire_cont(c, i, cont);
		}
	}
	return 0;
}
void Extragere_bani(Client* c1) {
	int suma;
	cout << "Introduceti suma dorita:  ";
	cin >> suma;
	if (c1->sold == 0) {
		cout << "Nu aveti deloc bani. La revedere";
		exit(0);
	}
	while (c1->sold < suma) {
		cout << "Sold insudicient. Reintroduceti suma: ";
		cin >> suma;
	}
	c1->sold = c1->sold - suma;
	cout << "Tranzactia a fost efectuata cu succes! Mai aveti " << c1->sold << " " << c1->valuta << "\n";
}
void Detalii_card(Client* c1) {
	cout << "Numele si Prenumele dvs:  " << c1->nume << " " << c1->prenume;
	cout << "\nSoldul dvs este:  "<<c1->sold<<c1->valuta<<endl;
}
void Schimb(Client* c1) {
	int i;
	cout << "Contul dumnevoastra este in "<<c1->valuta<<".\nPuteti schimba in : \n         1.Zlt; \n         2.Euro.\n         3.Lei\nOptiunea dvs : ";
	cin >> i;
	if(i == 1){
		if (c1->valuta=="Zlt") {
			c1->sold = c1->sold;
		}
		else if (c1->valuta == "Euro") {
			c1->sold = c1->sold * 10;
			c1->valuta = "Zlt";
		}
		else if (c1->valuta == "Lei") {
			c1->sold = c1->sold * 2;
			c1->valuta = "Zlt";
		}
		else {
			cout << "Ati introdus gresit in fisier.";
			exit(0);
		}
	}
	else if (i == 2) {
		if (c1->valuta == "Zlt") {
			c1->sold = c1->sold/10;
			c1->valuta = "Euro";
		}
		else if (c1->valuta == "Euro") {
			c1->sold = c1->sold;
		}
		else if (c1->valuta == "Lei") {
			c1->sold = c1->sold / 5;
			c1->valuta = "Euro";
		}
		else {
			cout << "Ati introdus gresit in fisier.";
			exit(0);
		}
	}
	else if (i == 3) {
		if (c1->valuta == "Zlt") {
			c1->sold = c1->sold * 2;
			c1->valuta = "Lei";
		}
		else if (c1->valuta == "Lei") {
			c1->sold = c1->sold;
		}
		else if (c1->valuta == "Euro") {
			c1->sold = c1->sold / 5;
			c1->valuta = "Lei";
		}
		else {
			cout << "Ati introdus gresit in fisier.";
			exit(0);
		}
	}
	cout << "Tranzactia a fost efectuata cu succes! Mai aveti " << c1->sold << " " << c1->valuta << "\n";
}
void Transfer_bani(Client* c1, Client* c2,int suma) {
	int suma_euro, suma_lei, suma_zlt;
	if (c1->sold == 0) {
		cout << "Nu mai aveti deloc bani. La revedere";
		exit(0);
	}
	if (c1->valuta != "Euro" && c1->valuta != "Lei" && c1->valuta != "Zlt" && c2->valuta != "Euro" && c2->valuta != "Lei" && c2->valuta != "Zlt" )
	{
		cout << "Ati introdus gresit in fisier.";
		cout << c1->valuta;
		exit(0);
	}
	if (c1->valuta == c2->valuta) {
		if (c1->sold < suma) {
			cout << "Sold insuficent.\n";
		}
		else {
			c1->sold = c1->sold - suma;
			c2->sold = c2->sold + suma;
			cout << "Tranzacta a fost efectuata cu succes! ";
		}

	}
	else if (c1->valuta == "Euro")
	{
		suma_euro = suma;
		if (c2->valuta == "Lei") {
			suma_lei = suma * 5;
			if (c1->sold >= suma_euro) {
				c1->sold = c1->sold - suma_euro;
				c2->sold = c2->sold + suma_lei;
				cout << "Transferul a fost efectuat cu succes.\n";
			}
			else {
				cout << "Sold insuficient";
			}
		}
		else if (c2->valuta == "Zlt") {
			suma_zlt = suma * 10;
			if (c1->sold >= suma_euro) {
				c1->sold = c1->sold - suma_euro;
				c2->sold = c2->sold + suma_zlt;
				cout << "Transferul a fost efectuat cu succes.\n";
			}
			else {
				cout << "Sold insuficient";
			}
		}
	}
	else if (c1->valuta == "Lei")
	{
		suma_lei = suma;
		if (c2->valuta == "Euro") {
			if (c1->sold >= suma_lei) {
				suma_euro = suma / 5;
				c1->sold = c1->sold - suma_lei;
				c2->sold = c2->sold + suma_euro;
				cout << "Transferul a fost efectuat cu succes.\n";
			}
			else {
				cout << "Sold insuficient";
			}
		}
		else if (c2->valuta == "Zlt") {
			suma_zlt = suma / 2;
			if (c1->sold >= suma_zlt) {
				c1->sold = c1->sold - suma_lei;
				c2->sold = c2->sold + suma_zlt;
				cout << "Transferul a fost efectuat cu succes. \n";
			}
			else {
				cout << "Sold insuficient";
			}
		}
	}
	else if (c1->valuta == "Zlt")
	{
		suma_zlt = suma;
		if (c2->valuta == "Lei") {
			if (c1->sold >= suma_zlt) {
				suma_lei = suma * 2;
				c1->sold = c1->sold - suma_zlt;
				c2->sold = c2->sold + suma_lei;
				cout << "Transferul a fost efectuat cu succes.\n";
			}
			else {
				cout << "Sold insuficient";
			}
		}
		else if (c2->valuta == "Euro") {
			suma_euro = suma * 10;
			if (c1->sold >= suma_euro) {
				c1->sold = c1->sold - suma_zlt;
				c2->sold = c2->sold + suma_euro;
				cout << "Transferul a fost efectuat cu succes. \n";
			}
			else
				cout << "Sold insuficient";
		}
	}
}