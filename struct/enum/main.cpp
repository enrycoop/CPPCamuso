#include <iostream>

using namespace std;

//sono consentite dichiarazioni forward: non sappiamo in anticipo i valori e gli enumeratori
//aggiungendo in cascata i valori
enum class t_sapori;
void f(t_sapori sapore);

int main()
{
    //enum pre C++ 11
    enum giornoSettimana {Lun, Mar, Mer, Gio, Ven, Sab, Dom};

    giornoSettimana oggi = Lun;

    //oggi = 8 ERRORE DAL COMPILATORE
    //oggi = 3 IDEM
    enum colori{giallo, rosso, verde, blu};
    //enum colore_carrozzeria {silver, bianca, verde}; verde in conflitto

    colori sfondo=giallo;

    if (oggi==giallo)
        cout << "???" << endl;

    if (oggi==sfondo)
        cout << "???" << endl;

    //in C++ 11
    enum class t_colori{giallo, rosso, verde, blu};
    enum class t_spettro{rosso, arancione, giallo, verde, azzurro, indaco, violetto};

    t_spettro classe_sole = t_spettro::giallo;
    t_colori limone = t_colori::giallo;

//    if (classe_sole == limone) //da errore
//        cout << "????????";
    enum class t_stati_semaforo : char {rosso, giallo, verde};

    return 0;
}
