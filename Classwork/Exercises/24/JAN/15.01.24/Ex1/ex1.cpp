#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;



void a(char s[])
{
    char* found;
    int calcs = 0;
    found = strstr(s, "calculator");
    while(found != NULL)
    {
        strncpy (found,"cacrulator", 10);
        calcs++;
        found = strstr(s, "calculator");
    }
    
    cout << calcs << endl;;
}

void b()
{
    ifstream fin("data.txt");
    char s[255];
    char *ptr;
    fin >> s;
    while(fin >> s)
    {
        if(strstr(s, "ini") != NULL) cout << s;
        fin >> s;
    }
    fin.close();
}

void c()
{
    ifstream fin("data.txt");
    
}

//{",.;:!?"}

int main()
{
    ifstream fin("data.txt");

    char s[255], s_bckp[255];
    int calculator = 0;
    fin.getline(s, 255);
    strcpy(s_bckp, s);
    a(s);
    strcpy(s, s_bckp);
    b();
    strcpy(s, s_bckp);
    return 0;
}

// sa se afiseze numarul de aparitii ale cuvantului calculator

// sa se afiseze cuvintele care contin secventa ini 

// sa se afiseze inversat fiecare cuvant

// sa se afiseze cuvantul cel mai mic din campul lexicografic

// sa se afiseze toate cuvintele care se termina cu caracterul a

// sa se elimine din vectorul de cuvinte toate cuvintele care au lungimea mai mica sau egala cu 3

// sa se ordoneze alfabetic cuvintele si sa se afiseze rezultatul ordonarii