#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

ifstream fin("data.txt");

int main()
{
    int m=0, n=0;
    fin >> m >> n;
    int v[m][n];
    bool show[m][n];
    int maxPos[2]={0, 0},  minPos[2]={0, 0};
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            fin >> v[i][j];
            show[i][j] = true;
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
    cout << "min: " << min << " - " << minPos[0] << ", " << minPos[1] << endl;
    cout << "max: " << max << " - " << maxPos[0] << ", " << maxPos[1] << endl;

    for(int i=0; i<m; i++) show[minPos[0]][i] = false;
    for(int i=0; i<n; i++) show[i][minPos[1]] = false;

    for(int i=0; i<m; i++) show[maxPos[0]][i] = false;
    for(int i=0; i<n; i++) show[i][maxPos[1]] = false;

    m-=2;
    n-=2;

    cout << m << " " << n << endl;

    for(int i=0; i<m+2; i++)
    {
        for(int j=0; j<n+2; j++)
        {
            if(show[i][j]==true) 
                cout << v[i][j] << " ";
        }
        cout << endl;
    }

}