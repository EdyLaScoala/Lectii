#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

void space()
{
    cout << endl << endl << endl;
}

void descompunere()
{
    int n = 0;
    cout << "Va rugam introduceti un numar: ";
    cin >> n;
    int n2 = 0;
    while(n>0)
    {
        n2 *= 10;
        n2 += n%10;
        n/=10;
    }
    while(n2>0)
    {
        cout << n2%10 << " ";
        n2/=10;
    }
    space();
}

void invers()
{
    int n = 0;
    cout << "Va rugam introduceti un numar: ";
    cin >> n;
    int n2 = 0;
    while(n!=0)
    {
        n2 *= 10;
        n2 += n%10;
        n/=10;
    }
    cout << n2;
    space();
}

int main(){
    unsigned short cmd = 0;
    
    while(true)
    {
        cout << "Please enter a command ID: ";
        cin >> cmd;
        switch (cmd)
        {
        case 0:
            space();
            return 0;
            break;

        case 1:
            descompunere();
            break;

        case 2:
            invers();
            break;
        
        default:
            cout << "Unknown commmand ID. Please try again.\n";
        }
    }
    
}
