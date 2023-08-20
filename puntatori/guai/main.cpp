#include <iostream>

using namespace std;

int main() {
    char *p;

    while(true)
    {
        try {
            p = new char[50000000000];
        }catch(bad_alloc){
            cout << "Non posso allocare altra memoria ... \n";
            cout << "bla bla bla ... \n";
            return -1;
        }
        cout << "Premi invio per continuare...\n";
        string s;
        getline(cin, s);
    }
    return 0;
}
