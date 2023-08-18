#include <iostream>
#define DIM 100

using namespace std;

int main() {

    char* pChar = new char[DIM];
    int* pInt = new int[DIM];
    double* pDouble = new double[DIM];
    long double* pLDouble = new long double[DIM];
    std::string* pString = new std::string[DIM];

    //pString[0] = string(10000, 'a');
    //cout << pString[0] << endl;

    cout << DIM*sizeof(char) << endl;
    cout << DIM*sizeof(int) << endl;
    cout << DIM*sizeof(double) << endl;
    cout << DIM*sizeof(long double) << endl;
    cout << DIM*sizeof(string) << endl;
    cout << "----------------------------------" << endl;
    cout << sizeof(char*) << endl;
    cout << sizeof(int*) << endl;
    cout << sizeof(double*) << endl;
    cout << sizeof(long double*) << endl;
    cout << sizeof(string*) << endl;
    cout << "----------------------------------" << endl;

    /*
     * essendo sempre uguali di dimensione, posso scambiare il puntatore a double con uno a char*?
     * cast vecchio stile (char*), in c++ ci sono nuovi modi.
     * Possibile utilizzo: crittografia
     */
    for(int i=0; i<5; i++){
        pDouble[i]=rand();
        cout << pDouble[i] << endl;
    }
    cout << "----------------------------------" << endl;

    pChar = (char *) pDouble;

    for(int i=0; i<5; ++i){
        /*
         * faccio lo xor tra il valore int di 'A' cioè 65 e l'ultimo byte di double ossia l'8avo
         * XOR
         * 01011011
         * 11100010
         *    =
         * 10111001
         */
        int dim = sizeof(double);
        for(char c : {'C','H','I','A','V','E'})
            pChar[i*dim+c%dim] ^= c;
        cout << pDouble[i] << endl;
    }
    cout << "----------------------------------" << endl;

    for(int i=0; i<5; ++i){
        /*
         * stesso procedimento per portarlo indietro
         * da notare che vale anche se le lettere sono invertite d'ordine
         * il ché non lo rende una cifratura sicurissima
         */
        int dim = sizeof(double);
        for(char c : {'C','H','I','A','V','E'})
            pChar[i*dim+c%dim] ^= c;
        cout << pDouble[i] << endl;
    }




    return 0;
}
