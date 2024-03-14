#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");
ofstream fout("bac.out");

void p(int &n)
{
    int a=0, i=1;
    while(n!=0)
    {
        if(n%2==0)
        {
            a=a+i*(n%10);
            i*=10;
        }
        n/=10;
    }
    n=a;
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