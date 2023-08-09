#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


void interi(){
    {
        int i1 = 100;
        long long LL1 = 10000000000;
        long long LL2 = 0;

        /*
         * conversioni implicite
         * le promozioni automatiche vanno dal tipo meno capiente al tipo più capiente.
         * Ma è meglio non affidarsi alle conversioni implicite.
         * il risultato prodotto è un disastro! Perdita di informazioni:
         * 10000000000
         * 1410065508
         */
        int n = {i1 + LL1};
        /*
         * Racchiudendo l'espressione tra le {} si dice al compilatore
         * Significa Avvisami se l'espressione potenzialmente può generare una narrowing-confersion: conversione con approssimazione
         */

        cout << LL1 << endl;
        cout << n << endl;
        LL2 = {i1 + LL1};

        cout << LL2 << endl;

        i1 = 140000000000; //conversione implicita con perdita
        n = {i1 + i1};
        cout << n << endl;
    }

    unsigned int ui = 3000000000;
    int n = {ui};

    cout << ui << endl;
    cout << n << endl;
}

void floating_point() {
    float f = 0.7;
    cout << std::setprecision(30) << f << endl;
    cout << 0.7 << endl;

    if( f == 0.7 )
        cout << "Uguali\n";
    else
        cout << "Diversi\n";
    /*
     * sono diveri poichè 0.7 è un letterale che di default è double
     * e viene convertito in un float con perdita di informazioni
     */
    if( fabs(f - 0.7) < 0.0000001)
        cout << "Uguali\n";
    else
        cout << "Diversi\n";

    /*
     * per alcuni valori "magici" non esiste il problema
     */
//#define MAGICO 0.5
//#define MAGICO 0.75
//potenze del due
#define MAGICO (1.0/2 + 1.0/4 + 1.0/8)

    f = MAGICO; //o anche 0.75
    cout << std::setprecision(30) << f << endl;
    cout << MAGICO << endl;

    if(f == MAGICO)
        cout << "Uguali\n";
    else
        cout << "Diversi\n";
}

int main() {

    floating_point();


    return 0;
}
