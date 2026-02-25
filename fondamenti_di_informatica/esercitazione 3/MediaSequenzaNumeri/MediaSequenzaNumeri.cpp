#include <iostream>
#include <cmath>
using namespace std;

int main() //qui inizia il programma
{
    float numero=1.00f;
    float media=0.00f;
    int divisore=0;
    std::cout << "quanti numeri vuoi inserire:" <<endl;
    std::cin >>divisore;
    for(int i=0;i<divisore;i++)
    { 
        std::cout << "Inserisci un numero"<<endl;
        std::cin  >> numero;
        media=media+numero;
    }
    media=media/divisore;
    cout << "la media e': " << media << endl;
    
    return 0;
}