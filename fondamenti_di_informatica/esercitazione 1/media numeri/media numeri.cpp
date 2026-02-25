#include <iostream>
#include <cmath>
using namespace std;

int main() //qui inizia il programma
{
    int media = 0;
    int i = 0;
    for(i=0;i<5;i++)
    {
        int numero;
        cout << "dammi il "<< i+1 << " numero" <<endl;
        cin >> numero;
        media= media + numero;
    }
    media = media /5;
    cout << "la media e' " << media <<endl;
    return 0;
}