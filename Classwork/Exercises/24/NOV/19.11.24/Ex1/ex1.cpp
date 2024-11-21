#include <iostream>
#include <fstream>

using namespace std;

int v[10][10], m, n;

void div(int s, int f, int &mij)
{
    mij = (s+f)/2;
}

void dei(int sl, int fl, int sc, int fc, int &minim, int &maxim)
{
    int mij_c, mij_l;
    if((sl>=fl) && (sc >= fc))
    {
        cout << v[sl][sc] << endl;
        //cout << sl << " " << sc << endl;
        minim = min(minim, v[sl][sc]);
        maxim = max(maxim, v[sl][sc]);
        return;
    }

    div(sl, fl, mij_l);
    div(sc, fc, mij_c);

    //cout << sl << " " << fl << " " << mij_l << " " << sc << " " << fc << " " << mij_c << endl;

    dei(sl, mij_l, sc, mij_c, minim, maxim);
    dei(mij_l+1, fl, sc, mij_c, minim, maxim);
    dei(sl, mij_l, mij_c+1, fc, minim, maxim);
    dei(mij_l+1, fl, mij_c+1, fc, minim, maxim);
}

int main()
{
    ifstream fin("date.in");
    fin >> m >> n;
    for(int i=1; i<=m; i++) for(int j=1; j<=n; j++) fin >> v[i][j];
    int minim = v[1][1], maxim = v[1][1];
    cout << minim << " " << maxim << endl;
    dei(1, m, 1, n, minim, maxim);
    cout << minim << " " << maxim << endl << endl;
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++) cout << v[i][j] << " ";
        cout << endl;
    }

}