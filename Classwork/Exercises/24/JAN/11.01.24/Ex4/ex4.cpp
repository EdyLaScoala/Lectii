#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n)
{
    cout << "prime entered\n";
    int a=0, b=0, c=0, i=0, req = n;
    for(i=2; i<sqrt(n); i++) 
    {
        if(n%i==0)
        {
            return false;
        }
    } 
    cout << "prime " << n << endl;
    while(n>1)
    {
        a *= 10;
        a += n%10;
        n/=10;
    }
    cout << "a << " << a << endl;
    while(a>=1)
    {
        b = i%10;
        if(b<c) return false;
        else
        {
            a/=10;
            c = b;
            b = i%10;
        }
    }
    c=0;
    cout << "exit loop with " << req << endl;
    return true;
}

int main()
{
    int n, check, check2;
    cin >> n;
    check = n, check2 = n;
    
    while(!isPrime(check))
    {
        check++;
    }
    while(!isPrime(check2))
    {
        check2--;
    }
    if(abs(check-n)< abs(check2-n))
    {
        cout << check;
    }
    else
    {
        cout << check2;
    }
}