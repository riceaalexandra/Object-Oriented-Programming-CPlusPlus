1. Sa se proiecteze si sa se implementeze o clasa C++ pentru obiecte de tip
zaruri. Clasa trebuie sa poat memora numrul de pe fata superioara dupa
ultima aruncare a unui zar. În plus, ea trebuie sa contina o funcie membru
care simuleaza o aruncare a zarului. Aceast funcie genereaz în mod
aleator un numr între 1 i 6, reprezentând fata superioara rezultata în
urma aruncarii (pentru acesta se vor utiliza functiile sistem rand si srand,
declarate în fiierul header <stdlib.h>).
Utilizând aceasta clasa, sa se simuleze aruncarea a dou zaruri de 9000 de
ori consecutiv, iar apoi sa se determine:
• perechea de numere cu cele mai multe aparitii;
• perechea de numere cu cele mai multe aparitii consecutive;
• perechea de numere cu cele mai puine aparitii;
• frecvena de aparitie a fiecrei fete a unui zar.
2. S se modifice implementare pentru problema precedent, adungând
noi membri, unii dintre ei statici, astfel încât s permit calculul i afiarea
frecvenei de apariie a fiecrei fee a unui zar în interiorul clasei.
3. S se proiecteze i s se implementeze o clas C++ pentru crile de joc.
O carte de joc este reprezentat de trei elemente: suit, valoare, precum i
starea curent, indicând dac respectiva carte a fost sau nu ridicat de pe
masa de joc.
a) Programul va permite crearea i afiarea unui pachet de cari de joc. Se
va utiliza un tablou de 52 de cari de joc.
b) Programul va permite simularea jocului de cari numit „21”: doi
juctori extrag pe rând cri din pachet i câtig cel care are suma
valorilor egal sau cât mai apropiat (dar mai mic) decât 21.
4. S se proiecteze i s se implementeze o clas C++ pentru bilele
utilizate în cadrul extragerilor „Loto”. O bil este reprezentat prin
numrul asociat i prin starea curent, indicând dac respectiva bil a fost
sau nu extras din urn.
Programul va permite simularea unei maini „Loto” pentru jocul 6 din 49.
Se va utiliza un tablou de 49 de elemente, precum i o funcie care
genereaz un numr aleator din mulimea {1, 2, ..., 49}. Pentru aceasta se
vor utiliza funciile sistem rand i srand, declarate în fiierul header
<stdlib.h>.
5. S se proiecteze i s se implementeze o clas pentru standardul ISBN
(International Standard Book Number). Un obiect din aceast clas este un

numr ISBN unic asociat unei cari sau reviste, format din 10 cifre
zecimale grupate în patru secvene de dimensiune variabila:
• grupul sau identificatorul de ar, pentru identificarea rii editurii

care a publicat cartea sau revista; în mod uzual toate editurile dintr-
o anumit ar sau regiune geografic au acelai numr pentru

grup;
• identificatorul editurii, pentru identificarea editurii în cadrul
grupului de edituri;
• identificatorul de titlu, pentru identificarea titlului unei cari sau
reviste editat de o editur;
• cifra de control, care este întotdeauna format dintr-o singur cifr.
Spre deosebire de celelalte grupuri, cifra de control poate s fie atât o cifr
zecimal sau litera X, corespunzând numrului 10. Cifra de control se
determin ca valoarea modulo 11 din numrul obinut prin concatenarea
tuturor celorlalte 9 cifre. Clasa va avea ca dat membru un ir de caractere
ce va reprezenta ISBN-ul, utilizând caracterul ‘-‘ pentru separarea celor
patru grupuri. Ea va trebui s conin cel puin urmtoarele funcii
membru:
• un constructor, în cazul specificrii doar a primelor trei grupuri,
cifra de control fiind generat automat;
• un constructor, pentru cazul în care se specific complet ISBN-ul,
ca ir de 13 caractere;
• o funcie membru pentru validarea cifrei de control;
• o funcie membru pentru afiarea ISBN-ului.
6. S se proiecteze i s se implementeze o clas pentru reprezentarea
crilor dintr-o bibliotec. Pentru fiecare carte trebuie specificate:
• titlul carii;
• autorul (autorii);
• editura;
• numrul ISBN (ir de caractere);
• anul apariiei;
• preul.
Programul va permite crearea unui tablou cu crile dintr-o bibliotec i
posibilitatea de cutare a unor cri în funcie de: titlu, editura, sau ISBN.
Funciile clasei vor fi scrise astfel încât s permit operaiile menionate
mai sus.
