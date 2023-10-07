#include <iostream>
#include <memory>

using namespace std;

struct alunno
{
    string nome;
    int eta;
};

int main()
{
    unique_ptr<int> sp{ new int };
    *sp=12;
    cout << *sp << endl;

    //cout << sp; errore: sp non e' un puntatore
    //e << non 'riconosce' cosa sia sp

    cout << sp.get() << endl; //puntatore interno
    cout << *(sp.get()) << endl; //12

    //delete sp.get() NO! ok si può tecnicamente fare
    //ma non dite di averlo fatto senza accorgervene!

    sp.reset();  //ok, modalita' 'gestita'
                 //delete comandato internamente
                 //e valorizzato a nullptr!
    if (sp==nullptr) //ridefinito ==
        cout << "puntatore non utilizzabile" << endl;

    sp.reset(new int{18});
    cout << *sp << endl;

    sp.reset(new int{24});
    cout << *sp << endl;

    unique_ptr<int[]> sp_vett{new int[3]{5,10,15}};
    cout << sp_vett[1] << endl;

    //cout << *(sp_vett+2) << endl;
    cout << *(sp_vett.get()+2) << endl;

    unique_ptr<alunno> un_alunno{new alunno{"mario", 15}};
    cout << un_alunno->nome << endl;
    return 0;
}
