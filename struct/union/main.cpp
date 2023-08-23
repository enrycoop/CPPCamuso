#include <iostream>
#include <cstring>

using namespace std;

//struct t_cliente
//{
//
//    bool UE; //true se appartiene all'unione europea
//    char sigla[3]; //usato solo se UE==true; es ITA, SPA, FRA
//    int codice_nazione; //usato solo se USE==false
//
//    //ecc.
//};

//spazio di memoria ram unificato, verranno occupati i byte più pesanti.
//ad esempio qui in è 4 byte mentre char 3 quindi verranno occupati 4 byte.
//union t_riferimento
//{
//    char sigla[3];
//    int codice_nazione;
//};
//
//struct t_cliente
//{
//
//    bool UE; //true se appartiene all'unione europea
//   t_riferimento riferimento;
//    //ecc.
//};


//UNION ANONIME
struct t_cliente
{
    bool UE;
    union
    {
        char sigla[3];
        int codice_nazione;
    };

};

t_cliente elenco_clienti[5000];

int main()
{
//    elenco_clienti[0].UE = true;
//    strncpy(elenco_clienti[0].riferimento.sigla, "ITA", 3);
//
//    elenco_clienti[1].UE = false;
//    elenco_clienti[1].riferimento.codice_nazione = 12;
//
//    string s(elenco_clienti[0].riferimento.sigla);
//
//    cout << s << endl;
//    cout << elenco_clienti[1].riferimento.codice_nazione << endl;

    elenco_clienti[0].UE = true;
    strncpy(elenco_clienti[0].sigla, "ITA", 3);

    elenco_clienti[1].UE = false;
    elenco_clienti[1].codice_nazione = 12;

    string s(elenco_clienti[0].sigla);

    cout << s << endl;
    cout << elenco_clienti[1].codice_nazione << endl;

    return 0;
}
