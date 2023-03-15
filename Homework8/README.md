2. Să se realizeze o ierarhie de clase care descrie mulţimea elementelor din plan întâlnite
în geometrie. Se consideră clasa de baza CPunct , din ea se derivează clasa CDreapta ,
clasa CCerc , clasa CDreptunghi , clasa CPatrat. Pentru clasele CCerc, CDreptunghi şi
CPatrat să se implementeze o funcţie pentru calcul perimetrului, funcţie ce va fi declarată
ca funcţii virtuală în clasa de bază.
3. Să se construiască o ierarhie de clase care să descrie rasele de câini. Se consideră clasa
de bază Caine, iar din ea se derivează clasa CaineCuPete şi clasa CaineFaraPete. Despre
un câine se cunosc următoarele informaţii: numele, înălţime, greutate, vârstă, culoare.
Despre câinii cu pete se ştie şi numărul de pete. Să se defineasca pentru fiecare clasa o
functie de citire a datelor, respectiv una de afisare; ambele functii vor fi functii virtuale.
4. Să se construiască o ierarhie de clase care să simuleze funcţionarea unei reţele de
calculatoare. Reţeaua admite maxim 10 utilizatori şi furnizează protecţie prin parola şi
funcţii pentru conectare şi deconectare. Reţeaua este gestionată de un administrator.
Pentru fiecare utilizator se cunosc parola şi numele. Administratorul este la rândul său,
tot un utilizator care are anumite facilităţi în plus: poate vizualiza toţi utilizatorii reţelei,
poate deconecta unul sau mai mulţi utilizatori, poate schimba setul de comenzi
funcţionale. Să se realizeze clasa CRetea care va avea un nume, un număr maxim de 11
utilizatori din care unul singur poate fi administrator.
5. Să se realizeze o ierarhie de clase care să descrie habitatul animalelor dintr-o rezervaţie
naturală. În rezervaţie pot fi întâlnite următoarele animale: iepuri, urşi, căprioare, vulpi şi
lei. Unele dintre animale sunt ierbivore, alte carnivore sau chiar ierbivore şi carnivore.
Ierarhia de clase va avea clasa de bază CAnimal, clasă abstractă, din care se vor deriva
două clase : CAnimalIerbivor şi CAnimalCarnivor. Pentru fiecare tip de animal se va
proiecta o clasă corespunzătoare care va extinde una din clase de mai sus, sau ambele
clase, corespunzător modului de hranire a animalului.
Despre un animal se cunosc următoarele informaţii comune: nume, data aducerii,
greutate, hrana preferată, cantitate hrană pe zi. În plus despre iepure se cunoaşte suprafaţa
minimă pe care poate trăi; despre vulpe - temperatura maximă la care poate rezista, tipul
(polară, indigenă); despre leu - temperatura minimă suportată, ţara de provenienţă; despre
urs - perioada de hibernare; despre căprioară - numărul de pui. Pentru fiecare clasa se vor
implementa atât o funcţie de citire a datelor , cât şi o funcţie de scriere a acestora, funcţii
ce vor fi declarate ca funcţii pur virtuale în cadrul clasei de bază CAnimal. Să se
proiecteze o clasă CRezervatie care să conţină o mulţime de animale şi să se populeze
rezervaţia.
