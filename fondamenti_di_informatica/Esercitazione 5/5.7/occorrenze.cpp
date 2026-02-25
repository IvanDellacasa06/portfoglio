#include <iostream>

int contaOccorrenze(int a[], int n, int b[10]) {
    // Inizializza l'array b a 0
    for (int i = 0; i < 10; i++) {
        b[i] = 0;
    }

    // Conta le occorrenze
    for (int i = 0; i < n; i++) {
        if (a[i] < 0 || a[i] > 9) {
            return -1; // Restituisce -1 se un elemento non è nell'intervallo [0, 9]
        }
        b[a[i]]++; // Incrementa il contatore per il valore a[i]
    }

    return 0; // Restituisce 0 se tutto va bene
}


int main() {
    int a[] = {1, 2, 2, 3, 4, 5, 0, 9, 9, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int b[10];

    int result = contaOccorrenze(a, n, b);

    if (result == -1) {
        std::cout << "Errore: un elemento non appartiene all'intervallo [0, 9]." << std::endl;
    } else {
        std::cout << "Occorrenze:" << std::endl;
        for (int i = 0; i < 10; i++) {
            std::cout << "Numero " << i << ": " << b[i] << " occorrenze." << std::endl;
        }
    }
    return 0;
}