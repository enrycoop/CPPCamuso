/*
 * Simuliamo la situazione in cui caricando dati in un array si esaurisce
 * lo spazio. Con un array statico dovrebbe intervenire il programmatore
 * con un aggiornamento (ridicolo); con un array dinamico aumenteremo lo
 * spazio a runtime.
 */
#include <iostream>

using namespace std;

int main() {

    int* pInt = new int[100];

    //simulazione caricamento ed esaurimento
    for(int i=0; i<100; i++)
        pInt[i] = i;

    /*
     * se allocassimo lo stesso puntatore perderemmo l'indirizzo della ram dei dati vecchi
     */

    //allocazione di un array piu' grande
    int* temp = new int[200];

    //copiamo i dati dal vecchio array in questo
    for(int i=0; i<100; ++i)
        temp[i] = pInt[i];

    //restituiamo la RAM usata dal primo array
    delete[] pInt;
    //pInt = nullptr; //per pulizia oppure
    pInt=temp;

    temp = nullptr;

    return 0;
}
