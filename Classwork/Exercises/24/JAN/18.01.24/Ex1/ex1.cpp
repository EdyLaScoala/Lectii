#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[255]={" "}, s2[255] = {" "};
    int nr=0;
    cin.getline(s, 255);
    char* p;
    p = strtok(s, " ");
    strcpy(s2, p);
    while(p!=0)
    {
        strcpy(s2, p);
        if(strcmp(strrev(s2), p) == 0)
        {
            nr++;
            cout << p << " ";
        }
        p = strtok(NULL, " ");
    }
    cout << endl << nr << endl;
    nr == 0 ? cout << "nu" : cout << endl << nr;
}
