#include <iostream>
#include <fstream>

using namespace std;

int v[20][20], n, m, root, maxLevel = 0;

void read()
{
    ifstream fin("date.in");
    fin >> n;
    int x, y;
    while(fin >> x >> y) v[x][y]=1, v[y][x]=1;
    fin.close();
}

void searchNode(int node, int level)
{
    maxLevel = max(maxLevel, level);
    for(int i=node + 1; i<=n; i++) if(v[node][i]!=0) searchNode(i, level+1);
}

int main()
{
    read();
    searchNode(1, 1);
    cout << "Max level: " << maxLevel << endl;
    return 0;
}