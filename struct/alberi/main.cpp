/*
        ALBERI BINARI

               1 <- nodo radice (root)
              / \
sott. sx     2   3  <- nodo figlio (child)
     \     /  \
     |    4|°  5   °  <- sottoalbero di DX
     |   / |° / \  °
     |  6  |°7   8 °
Nodi fratelli sono quelli figli di uno stesso padre(sibling).
Considerando un nodo qualsiasi, tutti i nodi sotto di lui sono
sotto-alberi. Un albero è definito da nodi che hanno sotto-alberi.
Quindi con una definizione tramite ricorsione.

Balanced tree: considerato un nodo qualsiasi, la cardinalità dei
nodi che sono nel sottoalbero di destra differisce da sinistra
al massimo di 1.
- questo ci serve per questioni di performance, la ricerca è molto
più efficiente.
*/

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

struct t_nodo
{
    int info;
    t_nodo *sx;
    double costo_sx;

    t_nodo *dx;
    double costo_dx;
};

t_nodo* crea_ablero_bilanciato(int quanti_nodi)
{
    //passo base della ricorsione
    if(quanti_nodi==0)
        return nullptr;
    else
    {
        //crea il nodo a questo livello
        t_nodo* nuovo = new t_nodo;
        nuovo->info = rand()%100;

        int quanti_a_sx = quanti_nodi/2;
        int quanti_a_dx = quanti_nodi - quanti_a_sx - 1;
        nuovo->sx = crea_ablero_bilanciato(quanti_a_sx);
        nuovo->dx = crea_ablero_bilanciato(quanti_a_dx);
        return nuovo;
    }
}

void stampa_albero_binario_pre_order(t_nodo* p, int deep)
{
    if(p!=nullptr)
    {
        for(int i=0; i<deep; i++)
            cout << " - ";

        cout << p->info << endl;
        stampa_albero_binario_pre_order(p->sx, deep+1);
        stampa_albero_binario_pre_order(p->dx, deep+1);
    }
}

void stampa_albero_binario_in_order(t_nodo* p, int deep)
{
    if(p!=nullptr)
    {
        stampa_albero_binario_pre_order(p->sx, deep+1);
        for(int i=0; i<deep; i++)
            cout << "--";
        cout << p->info << endl;
        stampa_albero_binario_pre_order(p->dx, deep+1);
    }
}


void stampa_albero_binario_post_order(t_nodo* p, int deep)
{
    if(p!=nullptr)
    {
        stampa_albero_binario_pre_order(p->sx, deep+1);
        stampa_albero_binario_pre_order(p->dx, deep+1);
        for(int i=0; i<deep; i++)
            cout << "--";
        cout << p->info << endl;
    }
}


int main()
{
    t_nodo* albero = crea_ablero_bilanciato(10);
    stampa_albero_binario_pre_order(albero,0);
    //cout << fattoriale(6) << endl;
    return 0;
}


























