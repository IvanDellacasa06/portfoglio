#include <iostream>
using namespace std;

int main() //qui inizia il programma
{
    int numero = 0;

    cout << "inserisci un numero " << endl;

    cin >> numero;

    cout << "il successivo e' " << ++numero <<endl;
    numero--;
    cout << "il precedente e' " << --numero <<endl;
    
    return 0;
}