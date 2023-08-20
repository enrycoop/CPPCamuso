#include <iostream>
using namespace std;
int main() {

    int v[] = {100, -80, 56, 9};

    //sono identici
    cout << v << endl;
    cout << &v[0] << endl;

    int* pInt = v;
    cout << pInt << endl;

    cout  << pInt[2] << endl;
    cout << *(v + 2) << endl;
    cout << *(pInt + 2) << endl;

    pInt = pInt + 1; //sposta il puntatore all'elemento successivo
    /*
     * il numero che viene aggiunto veramente al puntatore è in base al tipo del puntatore
     * es un double sposta di 8 byte
     */
    cout << *pInt << endl;
    //v++; non va bene perchè è definito solo sui puntatori

    int *p=v;
    for(int i=0; i<4; i++, p++)
        cout << *p << " ";
    cout << endl;

    int *p1, *p2, *p3;
    //p3 = p1 + p2; //operatore non valido

    p1 = v;
    p2 = v+3;
    cout << p2 - p1 << endl;


    return 0;
}
