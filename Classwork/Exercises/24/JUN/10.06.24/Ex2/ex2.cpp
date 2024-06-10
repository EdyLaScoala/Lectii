#include <iostream>

using namespace std;

int main()
{
    int v[6][4];

    for(int i=0; i<6; i++) for(int j=0; j<4; j++) cin >> v[i][j];

    for(int i=0; i<6; i++)
    {
        for(int j=i; j<6; j++)
        {
            if(v[i][2]>v[j][2])
            {
                swap(v[i][2], v[j][2]);
            }
        }
    }

    cout << endl;

    for(int i=0; i<6; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}