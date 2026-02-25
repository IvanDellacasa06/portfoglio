#include <iostream>
#include <cmath>
using namespace std;

int main() //qui inizia il programma
{
    int numero;
    int cifre=1;
    std::cout << "Inserisci il numero di cui calcolare le cifre:"<< endl;
    std::cin >> numero;
    while(numero>10)
    {
        numero=numero/10;
        cifre++;
    }
    
    std::cout << "il numero e' composto da: " << cifre << endl;
    
    return 0;
}