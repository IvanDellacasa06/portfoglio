#include <iostream>
#include <cctype>
using namespace std;

int main() // qui inizia il programma
{
    char password[4];
    bool min = false;     // Inizializza a false
    bool maiusc = false;  // Inizializza a false
    bool cifra = false;   // Inizializza a false
    int i = 0;

    cout << "La password deve avere le seguenti regole:" << endl;
    cout << "Almeno una lettera minuscola" << endl;
    cout << "Almeno una lettera maiuscola" << endl;
    cout << "Almeno una cifra" << endl;

    for (i = 0; i < 4; i++)
    {
        cout << "Inserisci il " << i + 1 << " carattere: ";
        cin >> password[i];
    }

    for (i = 0; i < 4; i++)
    {
        if (islower(password[i]))
        {
            min = true;
        }
        if (isupper(password[i]))
        {
            maiusc = true;
        }
        if (isdigit(password[i]))
        {
            cifra = true;
        }
    }

    if (cifra && min && maiusc)
    {
        cout << "La password è ok" << endl;
    }
    else
    {
        if (!cifra)
        {
            cout << "Manca una cifra" << endl;
        }
        if (!min)
        {
            cout << "Manca una minuscola" << endl;
        }
        if (!maiusc)
        {
            cout << "Manca una maiuscola" << endl;
        }
    }
    return 0;
}