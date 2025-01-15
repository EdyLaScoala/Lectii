#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
    int v[10][10] = {0}, n=0;
    ifstream fin("date.in");
    for(int i=2; i<=10; i++)  for(int j=1; j<i; j++)  n += abs((v[i][j]+1)%2) + abs((v[j][i]+1)%2);
    cout << n;
}