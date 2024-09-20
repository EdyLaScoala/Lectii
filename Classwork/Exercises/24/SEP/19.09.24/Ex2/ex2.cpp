#include <iostream>

using namespace std;

int main()
{
    char v[255] = {0};
    cin.getline(v, 255);
    v[0]-=32;
    for(int i=0; i<255; i++)
    {
        if(v[i] == ' ' && v[i+1]!= ' ')
        {
            v[i+1] -= 32;
        }
        cout << v[i];
    }
}