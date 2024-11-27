#include <iostream>
#include <fstream>

using namespace std;

int v[10][10], m, n;

void div(int s, int f, int &mij)
{
    mij = (s+f)/2;
}

void dei(int sl, int fl, int sc, int fc)
{
    int mij_c, mij_l; 
    if((sl>=fl) && (sc >= fc))
    {
        if((sl < m) && (sc < n))
        {
            // ce vrei sa faci
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
    fin >> m >> n;
    for(int i=0; i<m; i++) for(int j=0; j<n; j++) fin >> v[i][j];
    dei(0, m-1, 0, n-1);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++) cout << v[i][j] << " ";
        cout << endl;
    }

}