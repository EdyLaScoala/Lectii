#include <iostream>
#include <fstream>

using namespace std;

int v[20][20], n, visited[20], c[20], prim, ultim, k;

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

void afisare() {
    for (int i = 1; i <= ultim; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
}

void init(int k) {
    prim = ultim = 1;
    c[ultim] = k;
    visited[k] = 1;
}

int este_vida() {
    return ultim < prim;
}

void adauga(int i) {
    ultim++;
    c[ultim] = i;
    visited[i] = 1;
}

void elimina() {
    prim++;
}

void bfs()
{
    k = c[prim];
    for(int i=1; i<=n; i++)
    {
        if(v[k][i] == 1 && visited[i] == 0) adauga(i);
    }
    elimina();
}

int nonVisitedNodesExist()
{
    for(int i=1; i<=n; i++) if(visited[i]==0) return i;
    return 0;
}

int main()
{
    read();
    print();
    cout << "nod de pornire: ";
    cin >> k;
    init(k);
    while(!este_vida()) bfs();
    cout << "Nodurile vizitate sunt: ";
    afisare();
    return 0;
}