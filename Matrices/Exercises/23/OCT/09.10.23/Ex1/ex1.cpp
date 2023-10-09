#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("data.txt");

int v[100][100], n;

void a()
{
    for(int i=0; i<n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i+1 << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void b()
{
    for(int i=0; i<n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if((i==n-1 && j==0) || (i==0 && j==n-1))
            {
                cout << 1 << " ";
            }
            else if (i==0 && i!=j)
            {
                cout << 2 << " ";
            }
            else if(i==n-1 && i!=j)
            {
                cout << 5 << " ";
            }
            else if(j==0 && i!=j)
            {
                cout << 3 << " ";
            }
            else if(j==n-1 && i!=j)
            {
                cout << 4 << " ";
            }
            else
            {
                cout << 1 << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

void c()
{
    for(int i=0; i<n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cout << i+j+1 << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void d()
{
    for(int i=0; i<n; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cout << min(i, j)+1 << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void e()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n0; j++)
        {
            if(i%2==0)
        {
            for(int j=n*i; j<n*(i+1); j++)
            {
                cout << j+1 << " ";
            }
            cout << endl;
                
        }
        else
        {
            for(int j=(n*(i+2)); j>=n*(i+1)+1; j--)
            {
                cout << j << " ";
            }
            cout << endl;
        }
        }
        cout << endl;
             
        
    }
    cout << endl;
}

int main()
{
    fin >> n;
    char mode;
    while(true)
    {
        cout << "Please input a mode from a to f: ";
        cin >> mode;
        switch(mode)
        {
        case 'a':
            a();
            break;
        
        case 'b':
            b();
            break;
        
        case 'c':
            c();
            break;

        case 'd':
            d();
            break;

        case 'e':
            e();
            break;
        
        case 's':
            return 0;

        default:
            cout << "Invalid mode." << endl;
        }
    }
}