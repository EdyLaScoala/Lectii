#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream fin("data.txt");

int main()
{
    char s[5];
    fin.get(s, 100);
    for(int i=0; i<5; i++)
    {
        cout << s[i];
    }
    return 0;
}