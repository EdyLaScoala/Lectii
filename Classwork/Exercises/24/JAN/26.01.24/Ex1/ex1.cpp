#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

ifstream fin("data.txt");

int main()
{
    int m=0, n=0;
    cin >> m >> n;
    int v[m][n];
    int maxPos[2]={0, 0},  minPos[2]={0, 0};
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            fin >> v[i][j];
        }
    }
    int min = v[minPos[0]][minPos[1]] , max = v[maxPos[0]][maxPos[1]];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(v[i][j]<min) min = v[i][j], minPos[0] = i, minPos[1]=j;
            if(v[i][j]>max) max = v[i][j], maxPos[0] = i, maxPos[1]=j;
        }
    }
}