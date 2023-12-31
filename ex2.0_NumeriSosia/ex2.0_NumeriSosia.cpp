// ex2.0_NumeriSosia.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>

using namespace std;

int main()
{
    int sosia1 = 052;     // costante ottale
    int sosia2 = 0x2A;    // esadecimale
    int sosia3 = 42;      // letterale decimale
    int sosia4 = 0b101010;// binaria

    cout << "sosia 1: " << sosia1 << endl;
    cout << "sosia 2: " << sosia2 << endl;
    cout << "sosia 3: " << sosia3 << endl;
    cout << "sosia 4: " << sosia4 << endl;

    long n1 = 10;

    unsigned int us = 40000;

    unsigned long n = 432UL; // l'ordine dei postfissi non conta potevamo scrivere anche LU

    long long ll = 25000LL;
    unsigned long long ll = 25000ULL;

    unsigned long schifoso = 0xF0UL;
}

// Per eseguire il programma: CTRL+F5 oppure Debug > Avvia senza eseguire debug
// Per eseguire il debug del programma: F5 oppure Debug > Avvia debug

// Suggerimenti per iniziare: 
//   1. Usare la finestra Esplora soluzioni per aggiungere/gestire i file
//   2. Usare la finestra Team Explorer per connettersi al controllo del codice sorgente
//   3. Usare la finestra di output per visualizzare l'output di compilazione e altri messaggi
//   4. Usare la finestra Elenco errori per visualizzare gli errori
//   5. Passare a Progetto > Aggiungi nuovo elemento per creare nuovi file di codice oppure a Progetto > Aggiungi elemento esistente per aggiungere file di codice esistenti al progetto
//   6. Per aprire di nuovo questo progetto in futuro, passare a File > Apri > Progetto e selezionare il file con estensione sln
