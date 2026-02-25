#include <iostream>
#include <cmath>
using namespace std;

int cerca_massimo (int numeri[3])
{
    int max=numeri[0];
    for(int i=1;i<3;i++)
    {
        if(numeri[i]>=numeri[i-1])
        {
            max=numeri[i];
        }
    }
    return max;
}
int cerca_minimo (int numeri[3])
{
    int min=numeri[0];
    for(int i=1;i<3;i++)
    {
        if(numeri[i]<=numeri[i-1])
        {
            min=numeri[i];
        }
    }
    return min;
}
int differenza(int numeri[3])
{
    int max=0;
    int min=0;
    max=cerca_massimo(numeri);
    min=cerca_minimo(numeri);
    std::cout<<"la differenza e'"<<max-min<<endl;
    return 0;
}

int main() //qui inizia il programma
{
    int numeri[3];

    std::cout<<"inserisci il primo:"<<endl;
    std::cin>>numeri[0];
    std::cout<<"inserisci il secondo:"<<endl;
    std::cin>>numeri[1];
    std::cout<<"inserisci il terzo numero:"<<endl;
    std::cin>>numeri[2];
    differenza(numeri);
    return 0;

}