#include <iostream>
#include <fstream>

using namespace std;

int binsrc(int v[], int s, int f, int nr)
{
    int mid = (s+f)/2;
    if(f-s<2) return -1;
    if(v[mid]==nr) return mid;
    else if(v[mid]>nr) return binsrc(v, s, mid-1, nr);
    else return binsrc(v, mid+1, f, nr);
}

int main()
{
    ifstream fin("date.in");
    int n, nr;
    fin >> n >> nr;
    int v[n];
    for(int i=0; i<n; i++) fin >> v[i];
    int pos = binsrc(v, 0, n, nr);
    
    if(pos>=0) cout << pos << endl; else cout << "nu exista";

    return 0;
}