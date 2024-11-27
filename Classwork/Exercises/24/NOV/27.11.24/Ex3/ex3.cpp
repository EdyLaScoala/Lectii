#include <iostream>
#include <fstream>

using namespace std;

int n;

void dei( int v[10][10],int s,int d, int &m) 
{ 
    int max1,max2; 
    if(s==d) 
    { 
        max1=v[s][1]; 
        for(int j=0; j<n; j++)
        if (max1<v[s][j]) 
            max1=v[s][j]; 
        m=max1; 
    } 
    else 
    { 
        int mij =(s+d)/2; 
        dei(v,s,mij,max1); 
        dei(v,mij+1,d,max2); 
        if(max1>max2) 
            m=max1; 
        else 
            m=max2; 
    } 
} 
int main () 
{ 
    int v[10][10], maxim = 99999999;
    ifstream fin("date.in");
    fin >> n;
    for(int i=0; i<n; i++) for(int j=0; j<n; i++) fin >> v[i][j]; 
    dei(v, 0, n-1, maxim); 
    cout<<"maxim="<<maxim; 
 
    return 0; 
} 