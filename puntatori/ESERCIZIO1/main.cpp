/*
 * Un addetto comunale ha il compito di rilevare i valori del pm10
 * presso ciascuna delle centraline del suo comune; ogni centralina
 * fornisce 240 letture prese in momenti diversi della giornata.
 *
 * Alla fine di ogni giornata deve essere calcolato il valore
 * medio del pm10 su tutti i valori letti da tutte le centraline e
 * quanti valori del pm10 superano la media.
 *
 * Il numero delle centraline e' noto e deve essere chiesto da tastiera.
 *
 * Il programma deve adattarsi a qualunque numero di centraline di un
 * qualunque comune.
 */

#include <iostream>

using namespace std;
const int LETTURE=240;

int main() {
    int num_centraline=0; double media=0.0;
    cout << "Quante sono le centraline? "; cin >>num_centraline;

    int* pLetture = new int[num_centraline*LETTURE]; //alloca nella RAM

    for(int c=0; c<num_centraline; ++c){
        //simulo lettura dati da questa centralina
        for(int lettura=0; lettura<LETTURE; ++lettura){
            pLetture[c*LETTURE + lettura] = rand()%200 + 1;
            media += pLetture[c*LETTURE + lettura];
        }

    }

    int letture_totali = num_centraline*LETTURE;
    media /= letture_totali;
    cout << "Valore medio del pm10: " << media/letture_totali << endl;

    int superataMedia = 0;
    for(int c=0; c<letture_totali; ++c)
        if(pLetture[c]>media) superataMedia++;

    cout << "La media e' stata superata "
            << superataMedia << " volte" << endl;
    delete[] pLetture;
    pLetture = nullptr;

    return 0;
}
