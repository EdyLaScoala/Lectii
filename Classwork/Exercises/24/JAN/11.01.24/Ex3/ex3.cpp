#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream fin("data.txt");

int main()
{
    int n;
    fin >> n;
    char s[n];
    cin.getline(s, n);
    for(int i=0; i<n; i++)
    {
        cout << s[i];
    }
    return 0;
}