#include <iostream>
#include <cstring>
#include <utils>

using namespace std;

int main()
{
    char s[255] = {" "};
    cin.getline(s, 255);

    strrev(s);
    
    return 0;
}