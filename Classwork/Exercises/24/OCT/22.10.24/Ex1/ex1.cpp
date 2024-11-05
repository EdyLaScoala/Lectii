#include <iostream>
#include <fstream>

using namespace std;

int v[10][10];

void read()
{
    ifstream fin("date.in");
    for(int i=0; i<10; i++) for (int j = 0; j < 10; j++) fin >> v[i][j];
}

int main()
{
    
    return 0;
}