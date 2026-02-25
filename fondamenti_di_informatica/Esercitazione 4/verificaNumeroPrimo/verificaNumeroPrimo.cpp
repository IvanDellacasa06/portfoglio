#include <iostream>
#include <cmath>
using namespace std;


int verificaSePrimo(int numero)
{
    if(numero<=1)
    {
        return 0;
    }
    for(int i=2;i<sqrt(numero);i++)
    {
        if(numero%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main() //qui inizia il programma
{
    int numero=0;
    int risultato=0;
    int scelta=1;
    while(scelta==1)
    {
        std::cout<<"inserisci il numero:"<<endl;
        std::cin>>numero;
        while(numero<0)
        {
            std::cout<<"inserisci il numero:"<<endl;
            std::cin>>numero;
        }
        risultato=verificaSePrimo(numero);
        if(risultato==1)
        {
            std::cout<<"e' primo"<<endl;
        }
        else
        {
            std::cout<<"non e' primo"<<endl;
        }

        std::cout<<"vuoi inserire un altro numero: [1]si [2]no"<<endl;
        std::cin>>scelta;
    }
    return 0;

}
