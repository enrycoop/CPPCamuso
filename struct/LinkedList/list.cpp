#include <iostream>

using namespace std;
const int MAX=1000;

struct t_riga_scontrino;


struct t_scontrino
{
    string data;
    int codice_punto_vendita;
    string codice_cassa;

    t_riga_scontrino *head; //indirizzo primo nodo lista righe scontrino
};

struct t_riga_scontrino
{
    int codice_prodotto;
    double qta;
    double prezzo;

   t_riga_scontrino *next; //indirizzo della riga successiva (o nullptr);
};

/*
Da notare che devo passare l'indirizzo del puntatore a head poiché se passassi solo
un puntatore a head quest'ultimo sarebbe per copia, invece devo copiare proprio il
valore del puntatore. Avremmo potuto farlo anche con i puntatori doppi ma un reference
ci dà più sicurezze.
*/
//LIFO
void ins_testa(t_riga_scontrino* &head, t_riga_scontrino* nuovo){
    nuovo->next = head;
    head = nuovo;
}

//FIFO
void ins_coda(t_riga_scontrino* &head, t_riga_scontrino* nuovo){
    t_riga_scontrino* cerca_fine_lista = head;

    if (head==nullptr) //lista vuota
        ins_testa(head, nuovo);
    else {
        //ricerca la fine della lista
        while(cerca_fine_lista->next != nullptr)
            cerca_fine_lista = cerca_fine_lista->next;

        cerca_fine_lista->next = nuovo;
        nuovo->next = nullptr;
    }
}

t_riga_scontrino* cerca(t_riga_scontrino* head, int codice){
    while(head!=nullptr){
        if(head->codice_prodotto==codice)
            return head;
        head = head->next;
    }
    return head;
}



bool cancella_riga(t_riga_scontrino* &head, t_riga_scontrino* da_cancellare){
    t_riga_scontrino *precedente=head;
    if(da_cancellare==nullptr || head==nullptr)
        return false;
    if(da_cancellare==head) {
        delete da_cancellare;
        head = nullptr;
        return true;
    }

    while(precedente != nullptr){
        if(precedente->next == da_cancellare)
            break;
    }
    if(precedente==nullptr)
        return false;
    precedente->next = da_cancellare->next;
    delete da_cancellare;
    return true;
}

void stampa_riga(t_riga_scontrino* p){
    cout << "-------" << endl;
    cout << "Prodotto: " << p->codice_prodotto << endl;
    cout << "Quantita': " << p->qta << endl;
    cout << "Prezzo: " << p->prezzo << endl;
    cout << "-------" << endl;

}

void stampa_righe_scontrino(t_riga_scontrino* head){
    //potevo usare anche head tanto non anvrebbe modificato il vero valore
    //di head ma la copia passata alla funzione
    t_riga_scontrino* p = head;
    while(p!=nullptr){
        stampa_riga(p);
        p = p->next;
    }

}

int main()
{
    t_scontrino *scontrino = new t_scontrino{"23-08-2023", 123, "CassaL1", nullptr};


    for(int i=0; i<10; i++){
        t_riga_scontrino* nuovo = new t_riga_scontrino{i, 10*i, 100.0*i};
        ins_coda(scontrino->head, nuovo);
    }
    cancella_riga(scontrino->head, cerca(scontrino->head, 2));

    stampa_righe_scontrino(scontrino->head);

/*
    //test cerca
    stampa_riga(cerca(scontrino->head, 0));
    stampa_riga(cerca(scontrino->head, 5));
    stampa_riga(cerca(scontrino->head, 9));
    if(cerca(scontrino->head, 999)==nullptr)
        cout << "Non trovato il valore" << endl;
*/
    return 0;
}
