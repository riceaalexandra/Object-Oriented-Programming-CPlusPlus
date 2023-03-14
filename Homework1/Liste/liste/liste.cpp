#include "liste.h"
void Inserare_concurent(Concurent ** head){
    string nume_nou, prenume_nou;
    int nota_noua;
    cout << "Introduceti numele concurentului:  ";
    cin >> nume_nou;
    cout << "Introduceti prenumele concurentului:  ";
    cin >> prenume_nou;
    cout << "Introduceti nota concurentului:  ";
    cin >> nota_noua;
    Concurent* concurent_nou= new Concurent();
    concurent_nou->nume = nume_nou;
    concurent_nou->prenume = prenume_nou;
    concurent_nou->nota= nota_noua;
    concurent_nou->urm = *head;
    *head = concurent_nou;
}
bool Cautare_lista(Concurent* head, string nume, string prenume) {
    if (head == NULL) {
        return false;
    }
    if (head->nume == nume && head->prenume == prenume) {
        return true;
    }
    return Cautare_lista(head->urm, nume, prenume);
}
void Admisi(Concurent* head)
{
    int nr = 0;
    cout << "\n\n\n\nAfisare lista admisi:\n\n";
    while (head != NULL)
    {
        if (head->nota >= 5) {
            cout <<"\n"<< head->nume << " " << head->prenume << " " << head->nota;
            nr++;
        }
        head = head->urm;
    }
    if (nr == 0) {
        cout << "Nu exista niciun concrent admis";
    }
    cout << "\n";
}
void Respinsi(Concurent* head)
{
    int nr = 0;
    cout << "\n\n\n\nAfisare lista respinsi:\n\n";
    while (head != NULL)
    {
        if (head->nota < 5) {
            cout <<"\n"<< head->nume << " " << head->prenume << " " << head->nota;
            nr++;
        }
        head = head->urm;
    }
    if (nr == 0) {
        cout << "Nu exista niciun concrent respins";
    }
    cout << "\n";
}
void Afisare_lista(Concurent* head)
{
    cout << "\n\n\nAfisare lista: \n";
    while (head != NULL)
    {
        cout<<"\n"<< head->nume<<"  "<<head->nota;
        head = head->urm;
    }
    cout << "\n";
} 
void Interschimbare(Concurent* anterior, Concurent* curent) {
    swap(anterior->nota, curent->nota);
    swap(anterior->prenume, curent->prenume);
    swap(anterior->nume, curent->nume);
}
void Sortare_lista_nota(Concurent* head) {
    Concurent* anterior = head;
    Concurent* curent = head->urm;
    while (anterior->urm != NULL ) {
        curent = anterior->urm;
        while (curent != NULL) {
            if (anterior->nota < curent->nota) {
                Interschimbare(anterior, curent);
            }
            curent = curent->urm;
        }
        anterior = anterior->urm;
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
void Sortare_lista_alfabetic(Concurent* head) {
    Concurent* anterior = head;
    Concurent* curent = head->urm;
    while (anterior->urm != NULL) {
        curent = anterior->urm;
        while (curent != NULL) {
            if (compara_string(anterior->nume, curent->nume)==0) {
                Interschimbare(anterior, curent);
            }
            curent = curent->urm;
        }
        anterior = anterior->urm;
    }
}