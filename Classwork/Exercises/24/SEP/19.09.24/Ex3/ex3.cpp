#include <iostream>
#include <cstring>

using namespace std;

bool isVowel(char& c)
{
    if(strchr(c, "aeiou")) return true;
}

int main()
{
    char v[255];
    cin.getline(v, 255);
    for(int i=strlen(v); i>0; i--)
    {
        if(isVowel(v[i]))
    }
}