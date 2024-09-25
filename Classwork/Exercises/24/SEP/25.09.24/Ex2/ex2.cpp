#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("bac.in");
    int n, singular = 0;
    int v[10] = {0};
    cin >> n;
    while(n!=0)
    {
        v[n%10]++;
        if(v[n%10]%2==1) singular++;
        else singular--;
        n/=10;
    }
    if(singular==1 || singular==0)
    {
        for(int i=0; i<10; i++)
        {
            while(v[i]/2!=0)
            {
                cout << i;
                v[i]--;
            }
        }
        for(int i=9; i>=0; i--)
        {
            while(v[i]!=0)
            {
                cout << i;
                v[i]--;
            }
        }
    }

    return 0;
}