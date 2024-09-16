#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
    ifstream fin("date.in");
    int n=0, sum=0;
    fin >> n;
    float x;
    bool first = true;
    while(fin >> x)
    {
        if(int(sqrt(x)) == sqrt(x))
        {
            if(!first) cout << "+" << x;
            else
            {
                cout << x;
                first = false;
            }
            sum += x;
        }
        
    }
    cout << "=" << sum;

    return 0;
}
