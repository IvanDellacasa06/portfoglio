#include <iostream>
#include <cctype>
using namespace std;

int main() // qui inizia il programma
{
    int coordinate_x [3];
    int coordinate_y [3];
    cout << "inserisci le coordinate del punto da cercare" <<endl;
    cout << "x: ";
    cin >> coordinate_x[0];
    cout << "y: ";
    cin >> coordinate_y[0];
    for (int i = 1; i<=2; i++)
    {
        cout << "inserisci le coordinate del " << i <<endl;
            cout << "x: ";
            cin >> coordinate_x[i];
            cout << "y: ";
            cin >> coordinate_y[i];
    }
    if(coordinate_x[1] <= coordinate_x[0] && coordinate_x[0] <= coordinate_x[2] &&
        coordinate_y[1] <= coordinate_y[0] && coordinate_y[0] <= coordinate_y[2])
    {
        cout << "il punto e' compreso nel rettangolo" << endl;
    }
    else
    {
        cout << "il punto non e' compreso nel rettangolo" << endl;
    }
    return 0;
}