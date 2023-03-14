#include "Calendar.h"

int numar_zi(int zi, int luna, int an)
{

    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    an -= luna < 3;
    return (an + an / 4 - an / 100 + an / 400 + t[luna - 1] + zi) % 7;
}

void gaussEaster(int Y)
{
    float A, B, C, P, Q, M, N, D, E;
    A = Y % 19;
    B = Y % 4;
    C = Y % 7;
    P = floor((float)Y / 100.0);

    Q = floor((float)(13 + 8 * P) / 25.0);

    M = (int)(15 - Q + P - (floor)(P / 4)) % 30;

    N = (int)(4 + P - (floor)(P / 4)) % 7;

    D = (int)(19 * A + M) % 30;

    E = (int)(2 * B + 4 * C + 6 * D + N) % 7;

    int days = (int)(22 + D + E);

    if ((D == 29) && (E == 6)) {
        cout <<"19.04"<<Y;
        return;
    }
    else if ((D == 28) && (E == 6)) {
        cout << "18.04"<<Y;
        return;
    }
    else {
        if (days > 31) {
            cout << (days - 31) <<".04."<<Y;
            return;
        }
        else {
            cout << days << "03."<<Y;
            return;
        }
    }
}

void gaussNextDayEaster(int Y)
{
    float A, B, C, P, Q, M, N, D, E;
    A = Y % 19;
    B = Y % 4;
    C = Y % 7;
    P = floor((float)Y / 100.0);

    Q = floor((float)(13 + 8 * P) / 25.0);

    M = (int)(15 - Q + P - (floor)(P / 4)) % 30;

    N = (int)(4 + P - (floor)(P / 4)) % 7;

    D = (int)(19 * A + M) % 30;

    E = (int)(2 * B + 4 * C + 6 * D + N) % 7;

    int days = (int)(22 + D + E);

    if ((D == 29) && (E == 6)) {
        cout << "19.04" << Y;
        return;
    }
    else if ((D == 28) && (E == 6)) {
        cout << "18.04" << Y;
        return;
    }
    else {
        if (days > 30) {
            cout << (days + 1 - 31) << ".04." << Y;
            return;
        }
        else {
            cout << days + 1 << ".03." << Y;
            return;
        }
    }
}

string get_nume_luna(int numar_luna)
{
    string luni[] = { "Ianuarie", "Februarie", "Martie","Aprile", "Mai", "Iunie","Iulie", "August", "Septembrie","Octombrie", "Noiembrie", "Decembrie" };
    return (luni[numar_luna]);
}

int get_numar_luna(string luna)
{
    transform(luna.begin(), luna.end(), luna.begin(), ::tolower);
    if (luna == "ianuarie") {
        return (1);
    }
    if (luna == "februarie") {
        return (2);
    }
    if (luna == "martie") {
        return (3);
    }
    if (luna == "aprilie") {
        return (4);
    }
    if (luna == "mai") {
        return (5);
    }
    if (luna == "iunie") {
        return (6);
    }
    if (luna == "iulie") {
        return (7);
    }
    if (luna == "august") {
        return (8);
    }
    if (luna == "septembrie") {
        return (9);
    }
    if (luna == "octombrie") {
        return (10);
    }
    if (luna == "noiembrie") {
        return (11);
    }
    if (luna == "decembrie") {
        return (12);
    }
}

int zile_luna(int numar_luna, int an)
{
    if (numar_luna == 0)
        return (31);

    if (numar_luna == 1)
    {
        if (an % 400 == 0 ||
            (an % 4 == 0 && an % 100 != 0))
            return (29);
        else
            return (28);
    }

    if (numar_luna == 2)
        return (31);

    if (numar_luna == 3)
        return (30);

    if (numar_luna == 4)
        return (31);

    if (numar_luna == 5)
        return (30);

    if (numar_luna == 6)
        return (31);

    if (numar_luna == 7)
        return (31);

    if (numar_luna == 8)
        return (30);

    if (numar_luna == 9)
        return (31);

    if (numar_luna == 10)
        return (30);

    if (numar_luna == 11)
        return (31);
}

Calendar::Calendar(){
	anul_inceput = 0;
	anul_sfarsit = 0;
}

Calendar::Calendar(int anul_inceput, int anul_sfarsit) {
	this->anul_inceput = anul_inceput;
	this->anul_sfarsit = anul_sfarsit;
}

