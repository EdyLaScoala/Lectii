#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("numere.in");
    int n, nr=0, nr2=0; 
    int max=0, cfm;
    while(fin >> n)
    {
        if(n/10>n%10) cfm=n/10; else cfm=n%10; 
        if(max<cfm) 
        {
            max=cfm;
            nr=n;
        }
        if(max==cfm)
        {
            nr2=n;
        }
    }
    if(nr!=nr2)cout << nr  << " " << nr2; else cout << "nu exista";
}