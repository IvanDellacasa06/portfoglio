#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char elemento;
    fstream ciao;
    fstream consonanti;
    fstream vocali;
    ciao.open("ciao.txt", ios::in);
    consonanti.open("consonanti.txt", ios::out);
    vocali.open("vocali.txt", ios::out);
    while(!ciao.eof())
    {
        ciao >> elemento;
        switch (elemento)
        {
            case 'b': case 'c': case 'd': case 'f': case 'g': case 'h': case 'j': case 'k':
            case 'l': case 'm': case 'n': case 'p': case 'q': case 'r': case 's': case 't':
            case 'v': case 'w': case 'x': case 'y': case 'z':
            case 'B': case 'C': case 'D': case 'F': case 'G': case 'H': case 'J': case 'K':
            case 'L': case 'M': case 'N': case 'P': case 'Q': case 'R': case 'S': case 'T':
            case 'V': case 'W': case 'X': case 'Y': case 'Z':
                consonanti << elemento;
            break;
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                vocali << elemento;
            break;
            default:
            break;
        }
    }
    ciao.close();
    consonanti.close();
    vocali.close();
    return 0;
}