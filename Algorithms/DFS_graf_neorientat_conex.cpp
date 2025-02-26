#include <iostream>
#include <fstream>

using namespace std;

int v[20][20], n, visited[20];

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

int nonVisitedNodesExist()
{
    for(int i=1; i<=n; i++) if(visited[i]==0) return i;
    return 0;
}

void searchNode(int node)
{
    visited[node] = 1;
    for(int i=node/2; i<=n; i++) if(v[node][i] == 1 && visited[i] == 0) searchNode(i);
}

int main()
{
    read();
    print();
    searchNode(1);
    if(nonVisitedNodesExist() != 0)
    {
        cout << "Graful nu este conex!";
        return 0;
    }
    cout << "Graful este conex!";
    return 0;
}