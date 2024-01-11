#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[] = {"Am  ingrasat porcul   in  ajun"}, *p;
    p = strtok(s, " ");
    cout << p << endl;
    short words = 0;
    while (p!=0)
    {
        words++;
        cout << p << " - " << &p << endl;
        p = strtok(NULL, " ");
    }
    cout << words;
    return 0;
}