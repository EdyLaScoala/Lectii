#include <iostream>

using namespace std;

int main()
{
    int n=1;
    cin >> n;
    int min = n;
    while(n!=0)
    {
        cin >> n;
        if(n<min && n!=0) min=n;
    }
    cout << min;
}