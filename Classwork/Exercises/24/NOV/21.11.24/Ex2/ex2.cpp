#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("date.in");
int mat[100][100];
void combina(int x,int y, int &sum)
{
    sum=x+y;
}
void divizare(int s, int e, int &mij)
{
    mij=(s+e)/2;
}
void dei(int s, int e, int &sum, int i)
{
    if(s==e)
    {
        if(s<i)
        cout << i << ": " << s << endl;
        if(mat[i][s]%2==0)
        sum=mat[i][s];
    }
    else
    {
        int mij,x=0,y=0;
        divizare(s,e,mij);
        dei(s,mij,x,i);
        dei(mij+1,e,y,i);
        combina(x,y,sum);
    }
}
int main()
{
    int i,n,sum=0;
    fin>>n;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            fin>>mat[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        dei(0,n-1,sum,i);
    }
    cout<<sum;
    return 0;
}