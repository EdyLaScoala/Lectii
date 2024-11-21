#include <iostream>
#include <fstream>
using namespace std;
int v[100];
void combina(int x, int y, int &sum)
{
    sum=x+y;
}
void divide(int s, int e, int &mij)
{
    mij=(s+e)/2;
}
void dei(int s,int e, int &sum)
{
    if(s==e)
    {
        if(v[s]%2!=0) sum=v[s];
    }
    else
    {
        int mij,x=0,y=0;
        divide(s,e,mij);
        dei(s,mij,x);
        dei(mij+1,e,y);
        combina(x,y,sum);
    }
}
int main()
{
    int sum=0,n,i;
    ifstream fin("date.in");
    fin>>n;
    for(i=0;i<n;i++)
    {
        fin>>v[i];
    }
    dei(0,n-1,sum);
    cout<<sum;

    return 0;
}