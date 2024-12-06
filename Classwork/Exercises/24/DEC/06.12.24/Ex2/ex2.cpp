#include <iostream>
#include <fstream>

using namespace std;

int v[100][100];

int main()
{
    ifstream fin("date.in");
    int n, num = 0;
    fin >> n;
    bool isolated = true;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++) 
        {
            fin >> v[i][j];
            if(v[i][j]) 
            {
                isolated = false;
                break;
            }
        }
        if(isolated) num++;
        isolated = true;
    }
    cout << num << endl;
    return 0;
}