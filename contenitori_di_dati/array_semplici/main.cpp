#include <iostream>

using namespace std;

void for_alternative() {
    string inputTot="";
    for(string s; cin>>s;) //ctrl+D o ctrl+Z tieni conto che non leggerà più nulla dopo perchè nel buffer rimane EOF
        inputTot+=s;
    cout << "Stringa: " << inputTot << endl;
}


int main() {

    const int MAX_HOBBY = 6;
    string hobby[MAX_HOBBY] = {};

    int i = 0;
    bool again = true;
    while(i < MAX_HOBBY) {
        cout << "Inserisci un hobby("
             << (i+1) << "/" << MAX_HOBBY
             << " - F per uscire): ";

        string buff{};
        getline(cin, buff);
        if(buff == "F")
            break;
        hobby[i] = buff;
        i++;
    }

    cout << "-----------------------------------------" << endl;

    for(int posizione = 0; posizione<i; posizione++) {
        cout << posizione << ": "
             << hobby[posizione] << endl;
    }

    return 0;
}
