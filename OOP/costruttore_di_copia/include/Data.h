#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#include <string>
#include <ctime>

class Data
{
public:
    Data();
    Data(int gg); //anno e mese quelli correnti
    Data(int gg, int mm); // anno quello corrente
    Data(int gg, int mm, int aa);
    Data(std::string d); //"24-09-2016"


    std::string formato_breve();
    bool valida(int gg, int mm, int aa);

    int getMese() {return mese;}
    void setMese(int mm) {mese = mm;}


    static tm* data_corrente();


private:
    int giorno=1, mese=1, anno=1970;
    static tm* oggi;
};

#endif // DATA_H_INCLUDED
