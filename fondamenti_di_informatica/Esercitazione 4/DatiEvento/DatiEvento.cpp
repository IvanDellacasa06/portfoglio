#include <iostream>
#include "stampa.cpp"
using namespace std;


int main() //qui inizia il programma
{
    int giorno=0;
    int mese=0;
    int anno=0;
    int secondi=0;
    int minuti=0;
    int ora;
    stampa_pattern(2,30,'*');
    std::cout <<endl<< "Impostazione di un evento"<<endl<<endl;
    stampa_pattern(2,30,'*');
    std::cout<<endl<< "inserisci la data" <<endl;
    std::cout<< "giorno: ";
    std::cin>>giorno;
    std::cout<< "mese: ";
    std::cin>>mese;
    std::cout<< "anno: ";
    std::cin>>anno;
    std::cout<<endl<< "inserisci l'ora" <<endl;
    std::cout<< "ora: ";
    std::cin>>ora;
    std::cout<< "minuti: ";
    std::cin>>minuti;
    std::cout<< "secondi: ";
    std::cin>>secondi;
    std:cout <<endl;
    stampa_pattern(2,30,'*');
    std::cout<<endl<<"Evento inserito"<<endl;
    
    stampa_data(giorno,mese,anno);
    stampa_ora(ora,minuti,secondi);
    std::cout<<endl;
    stampa_pattern(2,30,'*');
    return 0;
}