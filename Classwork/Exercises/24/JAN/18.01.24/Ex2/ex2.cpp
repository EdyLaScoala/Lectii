/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[255],*p,aux[255];
    bool is_word=false,is_number=false;
    cin.getline(a,255);
    p = strtok(a," ");
    while (p!=NULL)
    {
        is_word = false;
        is_number = false;
        for (int i=0;i<strlen(p);i++)
        {
            if (isdigit(p[i]))
            {
                is_number = true;
            }
            else if (isalpha(p[i]))
            {
                is_word = true;
            }
            aux[i] = p[i];
        }
        if (is_word && is_number)
        {
            for (int i=0;i<strlen(aux);i++)
            {
                if (isdigit(aux[i]))
                {
                    strcpy(aux+i,aux+i+1);
                    i--;
                }
            }
            cout<<aux << " ";
        }
        else 
            cout<<aux << " ";
        p = strtok(NULL," ");
    }
    

    return 0;
}