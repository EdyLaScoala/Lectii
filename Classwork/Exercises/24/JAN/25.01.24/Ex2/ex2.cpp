#include <iostream>
#include <cstring>

using namespace std;

void show(char* n)
{
    char v[2*strlen(n)+1];
    for(int i=0; i<strlen(n); i++) v[i] = n[i];
    strcat(v, "*");
    strcat(v, n);

    for(int i=1; i<=strlen(n); i++)
    {
        for(int j=strlen(n)+1-i; j<strlen(n)+i; j++)
        {
            v[j] = '*';
        }
        cout << v << endl;
    }
}

int main()
{
    char n[9];
    cin >> n;
    show(n);
}