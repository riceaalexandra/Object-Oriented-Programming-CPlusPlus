<b> A doua problema din fisier este rezolvata pentru primele 3 enunturi. </b> <br>
1. Se dau urmtoarele informatii despre studentii unei grupe,
numarul acestora fiind cunoscut :<br>
<ul>
<li> nume si prenume : sir de maxim 20 de caractere; </li>
<li> adresa, formata din: nume oras :
<ul><li>sir de maxim 15 caractere,;</li> <li>cod oras : numar întreg; </li><li>strada : sir de maxim 25 caractere;</li> <li>numar : numar întreg;</li> </ul>
<li> numar de telefon : format din: <ul><li> prefix : numar întreg;</li><li> numar efectiv : numar întreg lung;</li> </ul>
<li> facultate : cod format din 3 caractere;</li>
<li> vârsta : numar întreg;</li>
<li> note : tablou de 10 numere întregi;</li>
<li> media de promovare;</li>
<li> numar de absente la examene.</li>
</ul>
Sa se realizeze o aplicatie cu urmatoarele functionalitati:<br>
• citirea datelor studentilor dintr-o grupa;<br>
• memorarea datelor citite într-un tablou asociat grupei;<br>
• afisarea datelor din tablou.
2. Folosind aceleai informatii despre studentii unei grupe din
problema 2, sa se modifice aplicatia precedenta, astfel încât memorarea studenilor sa se
faca într-un tablou ce va fi alocat în mod dinamic. Se vor implementa urmatoarele
operatii:<br>
• crearea tabloului;<br>
• adugarea unui nou student în tablou; în cazul în care tabloul nu mai are elemente
disponibile, se efectueaza o realocare a acestuia la o dimensiune mai mare;<br>
• modificarea informatiilor aferente unui student;<br>
• stergerea unui student din tablou.<br>
Fisierul de utilizare va contine în funcia main un meniu care afiseaza operatiile amintite,
citsete operatia selectata de utilizator si apeleaza functia specifica de tratare.
3. Sa se dezvolte aplicaia de la problema 3, adugându-se noi operatii asupra tabloului
grupei de studenti:<br>
• determinarea studentului (sau a studentilor) cu media cea mai mare;<br>
• determinarea studentului (sau a studentilor) cu cele mai multe restante si absente
de la examene;<br>
• afisarea studentilor promovati:<br>
  <-> - în ordine alfabetica, dupa nume si prenume;<br>
  - -  în ordinea descresctoare a mediilor;<br>
• afiarea studenilor restantieri:<br>
  o în ordine alfabetica, dupa nume si prenume;<br>
  o în ordinea cresctoare a numarului de restante si absente;
4. Sa se dezvolte un modul pentru prelucrarea fisierelor sursa .cpp
introduse de la tastatura. Se vor considera urmatoarele operatii:<br>
• eliminarea comentariilor din fisier si afisarea fisierului modificat la terminalul
standard de iesire;<br>
• contorizarea numarului de cuvinte din fisier;<br>
• contorizarea numarului de linii din fsiier;<br>
Fisierul de test va conine apelul pe rând al celor trei operatii.<br>
