#include <iostream>
#include <iomanip>

using namespace std;

void stampa_array(const int km[],const string fiumi[], const int DIM) {
    cout << "----------------------------------------\n";
    cout << "ELENCO FIUMI" << endl;
    cout << "----------------------------------------\n";
    for(int i=0; i<DIM; ++i) {
        cout << setw(15) << fiumi[i]
             << setw(4) << km[i] << "km" << endl;
    }
    cout << "****************************************\n";
}
void saltaRighe(const int quante) {
    for(int i=0; i<quante; ++i)
        cout << endl;
}
int trovaPosMinimo(const int arrayInt[], const int partiDa, const int DIM) {
    int posMinimo = partiDa;

    for(int posEle=partiDa+1; posEle<DIM; posEle++)
        if(arrayInt[posEle] < arrayInt[posMinimo])
            posMinimo=posEle;
    return posMinimo;
}

int main() {

    string fiumi[] = {"Po" ,"Adige", "Tevere",
                      "Volturno", "Tirso", "tappo"};
    int km[] = {652, 410, 405, 175, 153, -1};


    const int QUANTI_FIUMI = 5;
    stampa_array(km,fiumi, QUANTI_FIUMI);
    saltaRighe(1);
    // BUBBLE SORT
    for(int partiDa=0; partiDa<QUANTI_FIUMI-1; partiDa++) {
        // dove si trova il minimo?
        int posMinimo=trovaPosMinimo(km, partiDa, QUANTI_FIUMI);

        //mettiamo il minimo al suo posto
        int tmp=km[partiDa];
        km[partiDa] = km[posMinimo];
        km[posMinimo] = tmp;

        //mettiamo anche i nomi in ordine
        string tmps = fiumi[partiDa];
        fiumi[partiDa] = fiumi[posMinimo];
        fiumi[posMinimo] = tmps;
    }
    stampa_array(km,fiumi, QUANTI_FIUMI);
    saltaRighe(3);
    return 0;
}
