#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[] = {"Salut copile."};
    strcpy(s+2, s+4);
    cout << s;
}