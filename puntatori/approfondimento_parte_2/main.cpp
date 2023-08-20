#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
const int MAX_ELE=1200;

struct t_elemento
{
    //parte dati
    int n;

    //parte dati pesanti
    double v[100000];
};

/*
 * Dichiarare qui il vettore per allocarlo nello heap (il cosiddetto free
 * dentro il main verrebbe allocato sullo stack esaurendolo....
 */
t_elemento v[MAX_ELE];

int main() {

    time_t start = time(0), stop;

    srand(10);
    for(int i=0; i<MAX_ELE; ++i)
        v[i].n = rand();


    //bubble sort
    for(int i=0; i<MAX_ELE - 1; ++i) {
        cout << i << endl;
        for (int j = i + 1; j < MAX_ELE; ++j)
            if (v[j].n <= v[i].n) {
                t_elemento temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
    }

    stop=time(0);

    cout << "Tempo impiegato con gli array: " << difftime(stop, start) << endl;
    cout << "I primi 10 come verifica: ";
    for(int i=0; i<10; i++)
        cout << v[i].n << " ";
    cout << endl;

    system("pause");

    srand(10);
    for(int i=0; i<MAX_ELE; ++i)
        v[i].n = rand();

    t_elemento* vP[MAX_ELE]; //array di tot puntatori a t_nodo
    for(int i=0; i<MAX_ELE; ++i)
        vP[i] = &v[i]; //indirizzi degli elementi dell'array statico

    //il trucco sta nell'ordinare NON gli elementi pesanti dell'array ma i puntatori
    start = time(0);
    cout << "Con i puntatori...\n";
    for(int i=0; i<MAX_ELE - 1; ++i)
        for(int j=i+1; j<MAX_ELE; ++j)
            if(vP[j]->n <= vP[i]->n)
            {
                t_elemento *temp = vP[i];
                vP[i] = vP[j];
                vP[j] = temp;
            }
    stop=time(0);

    cout << "Tempo impiegato con i puntatori: " << difftime(stop, start) << endl;
    cout << "I primi 10 come verifica: ";
    for(int i=0; i<10; i++)
        cout << vP[i]->n << " ";
    cout << endl;
    return 0;
}
