#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("data.txt");

int v[100][100], m, n;

void a()
{
    for(int i=0; i<m; i+=2)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i+1][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void b()
{
    for(int i=0; i<m; i+=2)
    {
        for (int j = 0; j < n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void c()
{
    int k, p;
    cout << "Values for k/p: ";
    cin >> k >> p;
    while(k>m && p>n)
    {
        cout << "Invalid values. Values for k/p: ";
        cin >> k >> p;
    }
    for(int j=0; j<n; j++)
    {
        cout << v[k-1][j] << " ";
    }
    cout << endl;
    for(int i=0; i<m; i++)
    {
        cout << v[i][p-1] << " ";
    }
    cout << endl << endl;
}

void d()
{
    for(int i=0; i<m; i++)
    {
        cout << v[i][0] << " " << v[i][m-1] << endl;
    }
    cout << endl;
}

void e()
{
    unsigned long long prod=1;
    int x, mhm=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            mhm=0;
            x = v[i][j];
            while(x!=0 && mhm==0)
            {
                if(x%10==1)
                {
                    prod *= v[i][j];
                    mhm=1;
                }
                x/=10;
            }

        }
    }
    cout << prod << endl << endl;
}

void f()
{
    int x;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            x = v[i][j];
            if(x<100 && x>9)
            {
                cout << (x%10)+((x/10)&10) << " ";
            }
            else
            {
                cout << v[i][j] << " ";
            }

        }
        cout << endl;
    }
}

int main()
{
    fin >> m >> n;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            fin >> v[i][j];
        }
    }
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
        
        case 'f':
            f();
            break;
        
        case 's':
            return 0;

        default:
            cout << "Invalid mode." << endl;
        }
    }
}