#include <iostream>
using namespace std;
int stampa_data (int giorno, int mese, int anno)
{
    std::cout<< "Data:" << giorno <<"/"<<mese<<"/"<<anno<<endl;
    return 0;
}
int stampa_ora (int ora, int minuti, int secondi)
{
    std::cout<< "Ora:" << ora <<":"<<minuti<<":"<<secondi<<endl;
    return 0;
}

int stampa_pattern (int righe, int colonne, char simbolo)
{
    for (int i=0;i<righe;i++)
    {
        for(int j=0;j<colonne;j++)
        {
            std::cout<<simbolo;
        }
        std::cout<<endl;
    }
    return 0;
}