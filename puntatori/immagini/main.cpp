#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

void metodo_inefficiente() {
    srand(time(0));
    //modificatore in lettura, scrittura, binario
    fstream f("image.bmp", ios::out | ios::in | ios::binary);

    //per leggere i primi due byte dal file che contengono, per i bmp
    char tipoImmagine[2];
    f.read(tipoImmagine, 2);

    //creiamo una stringa c++ partendo dal contenuto di un vettore di char
    string s(tipoImmagine);
    cout << "Tipo immagine: " << s << endl;

    /*
     * INEFFICIENTE
     * sposta il punto di scrittura di 50000 byte partendo da begin (beg)
     * tutta la procedura di qui in avanti viene fatta lavorando su disco
     * il ché la rende una procedura poco efficiente.
     */
    f.seekp(512000, ios::beg);

    char v[3]; //rgb

    for(int i=0; i<300000; ++i){
        v[0] = rand()%256;
        v[1] = rand()%256;
        v[2] = rand()%256;

        f.write(v, 3);
    }
    f.close(); f.clear();
}

int main() {
    srand(time(0));

    fstream f("image.bmp", ios::out | ios::in | ios::binary);
    /*
     * seek cerca, g sta per get, lettura dopo il posizionamento.
     * 0 di quanti byte vogliamo spostarci, da ios::end, fine file.
     */
    f.seekg(0, ios::end);
    /*
     * ci dice il numero del byte terminale del file
     */
    long dimensione = f.tellg();
    cout << "Dimensione " << dimensione << endl;

    // mi riposiziono all'inizio del file
    f.seekg(0, ios::beg);

    //long &r_long; -> non posso creare un reference se non ho una variabile già
    //non posso nemmeno farlo puntare ad un altra variabile dopo averlo inizializzato

    //per ovviare a questi limiti si usano i pointer
    char* immagineRAM = nullptr;

    immagineRAM = new char[dimensione]; //senza * con la new
    f.read(immagineRAM, dimensione);

    for(int i=dimensione/2; i<dimensione*2/3; ++i)
        immagineRAM[i] = rand()%256;

    // ora vogliamo scrivere l'array di char nel file
    f.seekp(0, ios::beg);
    f.write(immagineRAM, dimensione);

    f.close(); f.clear();

    //restituiamo il blocco di ram
    delete[] immagineRAM;
    immagineRAM = nullptr;

    return 0;
}
