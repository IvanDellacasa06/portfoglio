#include <iostream>
#include <cmath>
using namespace std;

struct equazione
{
    float a=0.0f;
    float b=0.0f;
    float c=0.0f;
};

struct soluzione
{
    float x1=0.0f;
    float x2=0.0f;
};

int risolvi (equazione e, soluzione& s)
{
    float delta=0.0f;
    if (e.a == 0 & e.b==0)
    {
        if(e.c == 0)
        {
            std::cout << "l'equazione ha infinite soluzioni" << endl;
        }
        else
        {
            std::cout << "l'equazione non ha soluzioni" << endl;
            return 0;
        }
    }
    else
    {
        if(e.a == 0 && e.b !=0)
        {
            s.x1= - e.b/e.c;
            std::cout << "l'equazione di secondo grado e' in realta di primo" << endl;
            std::cout << "ha risultato" << s.x1 << endl;
        }
        else
        {
            delta= pow(e.b,2)- 4*e.a*e.c;
            cout << delta<<endl;
            if(delta < 0)
            {
                std::cout << "l'equazione di secondo grado non ha soluzioni reali" << endl;
                return 0;
            }
            else
            {
                if(delta==0)
                {
                    std::cout << "l'equazione di secondo grado ha una soluzione" << endl;
                    s.x1 = -e.b/(2*e.a);
                    std::cout << "il risultato e' " << s.x1 << endl;
                }
                else
                {
                    delta=sqrt(delta);
                    std::cout << "l'equazione di secondo grado ha due soluzione" << endl;
                    s.x1 = (-e.b+delta)/(2*e.a);
                    s.x2 = (-e.b-delta)/(2*e.a);
                    std::cout << "il primo risultato e' " << s.x1 << " il secondo e' " << s.x2 << endl;
                }
            }
        }
    }
    return 1;
}
int main() //qui inizia il programma
{
    struct soluzione s;
    struct equazione e;
    int ritorno;
    std::cout << "inserisci i coefficenti di un equazione di secondo grado" << endl;
    std::cout << "inserisci a" << endl;
    std::cin >> e.a;
    std::cout << "inserisci b" << endl;
    std::cin >> e.b;
    std::cout << "inserisci c" << endl;
    std::cin >> e.c;
    
    ritorno=risolvi(e, s);

    if(ritorno==0)
    {
        cout << "no soluzioni";
    }
    else
    {
        cout << s.x1 << " " <<s.x2;
    }
    return 0;
}