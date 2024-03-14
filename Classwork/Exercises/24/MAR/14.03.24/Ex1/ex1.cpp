#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");
ofstream fout("bac.out");

void p(int &n, int c)
{
    int a=0, i=1;
    while(n!=0)
    {
        if(n%10!=c)
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
        for(int i=1; i<10; i+=2)
            p(n, i);
        if(n!=0)
            fout << n << endl;
    }
}