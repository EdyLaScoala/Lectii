#include <iostream>
#include <fstream>

using namespace std;

int v[20][20], n, components, start, finish, node_start, visited[20], queue[20];

void read()
{
    ifstream fin("graf_neorientat_conex.txt");
    fin >> n;
    int x, y;
    while(fin >> x >> y) v[x][y]=1, v[y][x]=1;
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
}

int nonVisitedNodesExist()
{
    for(int i=1; i<=n; i++) if(visited[i]==0) return i;
    return 0;
}

void chainNodes()
{
    components++;
    node_start = nonVisitedNodesExist();
    visited[node_start] = 1;
    cout << "Componenta conexa " << components << " este formata din nodurile: ";
    cout << node_start << " ";
    start = finish = 1;
    queue[finish] = node_start;
    while(start <= finish)
    {
        for(int i=1; i<=n; i++)
        {
            if(v[queue[start]][i] == 1)
            {
                if(visited[i] == 0)
                {
                    finish++;
                    queue[finish] = i;
                    cout << i << " ";
                    visited[i] = 1;
                }
            }
        }
        start++;  
    }
    cout << endl;
}

int main()
{
    read();
    print();
    chainNodes();
    if(nonVisitedNodesExist() != 0)
    {
        cout << "Graful nu este conex!";
        return 0;
    }
    cout << "Graful este conex!";
    return 0;
}