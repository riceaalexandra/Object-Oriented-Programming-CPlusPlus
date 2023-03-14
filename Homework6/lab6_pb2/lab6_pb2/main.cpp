#include "CList.h"

int main() {
	list l;
	l.Add(&l.head, 7);
	l.Add(&l.head, 5);
	l.Add(&l.head, 12);
	l.Add(&l.head, 91);
	l.Add(&l.head, 5);
	l.Add(&l.head, 19);
	l.Add(&l.head, 2);
	while (1)
	{
		cout << "\nAlegeti optiunea :" << endl;
		cout << "1. Adaugati un element; " << endl;
		cout << "2. Eliminati un element specific;" << endl;
		cout << "3. Calculati media aritmetica; " << endl;
		cout << "4. Eliminati toate elementele mai mici decat k" << endl;
		cout << "5. Afisati lista;" << endl;
		cout << "6. Exit\nOptiunea dvs: ";
		int k;
		cin >> k;
		switch (k) {
		case 1: 
		{
			int element;
			cout << "Valoarea elementului pe care vreti sa o introduceti: ";
			cin >> element;
			l.Add(&l.head, element);
			break;
		}
		case 2:
		{
			int element;
			cout << "Valoarea elementului pe care vreti sa o introduceti: ";
			cin >> element;
			l.Delete1(&l.head, element);
			break;
		}
		case 3:
		{
			cout << "Media aritmetica este: ";
			cout << l.medie_aritmetica(&l.head);
			break;
		}
		case 4:
		{
			int n;
			cout << "Introduceti k: ";
			cin >> n;
			l.Delete2(&l.head, n);
			break;
		}
		case 5:
		{
			l.Print(l.head);
			break;
		}
		case 6:
		{
			return 0;
		}
		}
	}
	return 0;
}