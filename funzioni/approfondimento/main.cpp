#include <iostream>
using namespace std;

struct punto3D{
    // coordinate in 3 dimensioni di un punto
    long double x, y, z;
};

struct cubo{
    /*
     * vertici del cubo (8 punti)
     */
    punto3D v1, v2, v3, v4, v5, v6, v7, v8;
};

void f1(cubo c) {

}

void f2(cubo& c) {

}

string f()
{
    string s="gdhsajdghsajkgdfkhfjsdahfklhsdajfkhjsad";
    return s;
}

string* f3()
{
    string s="gdhsajdghsajkgdfkhfjsdahfklhsdajfkhjsad";
    return &s;
}

string f(int quante) {
    string lungaStringa = "";
    /*
     * non si può fare perché questo modo di inizializzare le strenghe
     * è tipico del c e quindi viene istanziato un array di char
     */
    //lungaStringa+="dfhsjklfhdsjkf";
    for(int i=0; i<quante; ++i)
        lungaStringa+=string("abcde....rhjsdfahjkdshfjshadlfjdhafdsafdsfasdsafds");

    return lungaStringa;
}

int main() {
    /*
    cubo c;
    cubo* p;

    cout << sizeof(c) << endl;
    cout << sizeof(p) << endl;

    int quantiCubi = 300000000;

    cout << "Inizio senza reference ...\n";
    for(int i=0; i<quantiCubi; ++i)
        f1( c );
    cout << "Fine senza reference ...\n\n\n\n";


    //più efficiente
    cout << "Inizio con reference...\n";
    for(int i=0; i<quantiCubi; ++i)
        f2( c );
    cout << "Fine con reference ... \n\n\n\n";
    */
    const string& s = f();

    /*
     * in questo caso il puntatore punta a un'area dello stack
     * che non esiste più e quindi il risultato è imprevedibile.
     * é preferibile usare i reference che ci danno più garanzie
     * e maggior efficienza.
     */
    //string* s1 = f3();
    //cout << *s1 << endl;


    int quanteStringhe = 300000;

    cout << "Inizio senza reference ...\n";
    for(int i=0; i<100; ++i)
        string s2 = f( quanteStringhe );
    cout << "Fine senza reference ...\n\n\n\n";


    //più efficiente
    cout << "Inizio con reference...\n";
    for(int i=0; i<100; ++i)
        const string& s1 = f( quanteStringhe );
    cout << "Fine con reference ... \n\n\n\n";


    return 0;
}


