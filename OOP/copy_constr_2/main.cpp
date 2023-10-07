#include <iostream>
#include <memory>

using namespace std;

class Contenitore
{
public:
    Contenitore(string _id, int valore) : id{_id}
    {
        cout << "Costruzione di " << id << endl;
        //p=new int[10]; //allocazione della ram
        for(int i=0; i<QUANTI; ++i)
            p.get()[i] = valore;
    }

    /*
    Il distruttore può essere soltanto uno per ogni classe.
    Non può ricevere parametri.
    Verrà richiamato in automatico alla distruzione di un oggetto.
    */
    ~Contenitore()
    {
        cout << "Distruzione di " << id << endl;
        //delete[] p;
    }


    // COPY CONSTRUCTOR esplicito
    Contenitore(const Contenitore& c) : id{c.id}, p{new int[QUANTI]}
    {
        // DEEP COPY
        //p=new int[10];
        for(int i=0; i<QUANTI; ++i)
            p.get()[i] = c.p.get()[i];
    }

    // COPY ASSIGMENT OPERATOR esplicito
    Contenitore& operator=(const Contenitore& c)
    {
        id=c.id;

        // DEEP COPY
        //p=new int[10]; memoria già allocata da c
        for(int i=0; i<QUANTI; ++i)
            p.get()[i] = c.p.get()[i];

        return *this;
    }

    void set_id(string s) {id=s;}

    void set_valore(int indice, int valore){
        p.get()[indice] = valore;
    }

    void stampa()
    {
        cout << id << ":";
        for(int i=0; i<QUANTI; ++i)
            cout << p.get()[i] << " ";

        cout << endl;
    }

private:
    const int QUANTI=500000000;
    string id{""};
    // int *p {nullptr}; RAW POINTER -> PERICOLO!

    unique_ptr<int> p{new int[QUANTI]};
};

void f1()
{
    Contenitore f_c1{"f_c1", 5};
    //...
    if(true)
    {
        Contenitore f_c2{"f_c2", 10};
    }// fc2 verrà richiamato il suo distruttore

    //altre istruzioni...


}

void pause(string msg="")
{
    string s;
    cout << msg << endl;
    cout << "premere invio per proseguire...";
    getline(cin, s);
}

class p_Contenitore
{
public:
    p_Contenitore(string s, int n) : p{new Contenitore(s,n)} {}

    ~p_Contenitore() {delete p;}

    Contenitore* get_p() {return p;}
private:
    Contenitore* p=nullptr;
};

void f2()
{
    // smart pointers
    Contenitore c1_di_f2{"c1 nella funzione f2",5};
    Contenitore *p1_di_f2 = new Contenitore("p1_con_new_no_smart", 50);
    unique_ptr<Contenitore> p2( new Contenitore("p2_di_f2_SMART",50));


    pause("Copy constructor...");
    Contenitore c_copy_constructor{c1_di_f2};

    pause("assignment operatore...");
    Contenitore c_con_assignment{"",7};
    c_con_assignment = c1_di_f2;
    pause();

}
int main()
{
    pause();
    f2();
    pause();

//    Contenitore main_c1{"main_c1", 10};
//    Contenitore *p = new Contenitore{"main_con_new", 50};

//    p_Contenitore smart_p("main_con_new_SMART",50);
//    smart_p.get_p()->stampa();
//
//    delete smart_p.get_p();
    // SMART POINTERS


//    f1();
//    Contenitore main_c2{"main_c2", 20};
//    cout << "Altre elaborazioni... " << endl;
    //stack unwind l'ultimo oggetto creato sarà il primo ad essere distrutto.

/*
    Contenitore c1 {"Primo contenitore", 8};
    c1.stampa();

    Contenitore c2 {c1};
    c2.set_id("secondo contenitore");
    c2.stampa();
*/
/*for(int i=0; i<10; ++i)
        c2.set_valore(i, 9);
*/
/*
    Contenitore c3{"", 7};
    c3 = c2;
    cout << "c3: ";
    c3.stampa();

    c2.set_valore(0,1);
    c2.set_valore(1,1);

    cout << "c3: ";
    c3.stampa();

    c3 = c2 = c1; //chaining = concatenazione
    cout << "c2: ";
    c2.stampa();
*/
    return 0;
}
