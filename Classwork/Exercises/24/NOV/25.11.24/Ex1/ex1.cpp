#include <iostream>
#include <fstream>

using namespace std;

int n, v[1000];

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void quicksort(int s, int f)
{
    int piv = v[f];
    if(s>=f) return;
    for(int i=s; i<f; i++) if(v[i]>v[piv]) swap(v[i], v[piv]);
    quicksort(s, piv);
    quicksort(piv+1, f);
}

int main()
{
    ifstream fin("date.in");
    fin >> n;
    for(int i=0; i<n; i++) fin >> v[i]; 
    for(int i=0; i<n; i++) cout << v[i] << " ";
    cout << endl;
    quicksort(0, n-1);
    cout << "am ajuns aici" << endl;
    for(int i=0; i<n; i++) cout << v[i] << " ";
    return 0;
}