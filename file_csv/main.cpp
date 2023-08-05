#include <iostream>
#include <fstream>
#include <string>

void file_reading() {
    std::ifstream file("file.txt");

    if (file) // se file è in uno stato valido
    {
        // utilizzo del file
        std::string riga="";
        //while( std::getline(file, riga) )
        while ( file >> riga) //uso comune dello stream
            std::cout << riga << std::endl;

        //chiusura
        file.close();
        file.clear(); // reset di file poichè se c'è quialche problema
        // vengono settati dei bit in file che ci impedirebbero di usare file
    } else
        std::cout << "Problemi di apertura!\n";
}

void esempio_find() {
    using namespace std;
    string s = "Carusocerca; qui CCamuso; Carusocerca; qui Camuso!";
    string prof = "Camuso";
    size_t posizione = s.find(prof, 20);
    if (posizione != string::npos)
        cout << "Trovato alla posizione: " << posizione << endl;
    else
        cout << "Non trovato " << endl;
}

int main() {

    std::ifstream f("orario.csv");
    int totOreInsegnamento=0;
    std::string nomeProf = "BALACCO";

    if(f) {

        std::string riga="";
        while( std::getline(f, riga) ) {
            int cerca_da_pos=0;
            while ( (cerca_da_pos = riga.find(nomeProf, cerca_da_pos)) != std::string::npos) {
                totOreInsegnamento++;
                cerca_da_pos++;
                //cerca_da_pos = riga.find(nomeProf, cerca_da_pos) + 1;
            }
        }

        f.close(); f.clear();
        std::cout << "Il prof. " << nomeProf << " insegna " << totOreInsegnamento << " ore a settimana\n";

    } else
        std::cout << "Errore lettura" << std::endl;

    return 0;
}
