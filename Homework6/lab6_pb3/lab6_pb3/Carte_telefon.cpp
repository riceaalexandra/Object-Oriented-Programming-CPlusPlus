#include "Carte_telefon.h"

void Carte_telefon::Add(string nume, string adresa, string numar_telefon)
{
	node* new_node = new node(nume, adresa, numar_telefon);
	new_node->next = head;
	head = new_node;
}

void Carte_telefon::Print(node *node) {
    printf("\n List: ");
    if (head == NULL)
        return;
    while (node != NULL) {
        cout << "Nume " << node->nume << "   Adresa " << node->adresa << "   Numar de telefon " << node->numar_telefon;
        node = node->next;
        cout << endl;
    }
    cout << endl;
}

void Carte_telefon::Cautare_lista(node* head, string nume) {
    node* temp = head;
    while (temp != NULL) {
        if (temp->nume == nume) {
            cout << "Nume " << temp->nume << "   Adresa " << temp->adresa << "   Numar de telefon " << temp->numar_telefon;
            return;
        }
        temp = temp->next;
    }
    cout << "Contactul nu exista";
}