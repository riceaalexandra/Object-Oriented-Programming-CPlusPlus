#pragma once
#include <iostream>

using namespace std;
class list {
private:
	struct node {
		int val;
		node* next;
		node(int val) : val(val), next(0) { }
		~node() { next = 0; }
		void Print() const { cout << val << endl; }
	};

	node* first;
	//void Delete();
	void Copy(node* p);
public:
	node* head;
	list() { first = 0; }
	~list() { first = 0; }
	void Add(node **node, int v);
	void Print(node *node);
	int ListaVida() const { return first == 0; }
	void HelpDelete(node** node, int key);
	void Delete2(node** node, int key);
	void Delete1(node** node, int key);
	int medie_aritmetica(node** node);
};