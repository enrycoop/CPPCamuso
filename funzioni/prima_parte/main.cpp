#include <iostream>
#include <ctime>
#include <string.h>
//#include "/home/enrico/Documenti/GitHub/CCUtilities/library.h"

void splash_screen(const char* titles[], size_t lines) {
    printf("%s", "******************************************************************************\n");
    for(int i = 0; i < lines; ++i) {
        printf("%s", "*");
        int spaces = (80-strlen(titles[i]))/2 - 1;

        for(int j = 0; j < spaces-1; ++j) {
            printf("%s", " ");
        }
        printf("%s", titles[i]);
        for(int j = 0; j < spaces-1; ++j) {
            printf("%s", " ");
        }
        if(strlen(titles[i])%2!=0)
            printf(" ");
        printf("%s", "*\n");
    }
    printf("%s", "******************************************************************************\n");
}

using namespace std;
/*
 *  param di default, se inserisci il primo di default,
 *  tutti gli altri dopo devono avere un valore di default
 *  non dsi può scrivere -> int generaNumeroCasuale(int massimo, int minimo=0, int h);
 *
 */
int generaNumeroCasuale(int massimo=102021, int minimo=0); // signature, firma, interfaccia

void scambia(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    /*
     * time quando riceve null ci da il numero di secondi trascorsi dal 1970
     */
    srand( time(nullptr) );

    cout << RAND_MAX << " " << time(0) << endl;
    const char* titles[] = {"CAPITOLO FUNZIONI", "codice di f.Camuso per il C++11", "corso su youtube"};
    splash_screen(titles, 3);
    int pensatoDalPc = generaNumeroCasuale(10);
    cout << "Il pc ha estratto " << pensatoDalPc << endl;

    return 0;
}

int generaNumeroCasuale(int massimo,int minimo) {  // corpo
    int numeroEstratto = rand() % (massimo - minimo + 1) + minimo;
    return numeroEstratto;
}