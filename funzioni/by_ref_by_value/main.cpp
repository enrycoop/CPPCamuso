#include <iostream>

using namespace std;

void scambia(int &a, int &b) {
    cout << "Ricevuti: " << a << " " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "dopo: " << a << " " << b << endl;
}

//const specifica che non puoi modificare il valore
int sommaVett(const int v[], int num_ele) {
    cout << "Nella funzione: " << v << " " << &num_ele << endl;

    int somma=0;
    for(int i=0; i<num_ele; ++i)
      somma+=v[i];

    return somma;
}

int main() {
    int x = 100;
    int y = 200;
    scambia(x, y);
    //cout << "al ritorno: " << x << " " << y << endl;

    int v[]{4, 8, 1, 34, 78};
    int num_ele = 5;
    cout << "Nel main: " << v << " " << &num_ele << endl;
    cout << sommaVett(v, num_ele);
    return 0;
}
