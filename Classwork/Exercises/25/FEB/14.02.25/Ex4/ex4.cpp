#include <iostream>
#include <fstream>

using namespace std;

int v[10][10];

int main()
{
    ifstream fin("date.in");
    int n;
    fin >> n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            fin >> v[i][j];

    for(int i=0; i<n-1; i++) cout << v[i][0] << " ";
    for(int i=0; i<n-1; i++) cout << v[n-1][i] << " ";
    for(int i=0; i<n-1; i++) cout << v[n-i-1][n-1] << " ";
    for(int i=0; i<n-1; i++) cout << v[0][n-i-1] << " ";
}