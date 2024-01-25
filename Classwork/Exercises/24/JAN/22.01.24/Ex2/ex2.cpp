#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ofstream fout("data.txt");
ifstream fin("data.txt");

int main()
{
    char s[255]={" "}, s2[255] = {" "}, temp[255];
    cin.getline(s, 255);
    char* p;
    p = strtok(s, " ");
    strcpy(s2, p);
    strcpy(s2, s);
    while(p!=0)
    {
        strcpy(s2, p);
        if(strlen(p)>2 and strlen(p)%2!=0)
        { 
            strncpy(p+strlen(p)/2, p+strlen(p)/2+1, strlen(p)/2);
            strncpy(p+strlen(p)-1, " ", 1);
        }
        fout << p << " ";
        strcat(s2, p);
        p = strtok(NULL, " ");
    }
    fout.close();
    fin.getline(s, 255);
    fin.close();
    cout << s;
}

//      pictura prin aceea arata o pace profunda