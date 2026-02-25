#include <iostream>
#include <cmath>
using namespace std;

int main() //qui inizia il programma
{
    bool fine_ciclo=false;
    int scelta=0;
    while(fine_ciclo==false)
    {
        std::cout << "Inserisci un numero intero positivo"<<endl;
        int x;
        std::cin  >> x;
        while(x<0){
            std::cout << "Errore, il numero inserito non e' positivo, reinserire un numero:"<<endl;
            std::cin  >> x;
        }

        int ar[50];
        int c = 1;
        int k=0;

        for(int i=2; i<= x; i++){
            while(x%i == 0){
                ar[k] = i;
                k++;
                x = x/i;
            }
        }
        
        std::cout<<"1 ";
        for(int i = 0; i < k; i++){
            cout << ar[i]<<" ";
        }
        std::cout<<"vuoi inserire un altro numero? [1] si [2] no"<<endl;
        std::cin>>scelta;
        if(scelta==2)
        {
            fine_ciclo=true;
        }

    }
    std::cout<<"Fine"<<endl;
    return 0;
}