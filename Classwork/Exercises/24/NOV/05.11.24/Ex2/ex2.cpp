#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("date.in");
    int n, s=0, f, nr;
    fin >> n >> nr;
    f = n;
    int v[n];
    for(int i=0; i<n; i++) fin >> v[i];
    int pos = n/2;
    
    while(v[pos]!=nr && f-s>=2)
    {
        if(v[pos]>nr) f = pos;
        else if(v[pos]<nr) s = pos;
        pos = (s+f)/2;
    }

    if(f-s>=2) cout << pos << endl; else cout << "nu exista" << endl;

    return 0;
}