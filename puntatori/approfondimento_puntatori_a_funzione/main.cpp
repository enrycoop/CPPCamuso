#include <iostream>

using namespace std;

int f(int n)
{
    return 3*n;
}

bool minoreAlfabetico(string s1, string s2){
    return s1<s2;
}

bool minoreLunghezza(string s1, string s2){
    return s1.length() < s2.length();
}

bool minoreValore(string s1, string s2)
{
    return stoi(s1) < stoi(s2);
}


void ordinamentoGenerico(string v[], int n_ele,
                         bool (*fminore_di) (string, string)
                         )
{
    for(int i=0; i<n_ele-1; ++i)
        for(int j=i+1; j<n_ele; ++j)
            if (fminore_di(v[j], v[i]))
                swap(v[i], v[j]);
}

void stampaVet(string v[], int num_ele){
    for(int i=0; i<num_ele; ++i){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    /*
     * pf è un puntatore a una funzione
     * che restituisce un int e che riceve
     * un int come parametro
     */
    int (*pf)(int);

    pf = &f; //metto nel puntatore l'indirizzo di f
    cout << (*pf)(5) << endl;

    pf = f;
    cout << pf(5) << endl; //si può fare anche così

    string v1[] = {"caso", "casalasco", "abate", "birillo"};
    ordinamentoGenerico(v1, 4, minoreAlfabetico);
    stampaVet(v1,4);

    string v2[] = {"caso", "casalasco", "abate", "birillo"};
    ordinamentoGenerico(v2, 4, minoreLunghezza);
    stampaVet(v2,4);

    string v3[] = {"100", "67", "2", "123"};
    ordinamentoGenerico(v3, 4, minoreValore);
    stampaVet(v3,4);


    return 0;
}
