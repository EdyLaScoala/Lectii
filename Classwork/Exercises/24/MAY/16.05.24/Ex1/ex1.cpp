#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int v[4][6];
    ifstream fin("data.in");
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<6; j++)
        {
            fin >> v[i][j];
        }
    }
}