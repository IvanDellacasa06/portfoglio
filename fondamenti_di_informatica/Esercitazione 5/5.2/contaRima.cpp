#include <iostream>
#include <cstring>
using namespace std;
int conta_rima(char stringa1[30], char stringa2[30])
{
    int numero_rima=0;
    int size1=strlen(stringa1)-1;
    int size2=strlen(stringa2)-1;
    int size;
    if(size1<size2)
    {
        size=size1;
    }
    else
    {
        size=size2;
    }
    for(int i=0; i<=size;i++)
    {
        if(stringa1[size1-i]==stringa2[size2-i])
        {
            numero_rima++;
        }
        else
        {
            break;
        }
    }
    return numero_rima;
}

int main() //qui inizia il programma
{
    char stringa1[30];
    char stringa2[30];
    cout << "inserisci la prima stringa: " <<endl;
    cin >> stringa1;
    cout << "inserisci la seconda stringa: " <<endl;
    cin >> stringa2;
    int numero_rima=conta_rima(stringa1, stringa2);
    cout << "il numero di rima e':" << numero_rima;
    return 0;
}