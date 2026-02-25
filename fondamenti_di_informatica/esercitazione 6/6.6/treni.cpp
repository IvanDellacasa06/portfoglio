#include <iostream>
#include <fstream>
#include <filesystem>
using namespace std;
const int righe=31;
const int colonne=10;
double totale_merce(double matrice[righe][colonne])
{
    double s=0;
    for(int i=0; i<righe;i++){
        for(int j=0;j<colonne;j++)
        {
            s+=matrice[i][j];
        }
    }
    return s;
}
int numTreni(double matrice[righe][colonne])
{
    int numero_treni=0;
    for(int i=0;i<righe;i++)
    {
        for(int j=0;j<colonne;j++)
        {
            if(matrice[i][j]!=0)
            {
                numero_treni++;
                break;
            }
        }
    }
    return numero_treni;
}
double MaxTreni(double matrice[righe][colonne], int& v, int& g)
{
    int max=0;
    v=0;
    g=0;
    double peso=0.0;
    int count=0;
    for(int i=0;i<righe;i++)
    {
        for(int j=0;j<colonne;j++)
        {
            if(matrice[i][j]!=0.0)
            {
                count++;
                
            }
        }
        if(count>max)
        {
            max=count;
            v=count;
            g=i;
        }
        count=0;
    }
    for(int i=0;i<colonne;i++)
    {
        peso+=matrice[g][i];
    }
    return peso;

}
int main() {
    fstream in;
    double matrice[righe][colonne];
    in.open("dati.txt", ios::in);
    for(int i=0; i<righe;i++)
    {
        for(int j=0; j<colonne;j++)
        {
            in>>matrice[i][j];
        }
    }
    in.close();
    cout << "totale merce spostata: " << totale_merce(matrice) <<endl;
    cout << "numero di treni: " << numTreni(matrice) <<endl;
    int v=0;
    int g=0;
    double merce=MaxTreni(matrice, v, g);
    cout << "massimo numero di vagoni: "<< v << " nel giorno: " << g << " con peso: " << merce;
    return 0;
}