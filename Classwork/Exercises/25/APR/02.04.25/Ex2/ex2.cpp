#include <iostream>
#include <fstream>

using namespace std;

int v[20][20], n, m, root, vec[20];

void read()
{
    ifstream fin("date.in");
    fin >> n >> m >> root;
    int x, y;
    while(fin >> x >> y) v[x][y]=1, v[y][x]=1;
    fin.close();
}

void searchNode(int node)
{
    for(int i=node + 1; i<=n; i++)
    {
        if(v[node][i]!=0)
        {
            vec[i] = node;
            searchNode(i);
        }
    }
}

int main()
{
    read();
    searchNode(root);
    for(int i=1; i<=n; i++) cout << vec[i] << " ";
    return 0;
}