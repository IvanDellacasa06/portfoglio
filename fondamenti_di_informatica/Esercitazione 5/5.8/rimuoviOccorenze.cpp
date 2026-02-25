#include <iostream>
#include <cstring>
#include <cctype>
#include <string>

int rimuoviOccorenze(char stringa[], char a) {

    int size=strlen(stringa)-1;
    int caratteri_eliminati=0;

    for (int i = 0; i <= size; i++) {
       if(stringa[i]==a)
       {
        for(int k=i;k<=size;k++)
        {
            stringa[k]=stringa[k+1];
        }
        caratteri_eliminati++;
        size--;
        i--;
       }
    }

    return caratteri_eliminati; 
}
int main() {
    char stringa[10];
    char a;
    std::cout <<"inserisci la stringa:"<< std::endl;
    std::cin>>stringa;
    std::cout <<"inserisci il carattere da rimuovere:"<< std::endl;
    std::cin>>a;

    int caratteri_eliminati = rimuoviOccorenze(stringa,a);
    std::cout<< "rimossi " <<caratteri_eliminati<< " stringa risultante "<< stringa;
    return 0;
}