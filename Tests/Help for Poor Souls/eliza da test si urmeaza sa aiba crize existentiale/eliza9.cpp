#include <iostream>

using namespace std;

int main()
{
    int n=1;
    cin >> n;
    int max = n;
    while(n!=0)
    {
        cin >> n;
        if(n>max && n!=0) max=n;
    }
    cout << max;
}