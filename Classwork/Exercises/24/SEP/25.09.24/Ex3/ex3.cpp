#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char c[9] = {0};
    cin >> c;
    int v[strlen(c)][strlen(c)];
    for(int i=0; i<strlen(c); i++)
    {
        for(int j=0; j<strlen(c); j++)
        {
            v[i][j] = c[strlen(c)-j-1] - '0';
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}