#include <iostream>
#include <cmath>
/*
 * Chiedi l'inserimento da tastiera di due valori interi;
 * il primo rappresenta la somma di denaro in dolllari, la seconda in euro.
 * Sapendo che un euro vale 1.35 dollari ha più valore la somma in euro o quella
 * in dollari?
 */

using namespace std;

int main() {
  double tasso = 1.35;
  int dollari = 0, euro = 0;

  cout << "Cifra in dollari: "; cin >> dollari;
  cout << "Cifra in euro: "; cin >> euro;
  double differenza = euro*tasso - dollari;


  // WARNING!! poca precisione i double
  if ((8 - 6.4) == 1.6)
    cout << "Uguali!\n";
  else
    cout << "Ti ho avvisato!\n";

  //modo CORRETTO di confrontare i FLOAT
  if ( abs(differenza) < 1e-5)
    cout << "Si equivalgono\n";
  else
    if (differenza > 0)
      cout << "Vale di piu' la somma in euro\n";
  else
      cout << "Vale di piu' la somma in dollari\n";

  return 0;
}
