#include <iostream>
#include <cmath>
using namespace std;

float calcola_distanza (float x1, float x2, float y1, float y2)
{
    float distanza=0.0f;
    distanza=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    return distanza;
}

int main() //qui inizia il programma
{
    float x1=0.0f;
    float x2=0.0f;
    float y1=0.0f;
    float y2=0.0f;
    float distanza=0.0f;
    int scelta=1;
    while(scelta==1)
    {
        std::cout<<"inserisci la x del primo punto:"<<endl;
        std::cin>>x1;
        std::cout<<"inserisci la y del primo punto:"<<endl;
        std::cin>>y1;
        std::cout<<"inserisci la x del secondo punto:"<<endl;
        std::cin>>x2;
        std::cout<<"inserisci la y del secondo punto:"<<endl;
        std::cin>>y2;

        distanza=calcola_distanza(x1,y1,x2,y2);
        std::cout<< "Distanza:" << distanza<<endl;

        std::cout<<"vuoi inserire altri due punti: [1]si [2]no"<<endl;
        std::cin>>scelta;
    }
    return 0;
}