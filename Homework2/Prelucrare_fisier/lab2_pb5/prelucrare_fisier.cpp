#include "prelucrare_fisier.h"

string stergere_comentarii(string program)
{
    int n = program.length();
    string rezultat;
    bool com = false; 

    for (int i = 0; i < n; i++)
    {
        if (com == true && program[i] == '\n') { //daca am terminat o data fisierul si am trecut la linie noua com o sa ia valoarea fals
            com = false;
        }
        else if (com) {//daca e fals merg mai departe
            continue;
        }
        else if (program[i] == '/' && program[i + 1] == '/') { // daca imi apare "//" com ia valoarea adevarat si cu i++ trece si peste a doua "/"
            com = true;
            i++;
        }
        else
        {
            rezultat += program[i]; //daca com are valoarea 1 si nu am trecut mai departe modific rezultatul
        }
    }
    return rezultat;
}

void sterge_comentarii(ifstream& fin) {
    fin.open("citire.txt", ios::in);
    string program;
    cout << "Program Modificat\n\n\n";
    // fout << "Program Modificat\n\n\n";
    while (fin) {//citesc linie cu linie
        //cat timp pot sa citesc
        getline(fin, program);
        cout << "\n" << stergere_comentarii(program); //afisez si in consola
        //fout << "\n" << stergere_comentarii(program);//si in fisier
    }
    fin.close();
}

int nr_linii_fisier(ifstream& fin) {
    fin.open("citire.txt", ios::in);
    int nr_linii = 0;
    string linie;
    while (getline(fin, linie)) {//citesc linie cu linie
        //cat timp pot sa citesc
        nr_linii++;
    }
    fin.close();
    return nr_linii;
}

int nr_cuvinte_fisier(ifstream& fin) {
    fin.open("citire.txt", ios::in);
    int nr_cuvinte = 0;
    string cuvinte;
    while (fin>>cuvinte) {//citesc linie cu linie
        //cat timp pot sa citesc
        nr_cuvinte++;

    }
    fin.close();
    return nr_cuvinte;
}