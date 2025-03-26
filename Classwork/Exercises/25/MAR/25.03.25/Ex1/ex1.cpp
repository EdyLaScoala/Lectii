#include <iostream>
#include <fstream>

using namespace std;

int v[20][20], n, visited[20], found_neighbours;
bool arbore = true;

void read()
{
    ifstream fin("date.in");
    fin >> n;
    int x, y;
    while(fin >> x >> y) v[x][y]=1, v[y][x]=1;
    fin.close();
}

bool nonVisitedNodesExist()
{
    for(int i=1; i<=n; i++) if(visited[i]==0) return true;
    return false;
}

void searchNode(int node)
{
    visited[node] = 1;
    found_neighbours = 0;
    for(int i=node/2; i<=n; i++) if(v[node][i] == 1) if(visited[i] == 0) searchNode(i); else found_neighbours++;
    if(found_neighbours>1) arbore=false;
}

int main()
{
    read();
    searchNode(1);
    if(nonVisitedNodesExist() || !arbore)
    {
        cout << "Graful nu este arbore!";
        return 0;
    }
    cout << "Graful este arbore!";
    return 0;
}