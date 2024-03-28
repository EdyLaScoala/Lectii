#include <iostream>
#include <cstring>
#include <string>

using namespace std;

string MinLexSwap(string s)
{
    char s2[255] = {""};
    strcpy(s2, s.c_str());
    int min=0;
    for(int i=0; i<strlen(s2); i++)
    {
        if(s2[i]<s2[min]) min=i;
    }
    swap(s2[min], s2[0]);
    return s2;
}

int main()
{
    char s[255] = {""};

    cin >> s;


    cout << MinLexSwap(s);

    return 0;
}