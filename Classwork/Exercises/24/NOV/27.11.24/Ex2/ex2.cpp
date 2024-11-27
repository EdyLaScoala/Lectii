#include <iostream>
#include <fstream>

using namespace std;

int dei(int st, int dr)
{
    if(st==dr)
    {
        return 1;
    }
    else
    {
        int mid = (st+dr)/2;
        return dei(st, mid) && dei(mid+1, dr);
    }
}

int main()
{
    ifstream fin("vector.in");
    int n, v[100];
    fin >> n;
    for(int i=0; i<n; i++) fin >> v[i];
    if(dei(0, n-1)) cout << "DA"; else cout << "NU";
    return 0;
}