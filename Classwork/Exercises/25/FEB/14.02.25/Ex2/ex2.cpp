#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s1[100], s2[100];
    strcpy(s1, "bac2021");
    cout << strlen(s1) << endl;
    strcpy(s2, s1+3); strcpy(s2+2, "20-");
    strcat(s2, s1+3);
    cout << s2 << endl;
}