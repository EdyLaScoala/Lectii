#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("data.txt");

int main()
{
    bool inWord = false, leftWord = false;
    short words = 0;
    char s[] = {"Am  ingrasat porcul   in  ajun"};
    cout << s << endl;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]!=' ') inWord=true, leftWord=false; else leftWord = true, inWord=false;
        if(!inWord && leftWord) words++;
    }
    cout << words;
    return 0;
}