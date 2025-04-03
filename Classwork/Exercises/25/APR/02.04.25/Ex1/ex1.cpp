#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("date.in");
    int n, m, root, a, b, v[10] = {0};
    fin >> n >> m >> root;
    while(fin >> a >> b)
    {
        if(b != root) v[b] = a;
        else if(v[b]==0) v[a] = b;
        else v[a] = b;
    }
    for(int i=1; i<=n; i++) cout << v[i] << " ";
    return 0;
}