#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

using namespace std;

bool isVowel(char s)
{
    s = tolower(s);
    if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u') return true; else return false;
}

bool isPalindrome(char* s)
{
    for(int i=0; i<strlen(s)/2; i++)
    {
        if(s[i]!=s[strlen(s)-i-1]) return false;
    }
    return true;
}

int main()
{
    char s[255][30];
    short i = 0, len = 0;
    ifstream fin("data.in");
    bool found = false;
    while(fin >> s[i])
    {
        cout << s[i] << " ";
        i++;
    }
    len = i;
    cout << endl << "==================================" << endl;
    for(i=0; i<len; i++)
    {
        for(short j=i+1; j<=len; j++)
        {
            swap(s[j], s[i]);
        }
        if(isPalindrome(s[i]))
        {
            for(int i=0; i<=len; i++)
            {
                for(int j=0; j<strlen(s[i]); j++)
                {
                    if(isVowel(s[i][j])) s[i][j] = '*', found = true;
                }
            }
        }
        cout << s[i] << " ";
    }
    if(!found) cout << endl << "NU EXISTA";

}