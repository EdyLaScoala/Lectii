#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("data.txt");

short appr[26];

int main()
{
    char s[] = {' '};
    int k=0;
    fin.get(s, 255);
    cout << s << endl;
    for(short i=0; i<strlen(s); i++)
    {
        if(++appr[tolower(s[i])-97] > 1)
        {
            cout << "s" << " ";
            i=255;
        }
    }
    for(short i=0; i<26; i++)
    {
        appr[i] = 0;
    }
}