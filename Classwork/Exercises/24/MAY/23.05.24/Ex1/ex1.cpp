#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("date.in");
    int st=0, dr=1, p=0;
    int m=0;
    int v[100];
    int n;
    cin >> n;
    while(fin >> v[p]) {cout << v[p] << " "; p++;} cout << endl;
    p=0; dr=p;
    while(st<=dr && p==0)
    {
        m=(st+dr)/2;
        if(v[m]==n)
        {
            p=m;
        }
        else
        {
            if(v[m] < n)
            {
                st = m+1;
            }
            else
            {
                dr = m-1;
            }
        }
    }
    if(p!=0) cout << p+1; else cout << "nu apare." << endl;
    return 0;
}