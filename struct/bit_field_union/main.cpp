#include <iostream>

using namespace std;

struct t_stato_pannello
{
    unsigned short int codice_pannello; //max 16 pannelli codificati da 0 a 15
                                                                    // 0000 1111

    unsigned short int valore_sonda[7];

};

struct t_stato_pannello_bitfield
{
    unsigned short int codice_interruttore: 4; //indichiamo di usare 4 bit

    unsigned short int valore_sonda1: 4; //non si possono creare array di bitfield
    unsigned short int valore_sonda2: 4;
    unsigned short int valore_sonda3: 4;
    unsigned short int valore_sonda4: 4;
    unsigned short int valore_sonda5: 4;
    unsigned short int valore_sonda6: 4;
    unsigned short int valore_sonda7: 4;
};

int main()
{
    cout << sizeof(t_stato_pannello) << endl;
    cout << sizeof(t_stato_pannello_bitfield) << endl;

    t_stato_pannello_bitfield p1 {15,1,2,3,4,5,6,7};
    cout << "Codice pannello: " << p1.codice_interruttore << endl;
    cout << "Valore sonda 6: " << p1.valore_sonda6 << endl;
    return 0;
}
