#include <iostream>
#include <cstdlib> //rand() e srand()
#include <ctime> // time

using namespace std;

void primo() {
    int numero_estratto=0;
    bool n1,n2,n3,n4,n5,n6;
    n1=n2=n3=n4=n5=n6=false;



    while(true) {
        numero_estratto = (rand()%6) + 1;
        switch (numero_estratto) {
            case 1: n1=true;
                break;
            case 2: n2=true;
                break;
            case 3: n3=true;
                break;
            case 4: n4=true;
                break;
            case 5: n5=true;
                break;
            case 6: n6=true;
                break;
        }
        cout << numero_estratto << endl;

        if (numero_estratto<1 || numero_estratto>6)
            break;

        if (n1&&n2&&n3&&n4&&n5&&n6)
            break;
    }
    if (n1&&n2&&n3&&n4&&n5&&n6)
        cout << "Estratti almeno una volta TUTTI i numeri previsti ;)" << endl;
    else
        cout << "Siamo nei guai! "
             << "ESTRATTO: " << numero_estratto<< endl;

}

int main() {
    int numero_estratto=0;
    int conta_sei=0, lanci=0;

    while (conta_sei<3) {
        numero_estratto = rand()%6+ 1;
        lanci++;
        if(numero_estratto==6) conta_sei++;
        cout << numero_estratto << endl;
    }
    cout << "Ci sono voluti " << lanci << " lanci per estrarre tre volte sei! " << endl;

    return 0;
}
