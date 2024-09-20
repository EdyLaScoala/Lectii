#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

bool isVowel(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true; else return false;
}

int main()
{
    ifstream fin("date.in");
    int n, k, cont=0;
    fin >> n >> k;
    char v[20][10] = {0};
    bool exists[20] = {0};
    for(int i=0; i<n; i++)
    {
        fin >> v[i];
        if(isVowel(v[i][strlen(v[i])-1]))
        {
            k--;
            exists[i] = true;
        }
    }
    cout << endl;
    if(k<=0)
    {
        for(int i=0; i<n; i++)
        {
            if(exists[i]) cout << v[i] << endl;
        }
    }
}