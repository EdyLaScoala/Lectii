#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("bac.in");
    int n=0, impar1, impar2 = 0;

    while(fin >> n)
    {
        if(n%2!=0)
        {
            impar2 = impar1;
            impar1 = n;
        }
    }
    cout << impar2 << " " << impar1;

    return 0;
}