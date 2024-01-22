#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[255]={" "}, s2[255] = {" "};
    cin.getline(s, 255);
    char* p;
    p = strtok(s, " ");
    strcpy(s2, p);
    strcpy(s2, s);
    while(p!=0)
    {
        strcpy(s2, p);
        //cout << p << endl;
        strncpy(p+strlen(p)/2, p+strlen(p)/2+1, strlen(p)/2);
        cout << p << " ";
        strcat(s2, p);
        p = strtok(NULL, " ");
    }
    cout << s2;
}

//      pictura prin aceea arata o pace profunda