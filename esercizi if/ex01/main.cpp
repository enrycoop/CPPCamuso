#include <iostream>

int main() {
    // abbreviazione per namespace std
    using namespace std;

    //dichiarazione variabili
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    // LETTURA DATI
    cout << "Inserire n1 n2 n3 separati da spazio: " << endl;
    cin >> n1 >> n2 >> n3;

    cout << "Dati letti: n1:" << n1
    << " n2:" << n2 << " n3:" << n3 << endl;

    //ELABORAZIONE
    //calcolo media - modo 1
    int somma = 0;
    somma = n1+n2+n3;
    int media = somma/3; // NB:divisione intera (si perdono decimali)

    // calcolo media - modo 2
    int media2 = (n1+n2+n3)/3;

    // calcolo media - modo 3
    double media3 = (n1+n2+n3)/3; // comunque la divisione è intera

    // calcolo media - modo 4
    double media4 = (n1+n2+n3)/3.0; // forzo a calcolo reali

    cout << "media1:" << media << endl;
    cout << "media2:" << media2 << endl;
    cout << "media3:" << media3 << endl;
    cout << "media4:" << media4 << endl;

    // controllo if
    if (n1 == media)
        cout << "Verificato con il primo numero inserito" << endl;
    else if (n2 == media)
        cout << "Verificato con il secondo numero inserito" << endl;
    else if (n3 == media)
        cout << "Verificato con il terzo numero inserito" << endl;
    else
        cout << "Non verificato..." << endl;

    // soluzione alternativa
    cout << "SOLUZIONE ALTERNATIVA" << endl;
    int trovato = 0;
    if (n1 == media) trovato = 1;
    if (n2 == media) trovato += 100;
    if (n3 == media) trovato += 1000;

    if (trovato == 0)
        cout << "Non Verificato..." << endl;
    else if (trovato == 1)
        cout << "Verificato solo per n1" << endl;
    else if (trovato == 100)
        cout << "Verificato solo per n2" << endl;
    else if (trovato == 1000)
        cout << "Verificato solo per n3" << endl;
    else
        cout << "Verificato per n1, n2, n3" << endl;

    // soluzione ostica
    cout << "SOLUZIONE OSTICA" << endl;
    trovato = 0;
    if (n1 == media) trovato = 1;
    if (n2 == media) trovato += 100;
    if (n3 == media) trovato += 1000;

    if (trovato == 0)
        cout << "Non Verificato..." << endl;
    else if (trovato == 1)
        cout << "Verificato solo per n1" << endl;
    else if (trovato == 100)
        cout << "Verificato solo per n2" << endl;
    else if (trovato == 1000)
        cout << "Verificato solo per n3" << endl;
    else
        cout << "Verificato per n1, n2, n3" << endl;

    return 0;
}
