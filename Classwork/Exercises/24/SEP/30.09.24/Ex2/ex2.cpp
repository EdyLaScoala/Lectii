#include <iostream>

using namespace std;

int n, v[5], sol[5] = {1, 2, 3, 4, 5};

int fc(int level)
{

    for(int i=0; i<5; i++)
    {
        for(int j=i-1; j>0; j++)
        {
            if(v[i] == v[j]) break;
            if(j==1) v[level] = sol[i];
        }
    }
    for(int i=0; i<n; i++) cout << v[i];
    cout << endl << endl;
    if(level==n-1)
    {
        for(int i=0; i<n; i++) cout << v[i];
        cout << endl;
        return 1;
    }
    
    return fc(level+1);;
}

int main()
{
    cin >> n;
    fc(0);

    return 0;
}