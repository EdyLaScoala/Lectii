#include <iostream>

using namespace std;

int f(int a, int b)
{
    short ret=0;
    while(a!=0)
    {
        if(a%10==b) ret++; 
        a/=10;
    }
    return ret;
}

int main()
{
    int a=12558842;
    int v[10]={0};
    for(int i=0; i<10; i++) if(f(a, i) % 2 == 0) v[i] = f(a, i);
    for(int i=9; i>=0; i--)  while(v[i]/2!=0) cout << i, v[i]--; 
    for(int i=0; i<=9; i++)  while(v[i]!=0) cout << i, v[i]--;
    return 0;
}