int Calendar::get_anul_inceput()
{
	return this->anul_inceput;
}

int Calendar::get_anul_sfarsit()
{
	return this->anul_sfarsit;
}

void Calendar::set_anul_inceput(int anul_inceput)
{
	this->anul_inceput = anul_inceput;
}

void Calendar::set_anul_sfarsit(int anul_sfarsit)
{
	this->anul_sfarsit = anul_sfarsit;
}

void Calendar::Afisare_Calendar(int anul_sfarsit, int anul_inceput) {
    for (int anul_curent = anul_inceput; anul_curent <= anul_sfarsit; anul_curent++) {
        printf("         Calendar - %d\n\n", anul_curent);
        int days;

        // Index of the day from 0 to 6
        int current = numar_zi(1, 1, anul_curent);

        // i --> Iterate through all the months
        // j --> Iterate through all the days of the
        //       month - i
        for (int i = 0; i < 12; i++)
        {
            days = zile_luna(i, anul_curent);

            // Print the current month name
            printf("\n  ------------%s-------------\n",
                get_nume_luna(i).c_str());

            // Print the columns
            printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

            // Print appropriate spaces
            int k;
            for (k = 0; k < current; k++)
                printf("     ");

            for (int j = 1; j <= days; j++)
            {
                printf("%5d", j);

                if (++k > 6)
                {
                    k = 0;
                    printf("\n");
                }
            }

            if (k)
                printf("\n");

            current = k;
        }
    }
    return;
}

void Calendar::Afisare_Sarbatori(int anul_sfarsit, int anul_inceput) {
    for (int anul_curent = anul_inceput; anul_curent <= anul_sfarsit; anul_curent++) {
        printf("         Zilele libere - %d\n\n", anul_curent);
        int days;

        // Index of the day from 0 to 6
        int current = numar_zi(1, 1, anul_curent);

        // i --> Iterate through all the months
        // j --> Iterate through all the days of the
        //       month - i
        cout << endl;
        for (int i = 0; i < 12; i++)
        {
            days = zile_luna(i, anul_curent);
            for (int j = 1; j <= days; j++) {
                if (i == 12 - 1 && j == 25) {
                    cout << "Craciunul este pe " << j <<"."<<i+1<<"."<<anul_curent<<"\n";
                }
                if (i == 12 - 1 && j == 26) {
                    cout << "A doua zi dupa Craciunul este pe: " << j << "." << i + 1 << "." << anul_curent << "\n";
                }
                if (i == 0 && j == 1) {
                    cout << "Anul nou este pe " << j << "." << i+1 << "." << anul_curent<<"\n";
                }
                if (i == 0 && j == 2) {
                    cout << "A doua zi de anul nou este pe " << j << "." << i+1 << "." << anul_curent<<"\n";
                }
                if (i == 12-1 && j == 1) {
                    cout << "Ziua Romaniei este pe " << j << "." << i+1 << "." << anul_curent<<"\n";
                }
                if (numar_zi(j,i+1,anul_curent) == 0) {
                //    cout << "Duminica   " << j << "." << i+1 << "." << anul_curent << "\n";
                }
            }
        }
        cout << "Pastele: ";
        gaussEaster(anul_curent);
        cout << "\nA doua zi de Paste: ";
        gaussNextDayEaster(anul_curent);
        cout << endl;
    }
    return;
}

void Calendar::Afisare_luna_an(int anul_sfarsit, int anul_inceput) {
    string luna;
    int an;

    cout << "Introduceti luna:   ";
    cin >> luna;
    cout << "Introduceti anul:   ";
    cin >> an;
    for (int anul_curent = anul_inceput; anul_curent <= anul_sfarsit; anul_curent++) {
        if (anul_curent == an) {
            printf("Calendar - %d  Luna - ", anul_curent);
            cout << luna << endl;
            int days;
            // Index of the day from 0 to 6
            int current = numar_zi(1, get_numar_luna(luna), anul_curent);
            days = zile_luna(get_numar_luna(luna), anul_curent);
            // Print the columns
            printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

            // Print appropriate spaces
            int k;
            for (k = 0; k < current; k++)
                printf("     ");

            for (int j = 1; j <= days; j++)
            {
                printf("%5d", j);

                if (++k > 6)
                {
                    k = 0;
                    printf("\n");
                }
            }

            if (k)
                printf("\n");

            current = k;
        }
    }
    return;
}