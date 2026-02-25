#include <iostream>
#include <cstring>
using namespace std;
void inverti(char stringa[])
{
    int size=strlen(stringa)-1;
    int ciclo=size/2;
    char tmp;
    for(int i=0;i<ciclo;i++)
    {
        tmp=stringa[size-i];
        stringa[size-i]=stringa[i];  
        stringa[i]=tmp;
    }
   
}

int main() //qui inizia il programma
{
    char stringa[50];
    cout<< "inserisci la stringa: " <<endl;
    cin>>stringa;
    inverti(stringa);
    cout << stringa;

    return 0;
}