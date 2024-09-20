#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("bac.in");
    int n, singular = 0;
    int v[1000] = {0};
    while(fin >> n)
    {
        v[n]++;
        if(v[n]%2==1) singular++;
        else singular--;
    }
    if(singular==1 || singular==0) cout << "DA"; else cout << "NU";

    return 0;
}