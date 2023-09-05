#include <iostream>
#include "data.h"

using namespace std;
Data crea_data()
{

    Data d1 = Data(24,8,2023);
    return d1;      // scatena la copia di default
}

bool date_uguali(Data d1, Data d2){ //il passaggio di un oggetto scatena una copia
//...
return true;
}


class punto3D
{

public:
    punto3D(double _x, double _y, double _z) : x{_x}, y{_y}, z{_z} //vengono prima fatte queste
    {
//        this->x=x;
//        this->y=y;
//        this->z=z;
    }

    punto3D(double x) : punto3D(x, 0, 0) //il costruttore delegato viene chiamato prima
    {

    }

    punto3D& getXp(){
        cout << x << endl;
        return *this;
    }
    punto3D& getYp(){
        cout << y << endl;
        return *this;
    }
private:
    double x,y,z;
};

class punto2D
{
public:
    punto2D(int _x, int _y) : x{_x}, y{_y}
    {
        std::cout << "Costruttore punto2D" << std::endl;
    }
private:
    int x, y;
};

class segmento
{
public:
    segmento(int x1, int y1, int x2, int y2) : A{x1,y1}/*chiama il costruttore di punto2D*/, B{x2,y2} {}
private:
    punto2D A, B;
};

int main()
{
    //segmento AB{-4,-4,8,8};



    punto3D p = punto3D(1,1,1);
    p.getXp().getYp(); //chain possibile perchè restituisce un reference e non un puntatore
    /*
    Tutti questi oggetti sono stati creati sullo stack, non dovremo quindi
    preoccuparci della deallocazione di memoria degli oggetti. Verrà deallocata
    in automatico all'uscita dallo scope.
    */
    7 modi per inizializzare una classe
    Data d1 = Data(24,8,2023);
    Data d2(24,8,2023);
    Data d3{24,8,2023}; // da preferire le liste di inizializzazione

    Data d4=Data();
    //ERRORE SE tutte le seguenti sono vere
    //non c'è il costruttore vuoto E
    //c'è almeno un altro costruttore con almeno un parametro con valore di default

    Data d5 = d3; //copia di default copia lo stato dell'oggetto
    Data d6{d3};  //copia di default
    d3.setMese(4);

    /*
    d7 invece è un puntatore e bisogna preoccuparci della deallocazione
    */
    Data *d7 = new Data{d3}; //creazione con copia di default

    cout << "Oggi e' il " << d1.formato_breve() << endl;
    cout << "Oggi e' il " << d2.formato_breve() << endl;
    cout << "Oggi e' il " << d3.formato_breve() << endl;
    cout << "Oggi e' il " << d4.formato_breve() << endl;
    cout << "Oggi e' il " << d5.formato_breve() << endl;
    cout << "Oggi e' il " << d6.formato_breve() << endl;
    cout << "Oggi e' il " << d7->formato_breve() << endl;
    delete d7;
    return 0;
}
