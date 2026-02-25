#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main() //qui inizia il programma
{
    int array[30];
    srand(time(NULL));
    for(int i=0;i<30;i++)
    {
        array[i]=rand()%100;
    }
    for(int i=0;i<30;i++)
    {
        cout << i+1 << "numero:" << array[i]<<endl;
    }
    return 0;
}