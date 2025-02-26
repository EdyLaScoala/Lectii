#include <iostream>
#include <fstream>

using namespace std;

int v[20][20], n;

void read()
{
    ifstream fin("graf_neorientat_conex.txt");
    fin >> n;
    int x, y;
    while(fin >> x >> y) v[x][y]=1,v[y][x]=1;
    fin.close();
}

void print()
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}



int main()
{
    cout << "foame." << endl;
    return 0;
}