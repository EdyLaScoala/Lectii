#include <iostream>
#include <cstring>

using namespace std;

int f(int n)
{
    int sum=0;
    for(int i=2; n!=0 && i<=n; i++)
    {
        while(n%i==0) n/=i, sum++;
    }
    return sum;
}

int main()
{
    char n[5];
    cin >> n;

    int x = 0;
    for(int i=0; i<strlen(n); i++)
    {
        x *= 10;
        x += n[i] - '0';
    }

    if(x%10==0) 
    {
        if(f(x)==1) 
        {
            cout << "da";
            return 0;
        }
    }
    else if(x%10<10)
    {
        if(f(x)==1)
        {
            swap(n[0], n[1]);
            x=0;
            for(int i=0; i<3; i++)
            {
                x *= 10;
                x += n[i] - '0';
            }
            if(f(x)==1) 
            {
                cout << "da";
                return 0;
            }
        }
    }
    else
    {
        for(int i=0; i<2; i++)
        {
            swap(n[0], n[1]);
            x=0;
            for(int i=0; i<3; i++)
            {
                x *= 10;
                x += n[i] - '0';
            }
            if(f(x)!=1) 
            {
                cout << "nu";
                return 0;
            }

            swap(n[1], n[2]);
            x=0;
            for(int i=0; i<3; i++)
            {
                x *= 10;
                x += n[i] - '0';
            }
            if(f(x)!=1) 
            {
                cout << "nu";
                return 0;
            }

            swap(n[0], n[2]);
            x=0;
            for(int i=0; i<3; i++)
            {
                x *= 10;
                x += n[i] - '0';
            }
            if(f(x)!=1) 
            {
                cout << "nu";
                return 0;
            }
        }
        cout << "da";
    }
    cout << "nu";
    return 0;
}

/*

1 2 3
2 1 3
2 3 1
1 3 2
3 1 2
3 2 1


abc  =>
axb
bxc
axc
axb
bxc

*/