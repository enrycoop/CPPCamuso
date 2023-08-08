#include <iostream>
using namespace std;

void sommatoria() {
    string fiumi[] = {"Po" ,"Adige", "Tevere",
                      "Volturno", "Tirso", "tappo"};
    int km[] = {652, 410, 405, 175, 153, -1};
    int quantiFiumi = 5;
    int totale = 0;
    for (int i=0; i < quantiFiumi; ++i)
        totale+=km[i];
    cout << "Totale: " << totale << endl;

    // variante on if
    totale = 0;
    for (int i=0; i < quantiFiumi; ++i)
        if(!(i%2))
            totale+=km[i];
    cout << "Totale dei pari: " << totale << endl;

    // variante in sentence
    totale = 0;
    for (int i=0; i < quantiFiumi; ++i)
        totale+= (i%2) ? 0 : km[i];
    cout << "Totale dei pari var: " << totale << endl;
}

int main() {

    string fiumi[] = {"Po" ,"Adige", "Tevere",
                      "Volturno", "Tirso", "tappo"};
    //int km[] = {652, 410, 405, 175, 153, -1};
    int km[] = {10, 5, 10, 5, 10, -1};

    const int QUANTI_FIUMI = 6;

    int posizioneMin = 0, posizioneMax=0;
    //min
    for(int posizione=1; posizione < QUANTI_FIUMI; posizione++) {
        if(km[posizione] < km[posizioneMin])
            posizioneMin = posizione;
        if(km[posizione] > km[posizioneMax])
            posizioneMax = posizione;
    }

    cout << "Il primo fiume piu' corto in ordine di scansione: "
        << fiumi[posizioneMin] << ": " << km[posizioneMin] << "km\n";
    cout << "Il primo fiume piu' lungo in ordine di scansione: "
         << fiumi[posizioneMax] << ": " << km[posizioneMax] << "km\n";


    //METODO SKILLATO tutti i fiumi corrispondenti al valore più grande
    int quantiMinimi = 0;
    int quantiMassimi = 0;
    int posizioneMinimi[QUANTI_FIUMI];
    int posizioneMassimi[QUANTI_FIUMI];

    for(int posizione=0; posizione < QUANTI_FIUMI; posizione++) {
        if(km[posizione] == km[posizioneMin])
            posizioneMinimi[quantiMinimi++] = posizione;
        if(km[posizione] == km[posizioneMax])
            posizioneMassimi[quantiMassimi++] = posizione; //incremento dopo aver passato il parametro all'operatore []
    }

    cout << "Elenco dei fiumi piu' corti ("
         << km[posizioneMin] << "): " << endl;
    for(int posFiume=0; posFiume< quantiMinimi; ++posFiume)
        cout << fiumi[posizioneMinimi[posFiume]] << endl;

    cout << "Elenco dei fiumi piu' lunghi ("
         << km[posizioneMax] << "): " << endl;
    for(int posFiume=0; posFiume< quantiMassimi; ++posFiume)
        cout << fiumi[posizioneMassimi[posFiume]] << endl;

    return 0;
}
