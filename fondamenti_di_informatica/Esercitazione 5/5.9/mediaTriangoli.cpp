#include <iostream>
#include <cmath>
#include <cstdlib> // per rand() e srand()
#include <ctime>   // per time()

float differenza_medie_triangoli(int M[5][5]) {

    float differenza=0.0f;
    float media1=0.0f;
    float media2=0.0f;
    for (int i = 0; i < 5; i++) 
    {
        for(int j=i; j<5;j++)
        {
            media1=media1+M[i][j];
            std::cout<<"media1: "<<media1<<std::endl;
        }
        for(int k=4-i;k>=0;k--)
        {
            media2=media2+M[4-i][k];
            std::cout<<"media2: "<<media2<<std::endl;
        }
    }
    media1=media1/15;
    std::cout<<"media1: "<<media1<<std::endl;
    media2=media2/15;
    std::cout<<"media2: "<<media2<<std::endl;
    differenza=fabs(media1-media2);

    return differenza; 
}
/*int main() {
    int M[5][5]=
    {
        {2,8,0,1,3},
        {1,1,6,4,0},
        {0,5,2,9,1},
        {1,2,3,0,3},
        {0,0,1,1,2}
    };

    float differenza = differenza_medie_triangoli(M);
    std::cout<< "la differenza e' " <<differenza;
    return 0;
}*/

int main() {
    srand(static_cast<unsigned int>(time(0))); // Inizializza il generatore di numeri casuali

    for (int k = 0; k < 10000; ++k) {
        int M[5][5];

        // Genera una matrice 5x5 con valori casuali da 0 a 9
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                M[i][j] = rand() % 10; // Valore casuale tra 0 e 9
            }
        }

        float differenza = differenza_medie_triangoli(M);
        std::cout << "Iterazione " << k + 1 << ": la differenza è " << differenza << std::endl;
    }

    return 0;
}