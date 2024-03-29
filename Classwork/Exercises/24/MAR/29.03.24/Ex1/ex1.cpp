#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("date.in");

    struct clasa
    {
        int cod;
        char nume[30];
        char prenume[30];
        int notaRO;
        int notaMATE;
        int notaINFO;
    } elevi[30];

    float medie[30];

    int i=0;
    while(fin >> elevi[i].cod)
    {
        fin >> elevi[i].nume;
        fin >> elevi[i].prenume;
        fin >> elevi[i].notaRO;
        fin >> elevi[i].notaMATE;
        fin >> elevi[i].notaINFO;

        cout << elevi[i].nume << " ";
        cout << elevi[i].prenume << " ";
        cout << elevi[i].notaRO << " ";
        cout << elevi[i].notaMATE << " ";
        cout << elevi[i].notaINFO << " ";

        
        medie[i] = float((elevi[i].notaINFO + elevi[i].notaRO + elevi[i].notaMATE)/3);
        cout << medie[i];
        cout << endl;
        i++;
    }

    cout << endl;

    for(int j=0; j<i; j++)
    {
        for(int k=j+1; k<i; k++)
        {
            if(medie[j]>medie[k])
            {
                swap(medie[j], medie[k]);
                swap(elevi[j].nume, elevi[k].nume);
                swap(elevi[j].prenume, elevi[k].prenume);
                swap(elevi[j].notaRO, elevi[k].notaRO);
                swap(elevi[j].notaMATE, elevi[k].notaMATE);
                swap(elevi[j].notaINFO, elevi[k].notaINFO);
            }
        }
        cout << elevi[j].nume << " ";
        cout << elevi[j].prenume << ": " << medie[j];
        //cout << elevi[j].notaRO << " ";
        //cout << elevi[j].notaMATE << " ";
        //cout << elevi[j].notaINFO << " ";
        cout << endl;
    }

}

// programd e gestionare pentru elevii unei clase cu maxim 30 de elevi, cu urmatoarele date membre: 
/*
        cod INT
        nume CHAR(30)
        prenume CHAR(30)
        notaRO int
        notaMATE int
        notaINFO int
*/

// sa se sorteze crescator elevii dupa media generala a celor 3 discipline


