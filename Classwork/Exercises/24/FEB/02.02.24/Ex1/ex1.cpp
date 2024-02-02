#include <iostream>

using namespace std;

int suma(int& n, int& a)
{
    int s=0;
    while(n!=0)
    {
        if(n%10==a) 
        {
            s+=a; 
        }
        n/=10;
    }
    cout << s << endl;
    return s;
}



int main()
{
    int n=0, a=0, k=0;
    cin >> n;
    cin >> a;
    k = suma(n, a);
    if(k != 0)
    {
        cout << "Suma: " << k; 
    } 
    else 
    {
        cout << "Nu exista.";
    }
    return 0;
}
