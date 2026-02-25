#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream in;

    in.open("dati.txt", ios::in);
    char identificatore [17];
    int numero=0;
    int media_eta=0;
    int eta=0;    
    while(!in.eof())
    {
        in >> identificatore;
        in >> numero;
        for (int i=0;i<numero;i++)
        {
            in >>eta;
            media_eta=media_eta+eta;
        }
        media_eta=media_eta/numero;
        cout << "identificatore: " << identificatore << " media anni: " << media_eta <<endl;
        media_eta=0;
    }
    in.close();
    return 0;
}