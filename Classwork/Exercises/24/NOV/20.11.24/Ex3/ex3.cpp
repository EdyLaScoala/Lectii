#include <iostream>
#include <fstream>

using namespace std;

int v[10][10], n;

void div(int s, int f, int &mij)
{
    mij = (s+f)/2;
}

void dei(int sl, int fl, int sc, int fc)
{
    int mij_c, mij_l; 
    if((sl>=fl) && (sc >= fc))
    {
        if((sl <= n) && (sc <= n))
        {
            if(sc < sl) cout << v[sl][sc] << " ";
        }
        return;
    }

    div(sl, fl, mij_l);
    div(sc, fc, mij_c);

    dei(sl, mij_l, sc, mij_c);
    dei(mij_l+1, fl, sc, mij_c);
    dei(sl, mij_l, mij_c+1, fc);
    dei(mij_l+1, fl, mij_c+1, fc);
}

int main()
{
    ifstream fin("date.in");
    fin >> n;
    for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) fin >> v[i][j];
    int minim = v[1][1], maxim = v[1][1];
    dei(1, n, 1, n);
    cout << endl << endl;   
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++) cout << v[i][j] << " ";
        cout << endl;
    }


}


/*

matrice patratica, cu dei sa se afiseze elementele de sub diagonala principala
matricea e intr-un fisier text, cu structura urmatoare:
- linia 1: n
- urmatoarele n linii: elementele matricei

*/