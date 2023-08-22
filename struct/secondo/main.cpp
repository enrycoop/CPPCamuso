#include <iostream>
#include <cmath>

using namespace std;
template<typename T>
struct Punto{
    T x, y;
};

struct Punto_d{
    double x, y;
};

struct Poligono
{
    int num_lati;

    int x[100], y[100];
};
template <typename T>
struct Poligono2
{
    int num_lati;

    Punto<T> vertici[100];
};
/*
 * (0,1) (1,1)
 * (0,0) (0,1)
 */

//double distanza_tra_due_punti(Punto a, Punto b={0,0}){
//    //combinazione lineare
//    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2) );
//}
//Punto punto_medio(Punto a, Punto b){
//    return Punto{(a.x+b.x)/2, (a.y+b.y)/2};
//}

template <typename T>
double distanza_tra_due_punti(T a, T b={0,0}){
    //combinazione lineare
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2) );
}

template <typename T>
Punto<T> punto_medio(T a, T b){
    return Punto<T>{(a.x+b.x)/2, (a.y+b.y)/2};
}


template <typename T>
double perimetro(T p)
{
    double risultato=0;
    for(int i=0; i<p.num_lati; i++){
        risultato += distanza_tra_due_punti(p.vertici[i], p.vertici[i+1]);
    }
    return risultato;
}
//
////OVERLOAD
//double perimetro(Poligono2 p)
//{
//    double risultato=0;
//    for(int i=0; i<p.num_lati; i++){
//        risultato += distanza_tra_due_punti(p.vertici[i], p.vertici[i+1]);
//    }
//    return risultato;
//}
//
//double perimetro(Poligono p)
//{
//    double risultato=0;
//    for(int i=0; i<p.num_lati; i++){
//        Punto a{p.x[i], p.y[i]};
//        Punto b{p.x[i+1], p.y[i+1]};
//        risultato += distanza_tra_due_punti(a, b);
//    }
//    return risultato;
//}

int main() {

//    Punto p1{3,4}, p2{7,8};
//
//    cout << distanza_tra_due_punti(p1,p2) << endl;
//    Punto medio = punto_medio(p1, p2);
//    cout << "Punto medio: (" << medio.x << "," << medio.y << ")\n";
//
//    Poligono quadrato{4,{0,0,1,1,0}, {0,1,1,0,0}};
//    cout << perimetro(quadrato) << endl;
    Poligono2<double> poli{4, {{0.2,0.3}, {0.7,1.5}, {1,1}, {1,0}, {0,0}}};
    cout << perimetro(poli) << endl;

    return 0;
}
