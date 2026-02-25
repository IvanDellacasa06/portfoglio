#include <iostream>
#include <cmath>
using namespace std;

struct retta
{
    float a=0.0f;
    float b=0.0f;
    float c=0.0f;
};

struct punto2d
{
    float x=0.0f;
    float y=0.0f;
};

float risolvi (retta r, punto2d punto)
{
    
    float distanza=abs(r.a*punto.x+r.b*punto.y+r.c)/sqrt(pow(r.a,2)+pow(r.b,2));
    return distanza;
}
int main() //qui inizia il programma
{
    int ancora=1;
    float distanza=0.0f;
    struct punto2d punto;
    struct retta r;
    while(ancora==1)
    {
        std::cout << "inserisci i coefficenti di un equazione della circonferenza" << endl;
        std::cout << "inserisci a" << endl;
        std::cin >> r.a;
        std::cout << "inserisci b" << endl;
        std::cin >> r.b;
        std::cout << "inserisci c" << endl;
        std::cin >> r.c;
        std::cout << "inserisci le coordinate del punto" << endl;
        std::cout << "inserisci x" << endl;
        std::cin >> punto.x;
        std::cout << "inserisci y" << endl;
        std::cin >> punto.y;

        distanza=risolvi(r, punto);
        
        cout << "la distanza e'"<<distanza<<endl;
        cout <<"inserisci 1 se vuoi continuare e 2 per smettere" <<endl;
        cin >> ancora;
    }
    
    return 0;
}