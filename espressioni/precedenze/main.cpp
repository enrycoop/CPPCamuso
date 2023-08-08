#include <iostream>
// documentazione https://en.cppreference.com/w/cpp/language/operator_precedence

using namespace std;

int main() {
    int a=5, b=6, c=7, d=0;
    d = a + b * c; // precedenza sul *
    cout << d << endl;

    d = a+(++b); // a++ + b
    cout << d <<endl;
    d = (a++)+(++b);
    cout << d <<endl;
    cout << a << " " << b << endl;


    bool test1 = false;
    if(test1!=a>b)  // priorità al >
        cout << "verificato\n";

    a = 10;
    d = a+=2*10;
    cout << d << endl;
    return 0;
}
