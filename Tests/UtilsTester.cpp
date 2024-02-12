#include <utilities/utils.hpp>

using namespace std;

int main()
{
    char s[255] = "";
    cin.getline(s, 255);

    strrev(s);

    cout << s;
}