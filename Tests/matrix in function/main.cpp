#include <iostream>

using namespace std;

/*
void read(int m, int n, int v[m][n])
{
    for(int i=0; i<m; i++) for(int j=0; j<n; j++) cin >> v[i][j];
}

int main()
{
    int n;
    cin >> n;
    int v[n][n];
    read(n, n, v);
}

output:

Starting build...
/usr/bin/g++ -fdiagnostics-color=always -g '/workspaces/Lectii/Tests/matrix in function/main.cpp' -o '/workspaces/Lectii/Tests/matrix in function/main'
/workspaces/Lectii/Tests/matrix in function/main.cpp:5:32: error: use of parameter outside function body before ‘]’ token
    5 | void read(int m, int n, int v[m][n])
      |                                ^
/workspaces/Lectii/Tests/matrix in function/main.cpp:5:35: error: use of parameter outside function body before ‘]’ token
    5 | void read(int m, int n, int v[m][n])
      |                                   ^
/workspaces/Lectii/Tests/matrix in function/main.cpp: In function ‘void read(...)’:
/workspaces/Lectii/Tests/matrix in function/main.cpp:7:20: error: ‘m’ was not declared in this scope
    7 |     for(int i=0; i<m; i++) for(int j=0; j<n; j++) cin >> v[i][j];
      |                    ^
/workspaces/Lectii/Tests/matrix in function/main.cpp:7:43: error: ‘n’ was not declared in this scope
    7 |     for(int i=0; i<m; i++) for(int j=0; j<n; j++) cin >> v[i][j];
      |                                           ^
/workspaces/Lectii/Tests/matrix in function/main.cpp:7:58: error: ‘v’ was not declared in this scope
    7 |     for(int i=0; i<m; i++) for(int j=0; j<n; j++) cin >> v[i][j];
      |                                                          ^

Build finished with error(s).
*/


/*####################################################################################################################################*/


/*
int m=0, n=0;
void read(int v[m][n])
{
    for(int i=0; i<m; i++) for(int j=0; j<n; j++) cin >> v[i][j];
}

int main()
{
    cin >> m >> n;
    int v[m][n];
    read(v);
}

output:
Starting build...
/usr/bin/g++ -fdiagnostics-color=always -g '/workspaces/Lectii/Tests/matrix in function/main.cpp' -o '/workspaces/Lectii/Tests/matrix in function/main'
/workspaces/Lectii/Tests/matrix in function/main.cpp:45:18: error: array bound is not an integer constant before ‘]’ token
   45 | void read(int v[m][n])
      |                  ^
/workspaces/Lectii/Tests/matrix in function/main.cpp:45:21: error: array bound is not an integer constant before ‘]’ token
   45 | void read(int v[m][n])
      |                     ^
/workspaces/Lectii/Tests/matrix in function/main.cpp: In function ‘void read(...)’:
/workspaces/Lectii/Tests/matrix in function/main.cpp:47:58: error: ‘v’ was not declared in this scope
   47 |     for(int i=0; i<m; i++) for(int j=0; j<n; j++) cin >> v[i][j];
      |                                                          ^

Build finished with error(s).
*/


/*####################################################################################################################################*/


/*
void read(int &v, int m, int n)                                                                                                                     // <---- POTENTIAL
{
    for(int i=0; i<m; i++) for(int j=0; j<n; j++) cin >> v[&i][&j];
}

int main()
{
    int m=0, n=0;
    cin >> m >> n;
    int v[m][n];
    read(**v, m, n);

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

input:
3 4
1 4 2 5
2 5 6 3
1 5 2 3

output:
4 0 -2013783808 -772416935 
1431655856 21845 1431654688 21845 
-12064 32767 1431655187 21845 

face ea ceva, dar nu stiu ce
*/


/*####################################################################################################################################*/


/*
void read(int &v, int m, int n=1)
{
    for(int i=0; i<m; i++)
    {
        if(n!=1)
        {
            read(v, 1, n);
        }
        else
        {
            cin >> v[i][j];
        }
    }
}

am incercat ceva cu recursive, dar nici eu nu prea reusesc sa inteleg la ce m-am gandit
*/


/*####################################################################################################################################*/


/*
void read(int **v, int m, int n)
{
    for(int i=0; i<m; i++) for(int j=0; j<n; j++) cin >> v[i][j];
}

int main()
{
    int m, n;
    cin >> m >> n;
    int v[m][n];
    read(v, m, n);
}

output:
Starting build...
/usr/bin/g++ -fdiagnostics-color=always -g '/workspaces/Lectii/Tests/matrix in function/main.cpp' -o '/workspaces/Lectii/Tests/matrix in function/main'
/workspaces/Lectii/Tests/matrix in function/main.cpp: In function ‘int main()’:
/workspaces/Lectii/Tests/matrix in function/main.cpp:157:10: error: cannot convert ‘int (*)[n]’ to ‘int**’
  157 |     read(v, m, n);
      |          ^
      |          |
      |          int (*)[n]
/workspaces/Lectii/Tests/matrix in function/main.cpp:147:17: note:   initializing argument 1 of ‘void read(int**, int, int)’
  147 | void read(int **v, int m, int n)
      |           ~~~~~~^

Build finished with error(s).
*/


/*####################################################################################################################################*/


// Tot linia 83 e cea mai promitatoare rezolvare de pana acum