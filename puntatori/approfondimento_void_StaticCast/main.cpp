#include <algorithm>
#include <iostream>

using namespace std;


void stampa(void* v, int n_ele, char tipo='i') { //i=int, d=double
    for(int i=0; i<n_ele; ++i){
        switch (tipo) {
            case 'i':
                cout << ((int *)v )[i] << endl; //cast tradizionale
                break;
            case 'd':
                {
                    string s = to_string((static_cast<double *>(v))[i] );
                    replace(s.begin(), s.end(), '.', ',');
                    cout << s << endl;
                }
                break;
        }
    }
}

int main() {
    int *pInt = new int[5] {45, -89, 100, 3, 7};

    double *pDouble = new double[5] {3.14, 56.0, -5.6, 1.9, 1.1};

    stampa(pDouble, 5,'d');

    return 0;
}
