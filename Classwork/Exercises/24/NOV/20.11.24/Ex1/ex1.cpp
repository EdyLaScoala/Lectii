#include <iostream>
#include <fstream>

using namespace std;

int v[1001], n;

void combina(int a, int b, int &res)
{
    res = a+b;
}

void div(int s, int f, int &mij)
{
    mij = (s+f)/2;
}

void dei(int s, int f, int &minim, int &maxim)
{
    int mij;
    if(s==f)
    {
        cout << v[s] << endl;
        if(v[s]%2==0) minim = min(minim, v[s]);
        else maxim = max(maxim, v[s]);
        return;
    }

    div(s, f, mij);

    dei(s, mij, minim, maxim);
    dei(mij+1, f, minim, maxim);
}

int main()
{
    ifstream fin("date.in");
    fin >> n;
    for(int i=0; i<n; i++) fin >> v[i];
    int minim = 10000000, maxim = 0;
    dei(0, n-1, minim, maxim);
    cout << minim << " " << maxim << endl;
    return 0;
}

/*
sir de n elemente numere intregi
sa se realizeze programe care, folosind metoda dei, determina minimul elementelor pare din sir, maximul elementelor impare
valorile vor fi preluate dintr-un fisier numit date.in, iar n este maxim 1000
*/