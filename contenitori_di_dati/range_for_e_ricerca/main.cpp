#include <iostream>

using namespace std;

void range_for() {
    // FOR EACH o FOR RANGE
    int arrayDiInteri[100];

    for (int ele : arrayDiInteri)
        ele = rand();             // viene scritto il valore all'interno dell'array in questo caso

    for (int ele : arrayDiInteri)
        cout << ele << " ";
    cout << endl;
}


void ricerca_standard() {
    string fiumi[] = {"Po" ,"Adige", "Tevere",
                      "Volturno", "Tirso"};
    int km[] = {652, 410, 405, 175, 153};

    int quantiFium = 5;

    string fiumeCercato="";
    cout << "Fiume da cercare: " << endl;
    cin >> fiumeCercato;

    //algoritmo di ricerca
    int posFiume=0; //inizializzazione ridondante ma per sicurezza in caso di cambiamenti di codice
    for(posFiume=0; posFiume<quantiFium; ++posFiume)
        if(fiumi[posFiume] == fiumeCercato) break;
    cout << "Normale: ";
    if(posFiume == quantiFium)
        cout << "Fiume non trovato..." << endl;
    else
        cout << "Trovato! e' lungo " << km[posFiume] << " km!" << endl;
}
int main() {
    // RICERCA CON TAPPO
    // sacrifichiamo un po di ram per avere un po di prestazioni in più

    string fiumi[] = {"Po" ,"Adige", "Tevere",
                      "Volturno", "Tirso", "tappo"};
    int km[] = {652, 410, 405, 175, 153, -1};

    int quantiFium = 5;

    string fiumeCercato="";
    cout << "Fiume da cercare: " << endl;
    cin >> fiumeCercato;
    fiumi[quantiFium] = fiumeCercato;

    //algoritmo di ricerca
    int posFiume=0;
    for(posFiume=0;; ++posFiume) //eliminiamo il controllo che è costoso
        if(fiumi[posFiume] == fiumeCercato) break;
    cout << "Con tappo: ";
    if(posFiume == quantiFium)
        cout << "Fiume non trovato..." << endl;
    else
        cout << "Trovato! e' lungo " << km[posFiume] << " km!" << endl;

    return 0;
}
