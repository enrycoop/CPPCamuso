
#include <iostream>
using namespace std;

/*
 * input da tastiera l'anno, Visualizzare sullo schermo
 * quantio giorni ha il mese di febbraio di quest'anno
 */
void anno_bisestile() {
    int anno{0};

    cout << "Inserire l'anno: "; cin >> anno;

    if (anno<=0)
        cout << "Anno non valido\n";
    else
            if (anno%400 == 0 || (anno%4 == 0 && anno%100 != 0))
        cout << "E' bisestile: 29 giorni\n";
    else
        cout << "non e' bisestile: 28 giorni\n";
}

/*
 * Sul pianeta UFO l'hanno ha 18 mesi e tutti i mesi 45 giorni.
 * Fatti inserire tre numeri interi che corrispondono ad una data
 * (giorno mese e anno) fate stampare la data aumentata di un giorno.
 */
void pianeta_ufo() {
    int g=0, m=0, a=0;
    cout << "Inserire giorno, mese e anno separati da spazio: ";
    cin >> g >> m >> a;

    if(g<1 || g>45 || m<1 || m>18 || a<0)
        cout << "Data impossibile!\n";
    else {
        g++;
        if(g>45) {
            m++; g=1;
        }
        if(m>18){
            a++; m=1;
        }
        cout << "domani sara' il " << g << "-" <<m << "-" << a << endl;
    }
}

/*
 * Determinare il massimo tra tre numeri A, B e C
 */
int main() {
    
    return 0;
}
