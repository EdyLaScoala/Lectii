#include <iostream>
#include <fstream>

using namespace std;

void swap(bool cond, int &a, int &b)
{
    if(cond)
    {
        int t=a;
        a = b;
        b = t;
    }
}

void sort(int v[], int n)
{
    for(int i=0; i<n-1; i++) for(int j=i+1; j<n; j++) swap((v[i]>v[j]), v[i], v[j]);
}

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

    sort(v, n);

    int pos = binsrc(v, 0, n, nr);
    
    if(pos>=0)
    {
        while(v[pos]==v[pos-1]) pos--;
        cout << pos << endl;
    }
    else cout << "nu exista";

    return 0;
}