#include <iostream>
#include <stdexcept>
#include <memory>

using namespace std;

class solleva_eccezione
{
    public:
        solleva_eccezione() {throw std::exception();}
        ~solleva_eccezione() {cout << "distruttore di solleva eccezione\n";}
};

class bad
{
public:
    bad()
    {
        cout << "costruttore bad" << endl;
        system("pause");
        a = new int[1000000000];
        system("pause");

        b = new solleva_eccezione();
    }

    ~bad()
    {
        cout << "Distruttore bad\n";
        system("pause");

        delete a;
    }
private:
    int* a;
    solleva_eccezione* b;
};

int main()
{
    try{bad obj;}
    catch(std::exception)
    {
        cout << "Eccezione catturata\n";
        system("pause");
    }
    return 0;
}
