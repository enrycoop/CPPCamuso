#include <iostream>
#define DIM 100

using namespace std;

int main() {

    char* pChar = new char[DIM];
    int* pInt = new int[DIM];
    double* pDouble = new double[DIM];
    long double* pLDouble = new long double[DIM];
    std::string* pString = new std::string[DIM];

    //pString[0] = string(10000, 'a');
    //cout << pString[0] << endl;

    cout << DIM*sizeof(char) << endl;
    cout << DIM*sizeof(int) << endl;
    cout << DIM*sizeof(double) << endl;
    cout << DIM*sizeof(long double) << endl;
    cout << DIM*sizeof(string) << endl;
    cout << "----------------------------------" << endl;
    cout << DIM*sizeof(char*) << endl;
    cout << DIM*sizeof(int*) << endl;
    cout << DIM*sizeof(double*) << endl;
    cout << DIM*sizeof(long double*) << endl;
    cout << DIM*sizeof(string*) << endl;



    return 0;
}
