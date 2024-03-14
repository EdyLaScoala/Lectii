#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");
ofstream fout("bac.out");

void p(int &n)
{
    int a=0;
    while(n!=0)
    {
        if(n%2==0)
        {
            a*=10;
            a+=n%10;
        }
        n/=10;
    }
    n=0;
    while(a!=0)
    {
        n*=10;
        n+=a%10;
        a/=10;
    }
}

int main()
{
    int n;
    while(fin >> n)
    {
        p(n);
        if(n!=0)
            fout << n << endl;
    }
}