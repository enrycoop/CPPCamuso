#include <iostream>

using namespace std;

void stampa_matrice(int m[][3], int num_righe, int num_colonne)
{
    m[2][1] = 100;
}


int main() {

    int tris[3][3]{{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
/*
    cout << tris[0] << endl;
    cout << tris[1] << endl;
    cout << tris[2] << endl;
    cout << *tris[0] << endl;
    cout << *tris[1] << endl;
    cout << *tris[2] << endl;

    cout << *(tris[0] + 1) << endl;
    cout << *(tris[1] + 1) << endl;
    cout << *(tris[2] + 1) << endl;

    cout << *(tris[0] + 2) << endl;
    cout << *(tris[1] + 2) << endl;
    cout << *(tris[2] + 2) << endl;
    cout << "------------------------------" << endl;
*/
    /*
     * essendo memorizzati tutti consecutivamente nella ram
     * è possibile incrementare il puntatore fino a raggiungere
     * l'ultima posizione della matrice.
     */
//    int *p = tris[0]; //puntatore all'indirizzo del primo valore della prima riga
//    while(p<=(tris[2]+2)) //finchè p non è uguale all'indirizzo dell'ultimo valore dell'ultima riga
//    {
//        cout << *p << endl;
//        p++;
//    }
    //sfruttando l'operatore ++ si può accorciare il ciclo di sopra
    int *p = tris[0];
    while(p<=(tris[2]+2))
        cout << *p++ << endl;

    for(int *p = tris[0]; p<=tris[2]+2; p++)
        cout << *p << endl;

//
//
//    for(int r=0; r<3; ++r){
//        for(int c=0; c<3; ++c){
//            cout << tris[r][c] << " ";
//        }
//        cout << endl;
//    }
//    cout << "------------------------------" << endl;
//
//    for(int c=0; c<3; ++c){
//        for(int r=0; r<3; ++r){
//            cout << tris[r][c] << " ";
//        }
//        cout << endl;
//    }
//    cout << "------------------------------" << endl;
//    //elaborazione di una riga particolare
//    int riga=1;
//
//    for(int c=0; c<3; ++c)
//        if(tris[riga][c]%2==0)
//            cout << tris[riga][c] << " ";

    return 0;
}
