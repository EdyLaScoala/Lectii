#include <iostream>
#include <math.h>

using namespace std;

int n, p[100];
bool exists = false;

struct elem
{
    int x, y;
};

elem v[100];
elem d[9] = {{0, 0}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}, {-2, 1}};   

void init(int k)
{
    p[k] = 0;
}

void print()
{
    exists = true;
    for(int i=1; i<n*n; i++)
    {
        cout << v[i].x << "; " << v[i].y << "   ";
    }
    cout << endl;
}

bool isValid(int k)
{
    if(v[k].x < 1 || v[k].y < 1 || v[k].x > n || v[k].y > n) return 0;
    for(int i=1; i<k; i++)
        if(v[i].x == v[k].x && v[i].y == v[k].y) return false;
    return true;
}

bool hasSuccesor(int k)
{
    if(p[k]<8)
    {
        p[k]++;
        v[k].x = v[k-1].x + d[p[k]].x;
        v[k].y = v[k-1].y + d[p[k]].y;
        return true;
    }
    else return false;
}

bool isSolution(int k)
{
    return k==n*n;
}

void backtrack(int k)
{
    init(k);
    while(hasSuccesor(k))
            if(isValid(k))
                if(isSolution(k)) print();
                else backtrack(k+1);
    
}

int main()
{
    cin >> n;
    cin >> v[1].x >> v[1].y;
    backtrack(2);
    return 0;
}