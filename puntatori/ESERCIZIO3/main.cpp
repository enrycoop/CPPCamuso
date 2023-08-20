#include <iostream>

#define DIM 14

using namespace std;

/*
 * Riceve un array di interi
 * Restituisce un array di interi (creato dinamicamente)
 * contenente soltanto gli elementi del primo nell'intervallo
 * con estremi [minAccettabile, maxAccettabile]
 */
int* filtra(int v[], int num_ele,
            int minAccettabile, int maxAccettabile,
            int &filtrati)
{
    filtrati=0;
    //primo 'giro' per contare quanti valori soddisfano il criterio
    for(int i=0; i<num_ele; ++i)
    {
        if(v[i]>=minAccettabile && v[i]<=maxAccettabile)
        {
            filtrati++;
        }
    }

    //allochiamo un array per contare gli interi
    int* p = new int[filtrati];

    //secondo 'giro' per copiare gli elementi
    for(int i=0, copiati=0; i<num_ele; ++i)
    {
        if(v[i]>=minAccettabile && v[i]<=maxAccettabile)
        {
            p[copiati++] = v[i]; //il post incremento incrementa dopo aver usato il valore nell'espressione in cui è
        }
    }
    return p;
}

int main() {

    int v[DIM] = {6, -78, -59, 11, 73, -26, 77, -92, -12, 7, -31, 77, 84, 15 };

    int quantiFiltrati=0;
    int* filtrati = filtra(v, DIM, -10, 80, quantiFiltrati);

    for(int i=1; i<quantiFiltrati; ++i) {
        cout << filtrati[i] << " ";
    }
    cout << endl;

    delete[] filtrati;
    return 0;
}
