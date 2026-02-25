#include <iostream>
using namespace std;

int main() //qui inizia il programma
{
    int a = 0;
    int b = 0;
    cout << "Devi inserire due numeri interi" <<endl;
    cout << "Primo numero: ";
    cin >>a;
    cout << "secondo numero: ";
    cin >>b;

    int risultato= a+b;
    cout << risultato;
    return 0;
}