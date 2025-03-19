#include <iostream>
#include <fstream>

using namespace std;

int a[100][100], d[100], s[100], p[100], n;
int const MAX = 5000;

ifstream fin("date.in");

void init()
{
    int i, j;
    fin >> n;
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            if(i == j)
                a[i][j] = 0;
            else
                a[i][j] = -MAX;
}

void citire()
{
    int i, j, c;
    while(fin >> i >> j >> c)
        a[i][j] = c;
}

void generare_drum(int x)
{
    int i, j, max, y;
    s[x] = 1;
    for(i = 1; i <= n; i++)
    {
        d[i] = a[x][i];
        if(i != x && d[i] > -MAX)
            p[i] = x;
    }
    for(i = 1; i < n; i++)
    {
        max = -MAX;
        y = -1;
        for(j = 1; j <= n; j++)
            if(!s[j] && d[j] > max)
            {
                max = d[j];
                y = j;
            }
        if (y == -1) break; // Dacă nu mai există noduri neprocesate, ieșim din buclă
        s[y] = 1;
        for(j = 1; j <= n; j++)
            if(!s[j] && d[j] < d[y] + a[y][j])
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
                cout << "Drumul cel mai gunoios: " << d[i] << " gunoaie" << endl;
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

int main()
{
    init();
    citire();
    int A, B;
    cout << "Introduceti intersecția de start (A): ";
    cin >> A;
    cout << "Introduceti intersecția de destinație (B): ";
    cin >> B;

    generare_drum(A);

    if (d[B] == -MAX)
    {
        cout << "Nu exista drum de la " << A << " la " << B << endl;
    }
    else
    {
        cout << "Drumul optim de la " << A << " la " << B << " colectează " << d[B] << " kilograme de ambalaje." << endl;
        cout << "Traseu: ";
        drum(B);
        cout << endl;
    }

    return 0;
}