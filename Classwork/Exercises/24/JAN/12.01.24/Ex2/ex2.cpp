#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[255] = {" "};
    cin >> s;
    for(int i=0; i<strlen(s)/2; i++)
    {
        if(!(s[i]==s[strlen(s)-i-1])) {cout << "NU"; return 0;}
    }
    cout << "DA";
    return 0;
}