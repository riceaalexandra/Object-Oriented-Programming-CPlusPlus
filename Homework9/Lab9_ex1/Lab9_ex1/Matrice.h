#include <iostream>
using namespace std;
template <typename Tip>
class Matrice
{
private:
	int linie, coloana;
	Tip** mat;
public:
	Matrice(int = 0, int = 0);
	~Matrice();
	Matrice(const Matrice<Tip>&);
	void citire();
	void afisare();
	void init_mat();
	void init_matI();
	Matrice<Tip> operator+(Matrice<Tip>&);
	Matrice<Tip>& operator=(Matrice<Tip>);
	Matrice<Tip> operator^(int);
	Matrice<Tip> operator- (Matrice<Tip>&);
	Matrice<Tip> operator*(Matrice<Tip>&);
};

template <typename Tip>
Matrice<Tip>::Matrice(int linie, int coloana) {
	this->linie = linie;
	this->coloana = coloana;
	mat = new Tip * [linie];
	for (int i = 0; i < linie; i++) {
		mat[i] = new Tip[coloana];
	}
}

template <typename Tip>
void Matrice<Tip>::citire() {
	cout << "Introduceti numarul de linii ";
	int linii, coloane;
	cin >> linii;
	cout << "Introduceti numarul de coloane: ";
	cin >> coloane;
	this->linie = linii;
	this->coloana = coloane;
	mat = new Tip * [this->linie];
	for (int i = 0; i < this->linie; i++) {
		mat[i] = new Tip[this->coloana];
	}
	for (int i = 0; i < this->linie; i++) {
		for (int j = 0; j < this->coloana; j++) {
			cin >> mat[i][j];
		}
	}
}

template <typename Tip>
void Matrice<Tip>::afisare() {
	for (int i = 0; i < linie; i++) {
		for (int j = 0; j < coloana; j++) {
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
}

template <typename Tip>
Matrice<Tip>::~Matrice() {
	for (int i = 0; i < linie; ++i)
		delete[] mat[i];
	delete[] mat;
}

template <typename Tip>
Matrice<Tip> Matrice<Tip>::operator+(Matrice<Tip>& m2) {
	if ((this->linie != m2.linie) || (this->coloana != m2.coloana)) {
		return -1;
	}
	else
	{
		Matrice<Tip> aux(this->linie, this->coloana);
		for (int i = 0; i < this->linie; i++) {
			for (int j = 0; j < this->coloana; j++) {

				aux.mat[i][j] = this->mat[i][j] + m2.mat[i][j];
			}
		}
		return aux;
	}
}

template <typename Tip>
Matrice<Tip> Matrice<Tip>::operator-(Matrice<Tip>& m2) {
	if ((this->linie != m2.linie) || (this->coloana != m2.coloana)) {
		for (int i = 0; i < linie; ++i)
			delete[] mat[i];
		delete[] mat;
		for (int i = 0; i < m2.linie; ++i)
			delete[] m2.mat[i];
		delete[] m2.mat;
		exit(-1);

	}

	else
	{
		Matrice<Tip> aux(this->linie, this->coloana);
		for (int i = 0; i < this->linie; i++) {
			for (int j = 0; j < this->coloana; j++) {

				aux.mat[i][j] = this->mat[i][j] - m2.mat[i][j];
			}
		}
		return aux;
	}
}

template <typename Tip>
Matrice<Tip> Matrice<Tip>::operator*(Matrice<Tip>& m2) {
	if ((this->coloana != m2.linie)) {
		cerr << "ATI INTRODUS GRESIT ";
		exit(-1);
	}
	else
	{
		Matrice<Tip> aux(this->linie, m2.coloana);
		for (int i = 0; i < this->linie; i++) {
			for (int j = 0; j < m2.coloana; j++) {
				aux.mat[i][j] = 0;
			}
		}
		for (int i = 0; i < this->linie; i++) {
			for (int j = 0; j < m2.coloana; j++) {
				for (int k = 0; k < m2.linie; k++) {
					aux.mat[i][j] = aux.mat[i][j] + this->mat[i][k] * m2.mat[k][j];
				}
			}
		}
		return aux;
	}
}

template <typename Tip>
Matrice<Tip> Matrice<Tip>::operator^(int pow) {
	Matrice<Tip> aux(this->linie, this->coloana);
	for (int i = 0; i < this->linie; i++) {
		for (int j = 0; j < this->coloana; j++) {
			if (i == j) {
				aux.mat[i][j] = 1;
			}
			else aux.mat[i][j] = 0;
		}
	}
	for (int i = 0; i < pow; i++) {
		aux = aux * *(this);
	}
	return aux;
}

template <typename Tip>
Matrice<Tip>::Matrice(const Matrice<Tip>& m)
{
	this->linie = m.linie;
	this->coloana = m.coloana;
	mat = new Tip * [linie];
	for (int i = 0; i < linie; i++) {
		mat[i] = new Tip[coloana];
	}

	for (int i = 0; i < m.linie; i++) {
		for (int j = 0; j < m.coloana; j++) {
			mat[i][j] = m.mat[i][j];
		}
	}
}

template <typename Tip>
Matrice<Tip>& Matrice<Tip>::operator=(Matrice<Tip> m)
{
	if (this != &m) {
		for (int i = 0; i < this->linie; ++i)
			delete[] mat[i];
		delete[] mat;

		this->linie = m.linie;
		this->coloana = m.coloana;
		mat = new Tip * [m.linie];
		for (int i = 0; i < m.linie; i++) {
			mat[i] = new Tip[m.coloana];
		}


		for (int i = 0; i < m.linie; i++) {
			for (int j = 0; j < m.coloana; j++) {
				mat[i][j] = m.mat[i][j];
			}
		}
	}
	return *this;
}