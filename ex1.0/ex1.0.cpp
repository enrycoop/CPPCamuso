// ex1.0.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
// preprocessore include delle librerie
#include <iostream>

// preprocessore macro con parametri
#define GETMAX(a,b) a>b?a:b


int massimo(int x, int y) {
    return GETMAX(x, y);
}

int esampio_anno_if() {
    using namespace std;

    int escludi_da_anno = 1970, a_anno = 2000, anno = 0;

    cout << "In che anno sei nato: ";
    cin >> anno;

    if ( anno < escludi_da_anno || anno > a_anno ) { //short evaluation: si ferma quando una delle cond. è vera
        cout << "Vuoi partecipare ad un sondaggio su ...";
    }

    return 0;
}

void esempioEspressioniInCondizioneIf() {
    using namespace std;
    int n1 = 1, n2 = 1;

    if ( int espressione = (n1-n2) )
        cout << espressione << " corrisponde a vero\n";
    else
        cout << espressione << " corrisponde a falso\n";


    string s1 = "paperino", s2 = "paperina";

    if ( !s1.compare(2,3,s2,2,3) ) cout << "uguali\n";

    if (true || true && false) // la priorità la ha l'and altrimenti sarebbe falso.
        cout << "Vero\n";
    else
        cout << "Falso\n";

    // DE MORGAN

    if ( !(true || true) == (!true && !true) )
        cout << "Le due condizioni si equivalgono\n";

}

// main funzione principale
int main()
{
    esempioEspressioniInCondizioneIf();
    /*
    std::cout << "Inserisci la somma in euro: ";
    int euro;
    std::cin >> euro;
    if (euro <= 0) {
        std::cout << "Inserire un valore maggiore di zero!" << std::endl;
    } else {
        std::cout << "Fattore di cambio? ";
        double cambio;
        std::cin >> cambio;

        if (cambio > 0 && cambio < 100 && euro < 1000) { // short evaluation: si ferma appena una delle cond. diventa falsa
            std::cout << "In dollari: " << euro * cambio << std::endl;
        } else {
            std::cout << "Inserire un valore maggiore di zero!" << std::endl;
        }
    }*/
}

