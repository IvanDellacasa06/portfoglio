#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char elemento;
    fstream in;
    fstream out;
    in.open("input.txt", ios::in);
        char lettere[27] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
        'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
        'U', 'V', 'W', 'X', 'Y', 'Z'};
    int occorrenze[26];
    for(int i=0;i<26;i++)
    {
        occorrenze[i]=0;
    }
    while(!in.eof())
    {
        in >> elemento;
        switch (elemento) {
        case 'a':case 'A':
            occorrenze[0]++;
            break;
        case 'b':case 'B':
            occorrenze[1]++;
            break;
        case 'c':case 'C':
            occorrenze[2]++;
            break;
        case 'd':case 'D':
            occorrenze[3]++;
            break;
        case 'e':case 'E':
            occorrenze[4]++;
            break;
        case 'f':case 'F':
            occorrenze[5]++;
            break;
        case 'g':case 'G':
            occorrenze[6]++;
            break;
        case 'h':case 'H':
            occorrenze[7]++;
            break;
        case 'i':case 'I':
            occorrenze[8]++;
            break;
        case 'j':case 'J':
            occorrenze[9]++;
            break;
        case 'k':case 'K':
            occorrenze[10]++;
            break;
        case 'l':case 'L':
            occorrenze[11]++;
            break;
        case 'm':case 'M':
            occorrenze[12]++;
            break;
        case 'n':case 'N':
            occorrenze[13]++;
            break;
        case 'o':case 'O':
            occorrenze[14]++;
            break;
        case 'p':case 'P':
            occorrenze[15]++;
            break;
        case 'q':case 'Q':
            occorrenze[16]++;
            break;
        case 'r':case 'R':
            occorrenze[17]++;
            break;
        case 's':case 'S':
            occorrenze[18]++;
            break;
        case 't':case 'T':
            occorrenze[19]++;
            break;
        case 'u':case 'U':
            occorrenze[20]++;
            break;
        case 'v':case 'V':
            occorrenze[21]++;
            break;
        case 'w':case 'W':
            occorrenze[22]++;
            break;
        case 'x':case 'X':
            occorrenze[23]++;
            break;
        case 'y':case 'Y':
            occorrenze[24]++;
            break;
        case 'z':case 'Z':
            occorrenze[25]++;
            break;
        default:
            break;
    }
    }
    in.close();
    out.open("output.txt", ios::out);
    for(int i=0;i<26;i++)
    {
        out << lettere[i];
        out << ':';
        out << occorrenze[i];
        out << '\n';
    }
    out.close();
    return 0;
}