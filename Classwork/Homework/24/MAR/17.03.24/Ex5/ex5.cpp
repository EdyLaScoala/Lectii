#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

ifstream fin("matrice.in");

bool prim(int& n)
{
    for(short i=2; i<sqrt(n); i++) if(n%i==0) return false;
    return true;
}

int main()
{
    int n=0;
    fin >> n;
    int v[n][n];

    for(int i=0; i<n; i++) for(int j=0; j<n; j++) fin >> v[i][j];

    cout << "Sub. A\n\n";
    
    int min = v[n-1][n-1];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(v[i][j]<min) min = v[i][j];
        }
    }
    cout << min << endl;

    /*
    input:
    5
    56  14  23  42  73
    32  67  81  95  11
    27  18  36  49  62
    88  25  37  53  70
    19  44  62  58  85

*/

    cout << "\nSub. B\n";

    for(int i=0; i<n; i++) for(int j=i; j<n-i-1; j++) if(prim(v[i][j])) cout << v[i][j] << "; ";


    cout << endl << "\nSub. C\n\n";

    int max = v[0][1];

    for(int i=0; i<n/2; i++) for(int j=i; j<-n-i-1; j++) if(v[i][j]>max) max = v[i][j]; cout << max << endl;

    
    cout << "\nSub. D\n\n";
    bool exista = false;
    for(int i=0; i<n; i++) for(int j=i; j<n; j++) if(v[i][j] == 0) cout << "da.", i=n;
    if(!exista) cout << "nu\n";

    return 0;
}