#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream fin("data.txt");

int main()
{
    string a = "nu";
    int n;
    char s[n], c;
    fin.getline(s, n);
    fin >> c;
    cout << "{0} nu e. bun", a;
    return 0;
}