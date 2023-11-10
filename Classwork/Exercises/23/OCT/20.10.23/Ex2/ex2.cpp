#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("data.txt");

int n, a=1, b=0, aux;
int v[6][6];

void DoTheThing(int i, int j)
{
    v[i][j] = a+b;
    aux = b;
    b=a+b;
    a = aux;
}

int main()
{
    fin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i%2==0)
            {
                DoTheThing(i, j);
            }
            else
            {
                DoTheThing(i, n-j-1);
            }
            cout << v[i][j] << " ";
        } 
    cout << endl;
    }
}