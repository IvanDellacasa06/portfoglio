#include <iostream>
#include <cmath>
using namespace std;

int main() //qui inizia il programma
{
    float numero=1.00f;
    char unita_misura;
    std::cout << "Inserisci il valore della unita di misura da converire in grammi, negativa se vuoi chiudere:"<< endl;
    std::cin >> numero;
    std::cout << "Inserisci l'unita di misura [m][g][h][k]:"<< endl;
    std::cin >> unita_misura;
    while(numero>=0)
    {
        
        switch(unita_misura)
        {
            case('m'):
                std::cout << "il peso in grammi e': " << numero/1000 <<endl;
            break;
            case('g'):
                std::cout << "il peso inserito e' gia' in grammi" <<endl;
            break;
            case('h'):
                std::cout << "il peso in grammi e': " << numero*100 <<endl;
            break;
            case('k'):
                std::cout << "il peso in grammi e': " << numero*1000 <<endl;
            break;
            default:
                std::cout << "errore reinserire"<<endl;
            break;
        }
        std::cout << "Inserisci il valore della unita di misura da converire in grammi, negativa se vuoi chiudere:"<< endl;
        std::cin >> numero;
        std::cout << "Inserisci l'unita di misura [m][g][h][k]:"<< endl;
        std::cin >> unita_misura;
    }
    
    return 0;
}