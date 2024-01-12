#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[] = {"Daca incep cu litera i, sa se scrie pe ecran iterat cuvantul succes."}, *p, str[255] = {" "};
    p = strtok(s, " ");
    while(p!=0)
    {
        p = strtok(NULL, " .,:;!?");
        strcpy(str, p);
        if(p[0]=='i'){
            strcpy(str, " succes ");
        }
    }
    cout << str;
    return 0;
}
//255 char + cuvant c, print(cuvinte.sufix(c));