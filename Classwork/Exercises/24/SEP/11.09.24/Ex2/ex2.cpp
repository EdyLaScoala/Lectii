#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int v[100] = {0};
    ifstream fin("date.in");
    int n, x;
    fin >> x;
    int i=1;
    while(fin >> n)
    {
        if(n==x)
        {
            i++;
        }
        else
        {
            cout << x << " " << i << " ";
            i=1;
            x=n;
        }
    }
}

// txt, sir crescator pana la 1m, fiecare numar pana cand apare 
