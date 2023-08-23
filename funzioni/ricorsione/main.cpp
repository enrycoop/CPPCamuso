#include <iostream>

using namespace std;

//potenza
int XallaY(int x, int y){
    if(y==0)
        return 1;
    else
        return x*XallaY(x, y-1);
}

//fattoriale
int fattoriale(int n) {
    if(n==0)
        return 1;
    else
        return n*fattoriale(n-1);
}

void hanoi(int n,
           char da_qui,
           char a_qui,
           char appoggio)
{
    if(n == 1)
        cout << da_qui << " - " << a_qui<< endl;
    else
    {
        hanoi(n-1, da_qui, appoggio, a_qui);
        cout << da_qui << " - " << a_qui << endl;
        hanoi(n-1, appoggio, a_qui, da_qui);
    }
}


int main()
{
    hanoi(4,'A','C','B');
    return 0;
}
