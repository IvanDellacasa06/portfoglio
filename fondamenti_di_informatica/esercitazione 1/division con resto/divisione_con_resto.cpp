#include <iostream>
#include <cmath>
using namespace std;

int main() //qui inizia il programma
{
    int divisore = 0;
    int quoziente = 0;

    cout << "inserisci il divisore" <<endl;
    cin >> divisore;
    cout << "inserisci il quoziente" <<endl;
    cin >> quoziente;
    cout << "il risultato e' " << quoziente/divisore <<endl;
    cout << "il resto e' " << quoziente%divisore <<endl;
    return 0;
}   