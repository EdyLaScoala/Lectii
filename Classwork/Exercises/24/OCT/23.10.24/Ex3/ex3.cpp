#include <iostream>
#include <fstream>

using namespace std;

int v[51][51];
int sol[200];

struct coords
{
    int x, y;
};

coords start, finish;

int loadLab()
{
    ifstream fin("date.in");
    int m, n;
    fin >> m >> n;
    fin >> start.x >> start.y;
    fin >> finish.x >> finish.y;
    for(int i=0; i<m; i++) for(int j=0; j<n; j++) fin >> v[i][j];
}

int length(int x, int y, int len)
{
    if(x == finish.x && y == finish.y) return len;
    if(!(v[x][y+1] || v[x+1][y] || v[x][y-1] || v[x-1][y]))return 0;
    return min(min(length(x, y+1, len+1), length(x-1, y, len+1)), min(length(x, y-1, len+1), length(x+1, y, len+1)));
}

int main()
{
    loadLab();
    cout << length(start.x, start.y, 1);
    return 0;
}