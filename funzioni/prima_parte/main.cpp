#include <iostream>
#include <ctime>
#include <string.h>
//#include "/home/enrico/Documenti/GitHub/CCUtilities/library.h"

void splash_screen_cpp(std::string titles[], size_t title_sz, size_t size=80) {
    if(size < 10)
        return;

    for(int i = 0; i < title_sz; ++i)
        if(titles[i].length()>size)
            size = titles[i].length()/2 * 2 + 4;

    std::string str{};
    for(int i = 0; i <= size; ++i) {
        str+="*";
    }
    str+="\n";

    for(int i = 0; i < title_sz; ++i) {
        str+="*";
        size_t spaces = (size-titles[i].length())/2;

        for(int j = 0; j < spaces; ++j)
            str+=" ";

        str+=titles[i];
        for(int j = 0; j < spaces - 1; ++j)
            str+=" ";

        if((titles[i].length()%2)!=0)
            str+=" ";
        str+="*\n";
    }
    for(int i = 0; i <= size; ++i) {
        str+="*";
    }
    std::cout << str << std::endl;
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
    std::string titles[] = {"CAPITOLO FUNZIONI", "codice di f.Camuso per il C++11", "corso su youtube"};
    splash_screen_cpp(titles, 3, 30);
    int pensatoDalPc = generaNumeroCasuale(10);
    cout << "Il pc ha estratto " << pensatoDalPc << endl;

    return 0;
}

int generaNumeroCasuale(int massimo,int minimo) {  // corpo
    int numeroEstratto = rand() % (massimo - minimo + 1) + minimo;
    return numeroEstratto;
}