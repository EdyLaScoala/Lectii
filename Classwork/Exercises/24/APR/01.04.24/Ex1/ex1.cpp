#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    struct date
    {
        unsigned short day;
        char month[10];
        unsigned short year;
    };

    struct elev
    {
        unsigned int cod;
        char nume[30];
        char prenume[30];
        date data;
        char localitate[30];
        float media;
    };

    ifstream fin("data.in");
    
    elev elevi[30];
    int i=0;

    while(fin >> elevi[i].cod)
    {
        fin >> elevi[i].nume;
        fin >> elevi[i].prenume;
        fin >> elevi[i].data.day;
        fin >> elevi[i].data.month;
        fin >> elevi[i].data.year;
        fin >> elevi[i].localitate;
        fin >> elevi[i].media;

        cout << elevi[i].nume << " ";
        cout << elevi[i].prenume << " ";
        cout << elevi[i].data.day << " ";
        cout << elevi[i].data.month << " ";
        cout << elevi[i].data.year << " ";
        cout << elevi[i].localitate << " ";
        cout << elevi[i].media << endl;

        i++;
    }

}