#include <iostream>

using namespace std;

void cnt_cif(int n, int k, int& c)
{
    if(n!=0)
    {
        if(n%10>=k)
        {
            c++;
        }
        cnt_cif(n/10, k, c);
    }
}

int main()
{
    int n=0;
    cin >> n;
    int c=0;
    cnt_cif(n, 4, c);
    cout << c;

    return 0;
}