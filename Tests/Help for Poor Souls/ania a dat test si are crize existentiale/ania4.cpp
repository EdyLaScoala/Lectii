#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("ania4.txt");

int main()
{
    int a=0, b=0, n=0, x=0, y=0, r=0, coprim=0;
    fin >> n;
    fin >> b;
    n--;
    while(n!=0)
    {
        fin >> a;
        x=b, y=a, coprim=1;
        for(int i=2; i<min(x, y); i++)
        {
            if(x%i==0 && y%i==0)
            {
                i=x;
                coprim=0;
            }
        }
        if(coprim==1)
        {
            cout << a << " " << b << endl;
        }
        b=a;
        n--;
    }
}