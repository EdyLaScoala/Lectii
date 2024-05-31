#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n=0, x=0;
    cin >> n >> x;

    ofstream fout("bac.txt");
    int nr = n*x - x/2;
    int i=nr;
    while(i>=0)
    {
        fout << i*x-i/2 << " ";
        i--;
    }
    
    return 0;
}