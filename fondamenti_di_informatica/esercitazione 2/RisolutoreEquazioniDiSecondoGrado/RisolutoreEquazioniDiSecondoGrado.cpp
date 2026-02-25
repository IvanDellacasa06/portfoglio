#include <iostream>
#include <cmath>
using namespace std;

int main() //qui inizia il programma
{
    float a = 0.0f;
    float b = 0.0f;
    float c = 0.0f;
    float x1 = 0.0f;
    float x2 = 0.0f;
    float delta = 0.0f;

    std::cout << "inserisci i coefficenti di un equazione di secondo grado" << endl;
    std::cout << "inserisci a" << endl;
    std::cin >> a;
    std::cout << "inserisci b" << endl;
    std::cin >> b;
    std::cout << "inserisci c" << endl;
    std::cin >> c;
    
    
    if (a == 0 & b==0)
    {
        if(c == 0)
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
        if(a == 0 && b !=0)
        {
            x1= - b/c;
            std::cout << "l'equazione di secondo grado e' in realta di primo" << endl;
            std::cout << "ha risultato" << x1 << endl;
        }
        else
        {
            delta= pow(b,2)- 4*a*c;
            if(delta < 0)
            {
                std::cout << "l'equazione di secondo grado non ha soluzioni reali" << endl;
            }
            else
            {
                if(delta==0)
                {
                    std::cout << "l'equazione di secondo grado ha una soluzione" << endl;
                    x1 = -b/2*a;
                    std::cout << "il risultato e' " << x1 << endl;
                }
                else
                {
                    std::cout << "l'equazione di secondo grado ha due soluzione" << endl;
                    x1 = -b+sqrt(delta)/2*a;
                    x2 = -b-sqrt(delta)/2*a;
                    std::cout << "il primo risultato e' " << x1 << " il secondo e' " << x2 << endl;
                }
            }
        }
    }

    return 0;
}