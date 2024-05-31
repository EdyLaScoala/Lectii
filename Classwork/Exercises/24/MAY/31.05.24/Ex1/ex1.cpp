#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ifstream fin("date.in");

    struct elev
    {
        char nume[20];
        int n1, n2, medie;
    } elevi[1000];

    int n;
    fin >> n;
    cout << n << endl;
    for(int i=0; i<n; i++)
    {
        fin >> elevi[i].nume >> elevi[i].n1 >> elevi[i].n2;
        elevi[i].medie = (elevi[i].n1 + elevi[i].n2)/2;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(elevi[i].medie > elevi[j].medie) swap(elevi[i], elevi[j]);

        }
    }
    int med=0, med2=0, itm=0;
    for(int i=0; i<n; i++)
    {
        med = elevi[i].medie;
        med2=med;
        itm=i;
        while(med2==med)
        {
            med2=elevi[++itm].medie;
        }
        for(int j=i; j<=itm; j++)
        {
            for(int k=j+1; k<=itm; k++)
            {
                if(strcmp(elevi[j].nume, elevi[k].nume)>0) swap(elevi[j], elevi[k]);
            }
        }
        cout << elevi[i].nume << "; " << endl;
        
    }

}