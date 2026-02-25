#include <iostream>
using namespace std;

int main() //qui inizia il programma
{
    float secondi = 0;
    float minuti = 0;
    float ore = 0;
    float giorni = 0;

    float settimane = 0;

    cout << "inserisci il tempo in secondi " << endl;

    cin >> secondi;
    minuti =secondi/60;
    ore = minuti/60;
    giorni = ore/24;
    settimane = giorni/7;

    cout << "il tempo in secondi e' " << secondi <<endl;
    cout << "il tempo in minuti e' " << minuti <<endl;
    cout << "il tempo in ore e' " << ore <<endl;
    cout << "il tempo in giorni e' " << giorni <<endl;
    cout << "il tempo in settimane e' " << settimane <<endl;
    return 0;
}