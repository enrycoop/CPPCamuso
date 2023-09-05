#include <iostream>
#include "Data.h"

using namespace std;

void riceveData(Data d)
{
    cout << "Data ricevuta: " << d.formato_breve() << endl;
}

Data restituisceData()
{
    return Data{10,11,2010};
}

int main()
{
    Data d1 {30,11,2016};

    //casi in cui viene invocato il COSTRUTTORE COPIA (COPY CONSTRUCTOR)
    //(in questo caso qiello di default mancandone uno esplicito scritto da noi)
    Data d2{d1};
    Data d3 = d2;
    riceveData(d1);
    Data feste[3] = {Data{1,5,2016}, Data{15,8,2016}, Data{25,12,2016}};
    Data feste1[3] = {{1,5,2016}, {15,8,2016}, {25,12,2016}}; //equivalente perchè il giusto costruttore viene desunto dal tipo dell'array
    /*anche una classe eccezione data, l'uso di throw e l'intercettazione causano una copia*/
//    class Eccezione_data {...};
//    ...
//    throw Eccezione_data
//    ...
//    try{... chiamata che causa il throw di una eccezione sulla data }
//    catch(Eccezione_data eccezione) {...};

    cout << "d1: " << d1.formato_breve() << endl;
    cout << "d2: " << d2.formato_breve() << endl;
    cout << "Data strarestituita: " << restituisceData().formato_breve() << endl;

    return 0;
}
