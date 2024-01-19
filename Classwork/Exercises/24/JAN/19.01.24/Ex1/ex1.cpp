#include <math.h>
#include <iostream>

using namespace std;

bool isPrime(int &n)
{
    for(int i=2; i<sqrt(n); i++)
    {
        if(n%i==0) return false;
    }
    //cout << "Prime: " << n << endl;
    return true;
}

int main()
{
    int n, max1=0, max2=0;
    while(cin >> n && n!=0)
    {
        if(isPrime(n))
        {
            if(n>max1) max2=max1, max1=n;
            else if(n>max2) max2=n;
            //cout << "Max1, 2: " << max1 << ",  " << max2 << endl;
        }
    }
    if(!(max1==max2 && max1==0)) cout << max1 << ", " << max2 << endl; else cout << "Nu exista." << endl;
}

// 911 5 12 452 131 70 149 17 509 25 87 438 0

// 5 12 452 131 70 149 17 509 25 87 438 0