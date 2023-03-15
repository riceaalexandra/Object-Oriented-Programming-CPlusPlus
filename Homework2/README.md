<b> A doua problema din fisier (Student) este rezolvata pentru primele 3 enunturi. </b> <br>
<ol>
  <li> Se dau urmtoarele informatii despre studentii unei grupe,
numarul acestora fiind cunoscut :<br>
<ul>
<li> nume si prenume : sir de maxim 20 de caractere; </li>
<li> adresa, formata din:<ul> <li>nume oras :
sir de maxim 15 caractere,;</li> <li>cod oras : numar întreg; </li><li>strada : sir de maxim 25 caractere;</li> <li>numar : numar întreg;</li> </ul>
<li> numar de telefon : format din: <ul><li> prefix : numar întreg;</li><li> numar efectiv : numar întreg lung;</li> </ul>
<li> facultate : cod format din 3 caractere;</li>
<li> vârsta : numar întreg;</li>
<li> note : tablou de 10 numere întregi;</li>
<li> media de promovare;</li>
<li> numar de absente la examene.</li>
</ul>
Sa se realizeze o aplicatie cu urmatoarele functionalitati:<br>
<ul>
<li>citirea datelor studentilor dintr-o grupa;</li>
<li>memorarea datelor citite într-un tablou asociat grupei;</li>
<li>afisarea datelor din tablou.</li>
</ul> 
<li> Folosind aceleasi informatii despre studentii unei grupe din
problema 1, sa se modifice aplicatia precedenta, astfel încât memorarea studenilor sa se
faca într-un tablou ce va fi alocat în mod dinamic. Se vor implementa urmatoarele
operatii:
<ul>
<li>crearea tabloului;</li>
<li>adugarea unui nou student în tablou; în cazul în care tabloul nu mai are elemente disponibile, se efectueaza o realocare a acestuia la o dimensiune mai mare;</li>
<li>modificarea informatiilor aferente unui student;</li>
<li>stergerea unui student din tablou.</li>
</ul></li>

Fisierul de utilizare va contine în funcia main un meniu care afiseaza operatiile amintite,
  citeste operatia selectata de utilizator si apeleaza functia specifica de tratare.</li>
<li> Sa se dezvolte aplicaia de la problema 2, adugându-se noi operatii asupra tabloului
grupei de studenti:<br>
<ul>
  <li> determinarea studentului (sau a studentilor) cu cele mai multe restante si absente de la examene;</li>
  <li> afisarea studentilor promovati:
    <ul>
      <li> în ordine alfabetica, dupa nume si prenume;</li>
      <li> în ordinea descresctoare a mediilor;</li>
    </ul>
  </li>
  <li> afiarea studenilor restantieri:
    <ul>
      <li> în ordine alfabetica, dupa nume si prenume;</li>
      <li> în ordinea cresctoare a numarului de restante si absente;</li>
    </ul>
  </li>
  <li> determinarea studentului (sau a studentilor) cu media cea mai mare;</li>
</ul></li>
<li> Sa se dezvolte un modul pentru prelucrarea fisierelor sursa .cpp
introduse de la tastatura. Se vor considera urmatoarele operatii:<br>

<ul>
<li>eliminarea comentariilor din fisier si afisarea fisierului modificat la terminalul standard de iesire;</li>
<li>contorizarea numarului de cuvinte din fisier;</li>
<li>contorizarea numarului de linii din fisier;</li>
</ul>
Fisierul de test va conine apelul pe rând al celor trei operatii.<br> </li>
