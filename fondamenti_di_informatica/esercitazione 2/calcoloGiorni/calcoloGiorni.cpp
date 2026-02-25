#include <iostream>
#include <cctype>
using namespace std;

int main() // qui inizia il programma
{
    int mese;
    int anno;
    cout << "inserisci il mese (come intero)" <<endl;
    cin >> mese;
    cout << "inserisci l'anno" <<endl;
    cin >> anno;
    switch (mese) {
        case 1:
            cout << "Gennaio del" << anno << "ha 31 giorni" << endl;
            break;
        case 2:
            if(anno%4==0)
            {
                if(anno%100==0)
                {
                    if(anno%400==0)
                    {
                        cout << "Febbraio del " << anno << "ha 29 giorni" << endl;
                    }
                    else
                    {
                        cout << "Febbraio del " << anno << "ha 28 giorni" << endl;
                    }
                }
                else
                {
                    cout << "Febbraio del " << anno << "ha 29 giorni" << endl;
                }
            } 
            else
            {
                cout << "Febbraio del " << anno << "ha 28 giorni" << endl;
            }
            break;
        case 3:
            cout << "Marzo del" << anno << "ha 31 giorni" << endl;
            break;
        case 4:
            cout << "Aprile del" << anno << "ha 30 giorni" << endl;
            break;
        case 5:
            cout << "Maggio del" << anno << "ha 31 giorni" << endl;
            break;
        case 6:
            cout << "Giugno del" << anno << "ha 30 giorni" << endl;
            break;
        case 7:
            cout << "Luglio del" << anno << "ha 31 giorni" << endl;
            break;
        case 8:
            cout << "Agosto del" << anno << "ha 31 giorni" << endl;
            break;
        case 9:
            cout << "Settembre del" << anno << "ha 30 giorni" << endl;
            break;
        case 10:
            cout << "Ottobre del" << anno << "ha 31 giorni" << endl;
            break;
        case 11:
            cout << "Novembre del" << anno << "ha 30 giorni" << endl;
            break;
        case 12:
            cout << "Dicembre del" << anno << "ha 31 giorni" << endl;
            break;
        default:
            cout << "Mese non valido. Inserisci un numero tra 1 e 12." << endl;
            break;
        }
    return 0;
}