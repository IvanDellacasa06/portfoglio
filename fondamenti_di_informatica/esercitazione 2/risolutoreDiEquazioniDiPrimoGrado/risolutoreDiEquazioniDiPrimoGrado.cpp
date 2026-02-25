#include <iostream>
#include <cmath>
using namespace std;

int main() //qui inizia il programma
{
    float a = 0.0f;
    float b = 0.0f;
    float risultato = 0.0f;

    std::cout << "inserisci i coefficenti di un equazione di primo grado" << endl;
    std::cout << "inserisci a" << endl;
    std::cin >> a;
    std::cout << "inserisci b" << endl;
    std::cin >> b;
    
    if (a == 0)
    {
        if(b == 0)
        {
            std::cout << "l'equazione ha infinite soluzioni" << endl;
        }
        else
        {
            std::cout << "l'equazione non ha soluzioni" << endl;
        }
    }
    else
    {
        risultato= - b / a;
        std::cout << "il risultato e' x = " << risultato <<endl;
    }

    return 0;
}