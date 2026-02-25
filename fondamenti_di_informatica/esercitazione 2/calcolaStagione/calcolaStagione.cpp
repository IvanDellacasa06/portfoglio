#include <iostream>
#include <cctype>
using namespace std;

int main() // qui inizia il programma
{
    int giorno;
    int mese;
    cout << "inserisci il giorno" <<endl;
    cin >> giorno;
    cout << "inserisci il mese (come intero)" <<endl;
    cin >> mese;
    if(giorno<1 || giorno>31)
    {
        cout << "errore nell'inserimento del giorno, reinserire" << endl;
        return -1;
    }
        if(mese<1 || mese>12)
    {
        cout << "errore nell'inserimento del mese, reinserire" << endl;
        return -1;
    }
    if(mese >= 3 && mese <= 6)
    {
        if(mese == 4 || mese == 5)
        {
            cout << "primavera";
        }
        else
        {
            if(mese == 3 && giorno>=21)
            {
               cout << "primavera"; 
            }
            else
            {
                cout << "inverno";
            }

            if(mese == 5 && giorno<=20)
            {
               cout << "primavera"; 
            }
            else
            {
                cout << "estate";
            }
        }
    }
    /*if(mese >= 6 && mese <= 9)
    {
        if(mese == 7 || mese == 8)
        {
            cout << "estate";
        }
        else
        {
            if(mese == 6 && giorno>=21)
            {
               cout << "estate"; 
            }
            else
            {
                cout << "primavera";
            }

            if(mese == 9 && giorno<=22)
            {
               cout << "estate"; 
            }
            else
            {
                cout << "autunno";
            }
        }
    }
    if(mese >= 9 && mese <= 12)
    {
        if(mese == 10|| mese == 11)
        {
            cout << "autunno";
        }
        else
        {
            if(mese == 9 && giorno>=23)
            {
               cout << "autunno"; 
            }
            else
            {
                cout << "estate";
            }

            if(mese == 12 && giorno<=21)
            {
               cout << "autunno"; 
            }
            else
            {
                cout << "inverno";
            }
        }
    }
    if(mese == 12 && mese <= 3)
    {
        if(mese == 1 || mese == 2)
        {
            cout << "inverno";
        }
        else
        {
            if(mese == 12 && giorno>=22)
            {
               cout << "inverno"; 
            }
            else
            {
                cout << "autunno";
            }

            if(mese == 3 && giorno<=20)
            {
               cout << "inverno"; 
            }
            else
            {
                cout << "primavera";
            }
        }
    }*/    
    if ((mese == 3 && giorno >= 21) || (mese >= 4 && mese <= 5) || (mese == 6 && giorno < 21)) 
    {
        cout << "Primavera" << endl;
    } 
    else 
    {
        if ((mese == 6 && giorno >= 21) || (mese >= 7 && mese <= 8) || (mese == 9 && giorno < 23)) 
        {
            cout << "Estate" << endl;
        } 
        else 
        {
            if ((mese == 9 && giorno >= 23) || (mese >= 10 && mese <= 11) || (mese == 12 && giorno < 21)) 
            {
                cout << "Autunno" << endl;
            } 
            else 
            {
            cout << "Inverno" << endl;
            }
        }
    }
    return 0;
}