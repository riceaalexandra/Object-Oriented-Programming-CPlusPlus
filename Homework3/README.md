1. Sa se proiecteze si sa se implementeze o clasa C++ pentru obiecte de tip
zaruri. Clasa trebuie sa poata memora numarul de pe fata superioara dupa
ultima aruncare a unui zar. În plus, ea trebuie sa contina o functie membru
care simuleaza o aruncare a zarului. Aceasta functie genereaza în mod
aleator un numar între 1 si 6, reprezentând fata superioara rezultata în
urma aruncarii (pentru acesta se vor utiliza functiile sistem rand si srand,
declarate în fiierul header <stdlib.h>). <br>
Utilizând aceasta clasa, sa se simuleze aruncarea a doua zaruri de 9000 de
ori consecutiv, iar apoi sa se determine:<br>
• perechea de numere cu cele mai multe aparitii;<br>
• perechea de numere cu cele mai multe aparitii consecutive;<br>
• perechea de numere cu cele mai putine aparitii;<br>
• frecvena de aparitie a fiecarei fete a unui zar.<br>
2. Sa se modifice implementare pentru problema precedenta, adungând
noi membri, unii dintre ei statici, astfel încât sa permita calculul si afisarea
frecventei de aparitie a fiecarei fete a unui zar în interiorul clasei.<br>
3. Sa se proiecteze si sa se implementeze o clasa C++ pentru cartile de joc.
O carte de joc este reprezentata de trei elemente: suita, valoare, precum si
starea curenta, indicând daca respectiva carte a fost sau nu ridicata de pe
masa de joc.<br>
a) Programul va permite crearea si afisarea unui pachet de carti de joc. Se
va utiliza un tablou de 52 de carti de joc.<br>
b) Programul va permite simularea jocului de carti numit „21”: doi
juctori extrag pe rând carti din pachet si câstiga cel care are suma
valorilor egal sau cât mai apropiata (dar mai mic) decât 21.<br>
4. Sa se proiecteze si sa se implementeze o clas C++ pentru bilele
utilizate în cadrul extragerilor „Loto”. O bila este reprezentata prin
numarul asociat si prin starea curenta, indicând daca respectiva bila a fost
sau nu extrasa din urna.<br>
Programul va permite simularea unei masini „Loto” pentru jocul 6 din 49.
Se va utiliza un tablou de 49 de elemente, precum si o funcie care
genereaza un numar aleator din multimea {1, 2, ..., 49}. Pentru aceasta se
vor utiliza functiile sistem rand si srand, declarate în fisierul header
<stdlib.h>.<br>
5. Sa se proiecteze si sa se implementeze o clasa pentru standardul ISBN
(International Standard Book Number). Un obiect din aceast clasa este un
numar ISBN unic asociat unei carti sau reviste, format din 10 cifre
zecimale grupate în patru secvente de dimensiune variabila:
• grupul sau identificatorul de ar, pentru identificarea rii editurii
care a publicat cartea sau revista; în mod uzual toate editurile dintr-
o anumit ar sau regiune geografic au acelasi numr pentru
grup;<br>
• identificatorul editurii, pentru identificarea editurii în cadrul
grupului de edituri;<br>
• identificatorul de titlu, pentru identificarea titlului unei carti sau
reviste editat de o editura;<br>
• cifra de control, care este întotdeauna formata dintr-o singura cifra.<br>
Spre deosebire de celelalte grupuri, cifra de control poate sa fie atât o cifra
zecimala sau litera X, corespunzând numrului 10. Cifra de control se
determina ca valoarea modulo 11 din numrul obinut prin concatenarea
tuturor celorlalte 9 cifre. Clasa va avea ca data membru un sir de caractere
ce va reprezenta ISBN-ul, utilizând caracterul ‘-‘ pentru separarea celor
patru grupuri. Ea va trebui sa conina cel putin urmtoarele functii
membru:<br>
• un constructor, în cazul specificarii doar a primelor trei grupuri,
cifra de control fiind generata automat;<br>
• un constructor, pentru cazul în care se specifica complet ISBN-ul,
ca sir de 13 caractere;<br>
• o functie membru pentru validarea cifrei de control;<br>
• o functie membru pentru afisarea ISBN-ului.<br>
6. Sa se proiecteze si sa se implementeze o clasa pentru reprezentarea
cartilor dintr-o biblioteca. Pentru fiecare carte trebuie specificate:<br>
• titlul cartii;<br>
• autorul (autorii);<br>
• editura;<br>
• numarul ISBN (sir de caractere);<br>
• anul aparitiei;<br>
• pretul.<br>
Programul va permite crearea unui tablou cu cartile dintr-o biblioteca si
posibilitatea de cutare a unor carti în funcite de: titlu, editura, sau ISBN.
Functiile clasei vor fi scrise astfel încât sa permita operatiile mentionate
mai sus.
