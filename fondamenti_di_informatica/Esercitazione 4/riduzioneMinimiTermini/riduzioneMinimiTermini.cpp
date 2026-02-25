#include <iostream>
using namespace std;

// Funzione per calcolare il massimo comune divisore (MCD)
int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Funzione per ridurre la frazione
void riduciFrazione(int &numeratore, int &denominatore) {
    // Calcola il MCD
    int mcdVal = mcd(numeratore, denominatore);

    // Riduci il numeratore e il denominatore
    numeratore /= mcdVal;
    denominatore /= mcdVal;
}

int main() {
    int numeratore, denominatore;
    char continua;

    do {
        cout << "Inserisci il numeratore (positivo): ";
        cin >> numeratore;
        cout << "Inserisci il denominatore (positivo): ";
        cin >> denominatore;

        // Verifica validità dei valori
        if (numeratore <= 0 || denominatore <= 0) {
            cout << "Errore: sia il numeratore che il denominatore devono essere numeri interi positivi." << endl;
            continue; // Ripeti il ciclo se i valori non sono validi
        }

        // Riduci la frazione
        riduciFrazione(numeratore, denominatore);

        // Stampa la frazione ridotta
        cout << "Frazione ridotta: " << numeratore << "/" << denominatore << endl;

        cout << "Vuoi inserire un'altra frazione? (s/n): ";
        cin >> continua;

    } while (continua == 's' || continua == 'S');

    return 0;
}