#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int n, cont=0;
    char s[255];
    cin.getline(s, n);
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            if(!(s[i-1] == 'a' || s[i-1] == 'e' || s[i-1] == 'i' || s[i-1] == 'o' || s[i-1] == 'u'))
            {
                if(!(s[i+1] == 'a' || s[i+1] == 'e' || s[i+1] == 'i' || s[i+1] == 'o' || s[i+1] == 'u'))
                    cont++;
            }
        }
    }
    cout << cont;
    return 0;
}