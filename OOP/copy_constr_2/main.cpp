#include <iostream>

using namespace std;

class Contenitore
{
public:
    Contenitore(string _id, int valore) : id{_id}
    {
        p=new int[10];
        for(int i=0; i<10; ++i)
            p[i] = valore;
    }

    // COPY CONSTRUCTOR esplicito
    Contenitore(const Contenitore& c) : id{c.id}
    {
        // DEEP COPY
        p=new int[10];
        for(int i=0; i<10; ++i)
            p[i] = c.p[i];
    }

    // COPY ASSIGFMENT esplicito
    Contenitore& operator=(const Contenitore& c)
    {
        id=c.id;

        // DEEP COPY
        p=new int[10];
        for(int i=0; i<10; ++i)
            p[i] = c.p[i];

        return *this;
    }

    void set_id(string s) {id=s;}

    void set_valore(int indice, int valore){
        p[indice] = valore;
    }

    void stampa()
    {
        cout << id << ":";
        for(int i=0; i<10; ++i)
            cout << p[i] << " ";

        cout << endl;
    }

private:
    string id{""};
    int *p {nullptr};
};

int main()
{
    Contenitore c1 {"Primo contenitore", 8};
    c1.stampa();

    Contenitore c2 {c1};
    c2.set_id("secondo contenitore");
    c2.stampa();

    /*for(int i=0; i<10; ++i)
        c2.set_valore(i, 9);*/
    Contenitore c3{"", 7};
    c3 = c2;
    cout << "c3: ";
    c3.stampa();

    c2.set_valore(0,1);
    c2.set_valore(1,1);

    cout << "c3: ";
    c3.stampa();

    return 0;
}
