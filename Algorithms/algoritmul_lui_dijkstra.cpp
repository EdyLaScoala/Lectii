#include <iostream>
#include <fstream>

using namespace std;

int a[100][100], d[100], s[100], p[100], n;
int const MAX = 5000;

ifstream fin("dijkstra.in");

void init()
{
    int i, j;
    fin >> n;
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            if(i == j)
                a[i][j] = 0;
            else
                a[i][j] = MAX;
}

void citire()
{
    int i, j, c;
    while(fin >> i >> j >> c)
        a[i][j] = c;
}

void generare_drum(int x)
{
    int i, j, min, y;
    s[x] = 1;
    for(i = 1; i <= n; i++)
    {
        d[i] = a[x][i];
        if(i!=x && d[i] < MAX)
            p[i] = x;
        for(i = 1; i <= n; i++)
            for(j=1, min=MAX; j <= n; j++)
                if(!s[j] && d[j] < min)
                {
                    min = d[j];
                    y = j;
                }
        s[y] = 1;
        for(j = 1; j <= n; j++)
            if(!s[j] && d[j] > d[y] + a[y][j])
            {
                d[j] = d[y] + a[y][j];
                p[j] = y;
            }
    }  
}

void drum(int x)
{
    if(p[x])
        drum(p[x]);
    cout << x << " ";
}   

void afisare(int x) 
{
    for(int i = 1; i <= n; i++) 
    {
        if (i != x) 
        {
            if (p[i] != 0) 
            {
                cout << "Drumul cu costul minim de la nodul " << x;
                cout << " la nodul " << i << " are costul " << d[i] << endl;
                drum(i); 
                cout << endl;
            } 
            else 
            {
                cout << "Nu exista drum de la " << x << " la " << i << endl;
            }
        }
    }
}   