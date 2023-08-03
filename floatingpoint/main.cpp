#include <iostream>
#include <cmath>
#include <limits>
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
    cout.precision(20);
    cout << "float\n"
         << " " << numeric_limits<float>::lowest() << endl
         << " " << numeric_limits<float>::max() << "\n\n";
    cout << "double\n"
         << " " << numeric_limits<double>::lowest() << endl
         << " " << numeric_limits<double>::max() << "\n\n";
    cout << "long double\n"
         << " " << numeric_limits<long double>::lowest() << endl
         << " " << numeric_limits<long double>::max() << "\n\n";

    if ( (8 - 6.4) == 1.6 )
        cout << "Espressioni uguali \n";
    else
        cout << "Espressioni diverse \n";

    if ( abs((8 - 6.4) - 1.6 ) < .0001)
        cout << "Espressioni uguali \n";
    else
        cout << "Espressioni diverse \n";
}

int main() {
    seconda_parte();
    return 0;
}
