#include <iostream>


using namespace std;

void espandi_vettore(int **v, int &num_ele) {
    int *p = new int[num_ele+10];

    cout << "Indirizzo del nuovo blocco di int: "
         << p << endl;

    for(int i=0; i<num_ele; ++i)
        p[i] = (*v)[i];

    for(int i=num_ele; i<num_ele+10; i++)
        p[i] = 10*i;

    num_ele+=10;
    delete[] (*v);
    //v=p v è un puntatore per valore! non modificabile
    *v=p;
}

void stampa_vettore(int* p, int n_ele)
{
    for(int i=0; i<n_ele; i++)
        cout << *p++ << endl;
}


int main(int argc, char **argv) {
    /*
    char *nomi[] = {"prima", "seconda", "terza"};
    cout << nomi[0] << " " << nomi[2] << endl;

    caso 1: argomenti in ingresso al programma stesso
    cout << "Sono il programma "
            << argv[0] << endl;

    cout << "e sono stato invocato con questi parametri: " << endl;
    for(int i=1; i<argc; ++i)
        cout << argv[i] << endl;
    */
    //caso 2: puntatore modificabile da una funzione
    int *p = new int[3] {10, 20, 30};
    int num_ele=3;

    cout << "Indirizzo memorizzato in p prima della funzione: "
            << p << endl;

    espandi_vettore(&p, num_ele);
    cout << "Indirizzo memorizzato in p dopo della funzione: "
            << p << endl;
    /*
     * v è stato passato come parametro poi è stato svutata l'allocazione prima
     * della fine del metodo.
     * V non punta più a nulla e noi tentiamo comunque di accedere alle sue
     * locazioni di memoria, pertanto abbiamo un MEMORY LEAK
     */

    stampa_vettore(p, num_ele);
    return 0;
}
