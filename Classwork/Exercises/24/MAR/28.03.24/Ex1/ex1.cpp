#include <iostream>
#include <fstream>

using namespace std;

void aranjare(float v[], int n)
{
    int cont = 0, aux=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]<0)
        {
            swap(v[i], v[cont]);
            cont++;
        } 
    }
    for(int i=0; i<n; i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    ifstream fin("data.txt");
    
    int n=0;
    fin >> n;

    float v[n];
    
    for(int i=0; i<n; i++) fin >> v[i];
    aranjare(v, n);
}