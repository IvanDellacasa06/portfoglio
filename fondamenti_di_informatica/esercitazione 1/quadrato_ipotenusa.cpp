#include <iostream>
#include <cmath>
using namespace std;

int main() //qui inizia il programma
{
    int cateto1 = 0;
    int cateto2 = 0;
    int quadrato_ipotenusa = 0;
    cout << "Inserici la lunghezza del primo cateto" <<endl;
    cin >> cateto1;
    cout << "Inserici la lunghezza del secondo cateto" <<endl;
    cin >> cateto2;

    quadrato_ipotenusa = pow(cateto1,2) + pow(cateto2,2);
    cout << "il quadrato dell'ipotenusa e' " << quadrato_ipotenusa <<endl;
    return 0;
}