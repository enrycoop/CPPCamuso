/*
 * Sapendo che l'operatore % calcola il resto della divisione tra due numeri
 * interi, inserito un numero dire se è pari
 */
#include <iostream>
using namespace std;
int main() {
    int n = 0;

    cout << "Inserire un numero: " << endl;
    cin>>n;

    if (n%2==0)
        cout << "Pari\n";
    else
        cout << "Dispari\n";

    // equivale a
    if (n%2) // 0 corrisponde a false, non zero a true
        cout << "Pari\n";
    else
        cout << "Dispari\n";
    // NON EQUIVALE a
    if (!n%2) //viene eseguito prima !n e poi %2
        cout << "Dispari\n";
    else
        cout << "Pari\n";
    if (!(n%2)) //viene eseguito prima !n e poi %2
        cout << "Dispari\n";
    else
        cout << "Pari\n";

    return 0;
}
