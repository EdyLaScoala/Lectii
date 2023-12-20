#include <iostream>

using namespace std;

int main()
{
    int n, nr, temp, ok=1;
    cin >> n;
    if(n==0)
        cout << 0;
    else
    {
        while(n!=0)
        {
            ok=1;
            n--;
            cin >> nr;
            temp = nr;
            nr=0;
            while(temp!=0 && ok==1)
            {
                if((temp%10)%2!=0)
                {
                    ok=0;
                }
                nr=nr*10+temp%10;
                temp/=10;
            }
            if(ok==1)
            {
                while(nr!=0)
                {
                    cout << nr%10 << nr%10;
                    if(nr%10==0)
                        cout << "00";
                    nr/=10;
                }
                cout << " ";
            }
        }
    }
}