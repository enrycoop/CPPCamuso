Prima lezione 


Il programma pi� breve in C++ � "int main(){}".
Il compilatore appena avviato cerca il main quindi � l'unico blocco di codice obbligatorio.


OUTPUT
per dare in output un numero ad esempio 5 si usa:

cout << 5;
ma cout non � par
te del linguaggio C++ fa parte del namespace std pertanto per poterlo utilizzare
bisogna o usare 

using namespace std;
o in maniera pi� sicura 
using std::cout;
o per fare meno danni in un blocco {}

che indica di includere il namespace della libreria standard.
oppure usare il namespace resolutor

std::cout << 5;

TIPI DI DATO

TIPI ARITMETICI

 - INT egrali
	 bool
	 char
	 int

 - FLOAT ing point
	 float
	 double

 - void

ALTri tipi 
 