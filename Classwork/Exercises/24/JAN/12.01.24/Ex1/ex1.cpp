#include <iostream>
#include <fstream>
#include <cstring>



using namespace std;

int main()
{
    char s[20] = {" "};
    char suf[20] = {" "};
    unsigned short k, words = 0, k2;
    cin >> k;
    k2=k;
    ifstream fin("data.txt");
    while(fin >> s)
    {
        k--;
        if(k==0) strcpy(suf, s);
        strcpy(s, " ");
        words++;
    }
    fin.close();
    cout << "sufix: " << suf << endl;
    ifstream fin2("data.txt");
    bool sufix = true;
    for(int i=0; i<=words; i++)
    {
        sufix = true;
        fin2 >> s;
        for(int j=0; j<strlen(suf) && sufix; j++)
        {
            if(s[strlen(s)-j]!=suf[strlen(suf)-j])sufix = false;
            //cout << s[strlen(s-j)] << " == " << suf[strlen(suf-j)] << endl;
        }
        if(sufix) cout << s << " ";
    }
}