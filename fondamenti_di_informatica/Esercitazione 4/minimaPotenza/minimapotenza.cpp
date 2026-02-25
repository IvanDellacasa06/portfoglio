#include <iostream>
using namespace std;

// Funzione per calcolare la minima potenza di b maggiore di n
int minimaPotenza(int n, int b, int &e, int &m) {
    // Verifica condizioni di validità
    if (n <= 0 || b <= 1) {
        return -1; // Restituisce -1 se n o b non sono validi
    }

    e = 0; // Inizializza l'esponente
    m = 1; // Inizializza il valore della potenza

    // Calcola la potenza di b
    while (m <= n) {
        m *= b; // Calcola b^e
        e++;    // Incrementa l'esponente
    }

    return 0; // Restituisce 0 se tutto è andato bene
}

int main() {
    int n, b, e, m;

    cout << "Inserisci un numero intero positivo n: ";
    cin >> n;
    cout << "Inserisci un numero intero positivo b (b > 1): ";
    cin >> b;

    // Chiama la funzione per calcolare la minima potenza
    int risultato = minimaPotenza(n, b, e, m);

    // Verifica il risultato della funzione
    if (risultato == -1) {
        cout << "Errore: n deve essere positivo e b deve essere maggiore di 1." << endl;
    } else {
        cout << "La più piccola potenza di " << b << " maggiore di " << n << " è " << m 
             << " (b^" << e << ")." << endl;
    }
    return 0;
}
