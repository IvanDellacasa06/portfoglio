#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main() //qui inizia il programma
{
    int A[3][3];
    int B[3][3];
    int C[3][3];
    cout<<"inserisci la prima matrice"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<"inserisci la seconda matrice"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>B[i][j];
        }
    }
    int somma=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {   
            for(int k=0;k<3;k++)
            {
               somma=somma+A[i][k]*B[k][j]; 
            }
            C[i][j]=somma;
            somma=0;
        }
    }

    for(int i=0;i<3;i++)
    {
        cout << "[";
        for(int j=0;j<3;j++)
        {
            cout<<C[i][j]<<",";
        }
        cout<< "]";
    }
    return 0;
}