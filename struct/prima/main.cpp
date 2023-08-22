#include <iostream>
#include <cstring>

using namespace std;

/*
 * PIANO TARIFFARIO
 * - nome
 * - opearotre
 * - costo sms
 * - costo mms
 * - costo alla risposta
 * - costo al minuto
 * - GB traffico mese Internet
 */
struct pianoTariffario //tipo utente
{
    string operatore;
    string nome;
    double costoSMS;
    double costoMMS;
    double costoRisposta;
    double costoAlMin;
    int smsGratis;
    int gigaMese;
};

int main() {
    const int MAX = 100;
    pianoTariffario podafone{"Vodafone s.p.a.", "extra super special", 0.05, 0.3,0.15,0.1,30};
    
    podafone.operatore = "Wind";
    cout << podafone.operatore << endl;

    struct Punto
    {
        int x, y;

        double *dati; //nella copia viene copiato anche l'indirizzo
    };
    Punto p1{2,3, new double[100]};
    p1.dati[4] = 2000;
    Punto p2 = p1; //copia automatica
    p2.dati = new double[100];
    memcpy(p2.dati, p1.dati, 100*sizeof(double));

    cout << p2.dati[4] << endl;


    return 0;
}
