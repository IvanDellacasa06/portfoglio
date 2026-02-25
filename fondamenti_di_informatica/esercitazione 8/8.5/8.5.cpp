#include <iostream>
using namespace std;

int main()
{
    // Dichiarazioni
    char a; char b; char c;
    // Input dei tre lettere minuscole
    cout << "Inserisci tre lettere minuscole: ";
    cin >> a >> b >> c;
    // Assegnamento dei puntatori alle variabili num1, num2, num3
    char *pa = &a;
    char *pb = &b;
    char *pc = &c;

    // Inizializzazione del puntatore p_max con ptr1
    char *p_mezzo;
    
     // Trova il massimo tra i tre numeri utilizzando i puntatori
    if ((*pa >= *pb && *pa <= *pc)||(*pa >= *pc && *pa <= *pb)) {
        p_mezzo=pa;
    }
    else if ((*pb >= *pa && *pb <= *pc)||(*pb >= *pc && *pc <= *pa)) {
            p_mezzo=pb;
        }
        else{
            p_mezzo=pc;
        }

    // Stampa il massimo tra i tre numeri
    cout << "la lettera di mezzo è: " << *p_mezzo << endl;

	return 0;
}