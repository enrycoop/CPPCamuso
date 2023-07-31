#include <iostream>
using namespace std;

void prima_parte() {

    float f = 3.14; // di default è un double ma convertito in float
    double d = 3.14;
    long double ld = 3.14;

    cout << f << endl;
    cout << d << endl;
    cout << ld << endl;

    cout.precision(70);
    cout << f << endl;
    cout << d << endl;
    cout << ld << endl;

    long double ld1 = 1.L/3; // qui convertiamo 1. in Long double
    long double ld2 = 1./3L; // qui convertiamo il 3 in long int poichè è un letterale intero


    float f1 = 0.14;
    float f2 = .14;
    float f3 = 3.;

    cout << 1/3 << endl;
    cout << 1/3. << endl;
    // errore viene fatta prima la frazione e poi la conversione in float
    cout << (float) (1/3) << endl;
    // modo corretto
    cout << (float) 1/3 << endl;

    //formato esponenziale
    float f4 = 314e-2;
    float f5 = 0.0314e+2;

}

void seconda_parte() {

    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl;


}

int main() {
    seconda_parte();
    return 0;
}
