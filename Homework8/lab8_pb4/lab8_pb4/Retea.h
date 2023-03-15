#ifndef RETEA_H
#define RETEA_H
#include "Utilizator.h"
#include "Administrator.h"
class Administrator;
class Retea
{
public:
	Retea();
	Retea(string);
	Administrator* SetAdmin(Administrator* administrator) {
		this->administrator = administrator;
	}
	Administrator* GetAdministrator() {
		return administrator;
	}
	void Creare_Utilizatori();
	void Creare_Admin();
	void DeconectareUtilizator();
	void VizulaizareUtilizatori();
	void AdaugaUtilizator();
	void SchimbareParola();
	void VizulaizareAdmin();
	void VizulaizareUtilizatoriFisier();
	~Retea();
private:
	int numar_utilizatori = 0;
	string nume_retea;
	Administrator* administrator;
	Utilizator utilizatori[11];
};
#endif