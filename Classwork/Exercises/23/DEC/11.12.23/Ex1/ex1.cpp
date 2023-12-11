#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[] = {"bacalaureat"};
    for(int i=0; i<strlen(s); i++)
    {
        cout << s[i];
        if(isalpha(s[i]))
        {
            strcpy(s+i+1, s+i);
            s[i+1] = s[i]-32;
        }
    }
    cout << s;
    return 0;
}