#include <iostream>
// documentazione https://en.cppreference.com/w/cpp/language/operator_precedence

using namespace std;

int f1(int &i){
    i++;
    return i;
}

int f2(int &i){
    i+=100;
    return i;
}

int main() {
#if 0
    {
        int a = 5, b = 6, c = 7, d = 0;
        d = a + b * c; // precedenza sul *
        cout << d << endl;

        d = a + (++b); // a++ + b
        cout << d << endl;
        d = (a++) + (++b);
        cout << d << endl;
        cout << a << " " << b << endl;


        bool test1 = false;
        if (test1 != a > b)  // priorità al >
            cout << "verificato\n";

        a = 10;
        d = a += 2 * 10;
        cout << d << endl;
    }
#endif
    /*
     * gli operatori che hanno la stessa priorità hanno la stessa associatività.
     * esempi di associatività da sinistra a destra
     */
    cout << 5.0 + 6 * 3 << endl; // precedenza al *
    // in assenza di parentesi la precedenza è in base a sinistra verso destra o viceversa a seconda dell'operatore
    cout << 5.0 / 6 * 3 << endl; //l'ordine è da sinistra a destra
    cout << (5.0 / 6) * 3 << endl;
    cout << 5.0 / (6 * 3) << endl;

    {
        int i=30;
        int j = i = 4; //associatività da destra verso sinistra
        cout << "j: " << j << endl;
    }

    {
        int i = 0, j = 100;
        int z = f1(i) + f2(i); // a+b = b+a ??? risultato indefinito
        cout << "z: " << z << endl;
    }

    return 0;
}
