#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

struct libro
{
    int id;
    char autore[32];
    char titolo[64];
    int npagine;
    double costo;
};

int main()
{
    const int dim=100;
    libro libreria[dim];
    fstream fin;
    fin.open("inventario.txt", ios::in);
    if (!fin)
    {
        cout << "Attenzione il file non esiste" <<endl;
        return -1;
    }
    const int d = 64;
    char temp[d];
    int indice=0;
    while(!fin.eof())
    {
        fin.getline(temp,d,',');
        libreria[indice].id= stoi(temp);
        fin.getline(libreria[indice].titolo,d,',');
        fin.getline(libreria[indice].autore,d,',');
        fin.getline(temp,d,',');
        libreria[indice].npagine= stoi(temp);
        fin.getline(temp,d,',');
        libreria[indice].costo= stod(temp);
        indice++;
    }
    fin.close();
    char titolo_immesso[64];
    cout << "inserisci titolo: ";
    fin.getline(titolo_immesso,64,'\n');
    int trovato=0;
    for(int i=0;i<100;i++)
    {
        if(strcmp(titolo_immesso, libreria[i].titolo)==0)
        {
            cout << "il librom è presente" << endl;
            cout << "stanpa informazioni";
            trovato=1;
        }
    }
    if(!trovato)
    {
        cout << "il libro non è presente" << endl;
    }
}