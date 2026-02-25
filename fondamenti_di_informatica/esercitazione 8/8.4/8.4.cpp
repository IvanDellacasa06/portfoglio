#include <iostream>
using namespace std;

int main()
{
    // Dichiarazioni
    double n1=0.0f; double n2=0.0f; double n3=0.0f;
    // Input dei tre numeri reali
    cout << "Inserisci tre numeri reali: ";
    cin >> n1 >> n2 >> n3;
    // Assegnamento dei puntatori alle variabili num1, num2, num3
    double *ptr1 = &n1;
    double *ptr2 = &n2;
    double *ptr3 = &n3;

    // Inizializzazione del puntatore p_max con ptr1
    double **p_max = &ptr1;
    
     // Trova il massimo tra i tre numeri utilizzando i puntatori
    if (*ptr2 > **p_max) {
        p_max = &ptr2;
    }
    if (*ptr3 > **p_max) {
        p_max = &ptr3;
    }

    // Stampa il massimo tra i tre numeri
    cout << "Il massimo tra i tre numeri è: " << **p_max << endl;

	return 0;
}