#include <iostream>

using namespace std;

int f(int v[][20], int n)
{
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin >> v[i][j];
}

int g(int v[][20], int n)
{
    for(int i=0; i<n; i++) {for(int j=0; j<n; j++) cout << v[i][j]; cout << endl;}
} 

int main()
{
    int n=0;
    cin >> n;
    
    int v[n][n];

    f(v, n);
    g(v, n);

    return 0;
}