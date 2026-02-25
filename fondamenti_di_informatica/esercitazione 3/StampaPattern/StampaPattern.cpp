#include <iostream>
#include <cmath>
using namespace std;

int main() //qui inizia il programma
{
    int j=0;
    std::cout << "Inserisci un numero intero positivo compreso tra 2 e 10"<<endl;
    int numero;
    std::cin  >> numero;
    while(numero<=2 || numero>=10)
    { 
        std::cout << "Errore, il numero inserito non e' compreso tra 2 e 10, reinserire un numero:"<<endl;
        std::cin  >> numero;
    }
    for(int i=1;i<=numero;i++)
    {
        for(j=0;j<i;j++)
        {
            std::cout << "*";
        }
        for(int k=j+1;k<=numero;k++)
        {
            std::cout << k;
        }
        std::cout <<endl;
    }
    return 0;
}