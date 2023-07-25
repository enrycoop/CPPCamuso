// ex1.0.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
// preprocessore include delle librerie
#include <iostream>

// preprocessore macro con parametri
#define GETMAX(a,b) a>b?a:b


int massimo(int x, int y) {
    return GETMAX(x, y);
}

// main funzione principale
int main()
{
    std::cout << "Inserisci la somma in euro: ";
    int euro;
    std::cin >> euro;
    if (euro <= 0) {
        std::cout << "Inserire un valore maggiore di zero!" 
                  << std::endl;
    }

    std::cout << "Fattore di cambio? ";
    double cambio;
    std::cin >> cambio;

    std::cout << "Cambio letto: " 
              << cambio 
              << std::endl;

    std::cout << "In dollari: " 
              << euro * cambio 
              << std::endl;

    
}
