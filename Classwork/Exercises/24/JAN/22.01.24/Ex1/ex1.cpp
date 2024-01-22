#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

bool isVowel(char s)
{
    s = tolower(s);
    // cout << "s: " << s << endl;
    if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u') return true; else return false;
}

ofstream fout("data.txt");
ifstream fin("data.txt");

int main()
{
    char s[255] = {"CASANT"};
    for(int i=0; i<strlen(s); i++)
    {
        fout << s[i];
        if(!isVowel(s[i]))
        {
            for(int j=0; j<6; j++)
            {
                if(isVowel(s[i]-j))
                {
                    fout << char(toupper(s[i]-j)); 
                    j=6;
                } 
                else if(isVowel(s[i]+j))
                {
                    fout << char(toupper(s[i]+j));
                    j=6;
                }
            }
        }
    }
    fout.close();
    fin >> s;
    cout << s;
}