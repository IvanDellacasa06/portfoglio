#include <iostream>
using namespace std;

int main() //qui inizia il programma
{
    int numero1 = 0;
    int numero2 = 0;

    cout << "inserisci il primo numero " << endl;
    cin >> numero1;
    cout << "inserisci il secondo numero " << endl;
    cin >> numero2;
    if(numero1 == numero2)
    {
        cout << "0";
    }
    else
    {
        cout << "1";
    }
    
    return 0;
}