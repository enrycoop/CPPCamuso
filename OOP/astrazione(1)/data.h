/*
Se non è stato ancora definito questo simbolo non c'è stata occasione per definire data.h
se un altro progetto dovresse includere questo data.h a quel punto il compilatore lo troverebbe già definito
e compilato e quindi non lo include.

serve anche a evitare i riferimenti circolari dentro gli header.
*/

#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include <string>
#include <ctime>

class Data
{
    //METODI (funzioni)

    //uno dei possibili costruttori
    //di norma i costruttori sono pubblici per poterli
    //invocare all'atto della creazione
    //INTERFACE / INTERFACCIA
public:
    Data();
    Data(int gg); //anno e mese quelli correnti
    Data(int gg, int mm); // anno quello corrente
    Data(int gg, int mm, int aa);
    Data(std::string d); //"24-09-2016"


    std::string formato_breve();
    tm* data_corrente();
    bool valida(int gg, int mm, int aa);
    void initialization(int gg, int mm, int aa);
    /*
    Quando un metodo viene inserito all'interno della classe di fatto è trattato come una funzione inline
    quando verrà richiamata, verrà incorporato nel codice binario una copia di tutta la sua traduzione.
    Non ci sarà il salto. Ci sarà proprio un copia e incolla nel codice binario.
    Ogni volta che si richiama una funzione c'è un lavoro di setup aggiuntivo che rappresenta un certo sovraccarico
    dove l'overhead è superiore alla funzione stessa. In alcuni casi dunque conviene metterlo qui.
    Da fare con funzioni piccolissime, semplici e che non variano nel tempo.
    */
    int getMese() {return mese;}
    void setMese(int mm) {mese = mm;}

    // STATO INTERNO (VARIABILI)
    //tutte le variabili sono PRIVATE di default
private:
    int giorno=1, mese=1, anno=1970;


};

#endif // DATA_H_INCLUDED
