#include <iostream>
#include <cstring>
using namespace std;
int verifica_appartenenza(float array[], int n, float x, float y)
{
    int numero_assegnamenti=0;
    if(x>=y)
    {
        return -1;
    }
    for(int i=0; i<n;i++)
    {
        if(array[i]<x || array[i]>y )
        {
            array[i]=0;
            numero_assegnamenti++;
        }
    }
    return numero_assegnamenti;
}

int main() //qui inizia il programma
{
    int n;
    cout<< "inserisci i numeri da inserire: " <<endl;
    cin>>n;
    float array[50];
    float x;
    float y;
    cout << "inserisci x: " <<endl;
    cin >> x;
    cout << "inserisci y: " <<endl;
    cin >> y;
    for(int i=0;i<n;i++)
    {
        cout<<"inserisci il" << i+1 << "numero:"<<endl;
        cin>>array[i];
    }
    int numero_assegnamenti=verifica_appartenenza(array, n, x, y);
    if(numero_assegnamenti==-1)
    {
        cout<<"ERRORE";
    }
    else
    {
      cout<<"numero assegnamenti:" << numero_assegnamenti;  
    }
    return 0;
}