#include <iostream>

using namespace std;

void scambia(int &a, int &b) {
    cout << "Ricevuti: " << a << " " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "dopo: " << a << " " << b << endl;
}

int main() {
    int x = 100;
    int y = 200;
    scambia(x, y);
    cout << "al ritorno: " << x << " " << y << endl;
    return 0;
}
