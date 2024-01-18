#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[255],*p,aux[255];
    bool is_word=false,is_number=false;
    short val = 0;
    cin.getline(a,255);
    p = strtok(a," ");
    while (p!=NULL)
    {
        is_word = false;
        is_number = false;
        
        for(int i=0; i<strlen(p); i++)
        {
            val += p[i];
        }
        if(val < strlen(p)*65)
        {

        }

        p = strtok(NULL," ");
    }
}

// ana are mere 23 de pere