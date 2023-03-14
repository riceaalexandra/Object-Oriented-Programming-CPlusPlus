#include "calendar.h"


int main()
{
	Calendar calendar;
	int anul_inceput, anul_sfarsit;
	cout << "Introduceti anul de inceput: ";
	cin >> anul_inceput;
	cout << "Introduceti anul de sfarsit: ";
	cin >> anul_sfarsit;
	while (1) {
		cout << "\nAlegeti optiunea:" << endl;
		cout << "1. Numarul de ani pentru care este calendarul;" << endl;
		cout << "2. Afisarea calenarului pe anii " << anul_inceput << " " << anul_sfarsit << ";" << endl;
		cout << "3. Afisare sarbatori;" << endl;
		cout << "4. Afisare ce luna doriti si an;" << endl;
		cout << "5. Terminati sesiunea. \n\nOptiunea dvs:  ";
		int b;
		cin >> b;
		switch (b)
		{
		case 1:
		{
			cout << anul_sfarsit - anul_inceput + 1;
			break;
		}
		case 2: {
			calendar.Afisare_Calendar(anul_sfarsit, anul_inceput);
			break;
		}
		case 3:
		{
			calendar.Afisare_Sarbatori(anul_sfarsit, anul_inceput);
			break;
		}
		case 4:
		{
			calendar.Afisare_luna_an(anul_sfarsit, anul_inceput);
			break;
		}
		case 5:
		{
			return 0;
		}
		}
	}
}
