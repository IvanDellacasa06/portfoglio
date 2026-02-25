#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char elemento;
    fstream in;
    in.open("lavori.txt", ios::in);
    double somma=0.0f;
    double chilometri[10];
    double somma_chilometri=0.0f;
    int numero_strada;
    double km1;
    double km2;
    double euro;
    for(int i=0;i<10;i++)
    {
        in >> numero_strada >> km1 >> km2 >> euro;
        chilometri [i]= km2-km1;
        somma_chilometri=somma_chilometri+chilometri[i];
        somma=somma+euro;
    }
    cout << "costo medio per chilometro: " << somma/somma_chilometri <<endl;
    in.close();

    return 0;
}