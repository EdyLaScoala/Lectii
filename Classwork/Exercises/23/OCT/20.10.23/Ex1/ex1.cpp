#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("data.txt");

int main()
{
    int n, sum=0, prod=1;
    fin >> n;
    int v[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            fin >> v[i][j];
            if(j>i && j<n-i-1)
            {
                sum += v[i][j];
                cout << v[i][j] << " ";
            }
            else if(j>n-i-1 && j<i)
            {
                prod *= v[i][j];
                cout << v[i][j] << " ";
            }
            else
            {
                cout << "- ";
            }
        }
        cout << endl;
    }
    std::cout << endl << sum << " " << prod << endl << endl;
}