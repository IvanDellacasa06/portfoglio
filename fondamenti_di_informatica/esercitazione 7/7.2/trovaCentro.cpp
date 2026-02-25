#include <iostream>
#include <cmath>
using namespace std;

struct circonferenza
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

int risolvi (circonferenza c, punto2d& centro)
{
    
    centro.x=-c.a/2;
    centro.y=-c.b/2;
    return 1;
}
int main() //qui inizia il programma
{
    int ancora=1;
    struct punto2d centro;
    struct circonferenza c;
    while(ancora==1)
    {
        std::cout << "inserisci i coefficenti di un equazione della circonferenza" << endl;
        std::cout << "inserisci a" << endl;
        std::cin >> c.a;
        std::cout << "inserisci b" << endl;
        std::cin >> c.b;
        std::cout << "inserisci c" << endl;
        std::cin >> c.c;
        
        risolvi(c, centro);
        
        cout << "il centro della circonferenza ha coordinate " << centro.x << "," << centro.y <<endl;
        cout <<"inserisci 1 se vuoi continuare e 2 per smettere" <<endl;
        cin >> ancora;
    }
    
    return 0;
}