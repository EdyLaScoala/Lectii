// ALGORITMUL LUI DJIKSTRA

#include <iostream>
#include <fstream>

using namespace std;

int a[100][100], d[100], s[100], p[100], n, m;
int const MAX = 5000;

ifstream fin("date.in");

void init()
{
    int i, j;
    fin >> n >> m;
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
    for(int k=1; k<=m; k++)
    {
        fin >> i >> j >> c;
        a[i][j] = c;
    }
}

void generare_drum(int x)
{
    int i, j, min, y;
    // Initialize s and p arrays
    for(i = 1; i <= n; i++) {
        s[i] = 0;
        p[i] = 0;
    }
    s[x] = 1;
    for(i = 1; i <= n; i++)
    {
        d[i] = a[x][i];
        if(i != x && d[i] < MAX)
            p[i] = x;
    }
    for(i = 1; i < n; i++)
    {
        for(j = 1, min = MAX; j <= n; j++)
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

int afisare(int x, int y) 
{
    if (p[y] != 0) 
    {
        cout << "Drumul cu costul minim de la nodul " << x;
        cout << " la nodul " << y << " are costul " << d[y] << endl;
        drum(y); 
        cout << endl;
    } 
    else 
    {
        cout << "Nu exista drum de la " << x << " la " << y << endl;
    }
    return d[y];
}

int main()
{
    int valori[100];
    int romeo, julieta;
    cin >> romeo >> julieta;
    init();
    citire();
    for(int i=1; i<=n; i++) {
        valori[i] = 0;
    }
    generare_drum(romeo);
    for(int i=1; i<=n; i++) {
        valori[i] += d[i];
    }
    generare_drum(julieta);
    for(int i=1; i<=n; i++) {
        valori[i] += d[i];
    }
    int min = MAX;
    int optimal_node = -1;
    for(int i=1; i<=n; i++) {
        if(valori[i] < min && valori[i] != 0) {
            min = valori[i];
            optimal_node = i;
        }
    }
    cout << "Intersectia optima este: " << optimal_node << " cu costul " << min << endl;
    return 0;
}

