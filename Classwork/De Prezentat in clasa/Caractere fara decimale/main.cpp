#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[] = {"am 12 cai si 3,4 gaini"};
    int done=0, j=0;
    int k=2;
    for(int i=0; i<strlen(s); i++)
    {
        j=i;
        while(isdigit(s[j]))
        {
            if(s[j+1]==',')
            {
                k=2;
                while(isdigit(s[j+k]))
                {
                    k++;
                }
                i+=k;
            }
            j++;
        }
        cout << s[i];
    }
}
