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

int main()
{
    /*
    Tutti questi oggetti sono stati creati sullo stack, non dovremo quindi
    preoccuparci della deallocazione di memoria degli oggetti. Verrà deallocata
    in automatico all'uscita dallo scope.
    */
    //7 modi per inizializzare una classe
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
