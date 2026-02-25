#include <iostream>
#include <cstring>
using namespace std;
int capolista(int M[3][3], int k)
{
    int vincitrice;
    int maggiore=0;
    if(k>3)
    {
        return -1;
    }
    for(int i=0;i<3;i++)
    {
        if(M[i][k]>maggiore)
        {
            vincitrice=i;
            maggiore=M[i][k];
        }
    }
   return vincitrice;
}

int main() //qui inizia il programma
{
    int M[3][3];
    int k;
    cout<< "inserisci la giornata da analizzare: "<<endl;
    cin >>k;
    for(int i=0; i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>M[i][j];
        }    
    }
    int vincitrice=capolista(M,k);
    if(vincitrice==-1)
    {
        cout<<"ERRORE";
    }
    else
    {
        cout<<"la vincitrice e': " << vincitrice;
    }
    return 0;
}