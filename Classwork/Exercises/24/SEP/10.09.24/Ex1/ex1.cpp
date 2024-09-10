#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    bool found = false;
    ifstream fin("nr.txt");
    int v[10000] = {0}, n;
    
    while(fin >> n) 
    {
        if(n > 99) 
        {
            v[n]++;
            found=true;
        }
    }
    
    if(!found) 
    {
        cout << "nu exista";
        return 0;
    }
    for(int i=0; i<10000; i++)
    {
        while(v[i]>0)
        {
            cout << i << " ";
            v[i]--;
        } 
    }
    return 0;
}