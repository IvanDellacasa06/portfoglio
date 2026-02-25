#include <iostream>
#include <cmath>
using namespace std;


int inverticifre(int numero)
{
    int numero_invertito=0;
    int i;
    while(numero!=0)
    {
        int cifra=numero%10;
        numero_invertito=numero_invertito*10+cifra;
        numero/=10;
    }
    return numero_invertito;
}

int main() //qui inizia il programma
{
    int numero=0;
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
        numero=inverticifre(numero);
        std::cout<< "ecco il numero con le cifre invertite:" << numero<<endl;

        std::cout<<"vuoi inserire altri due punti: [1]si [2]no"<<endl;
        std::cin>>scelta;
    }
    return 0;

}
