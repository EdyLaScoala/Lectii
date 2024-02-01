//algoritm pentru trecerea unei valori din orice baza in baza 10, trecerea din orice abza in baza 2, compunerea unei valori dintr-o sucesiune de max. 9 cifre date - valoarea incepe cu cifra unitatilor, 

#include <iostream>
#include <cstring>
#include <math.h>
#include <stdlib.h>

using namespace std;

void space()
{
    cout << endl << endl;
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

bool palindrom()
{
    char s[10];
    cout << "Va rugam introduceti un numar: ";
    cin >> s;
    for(int i=0; i<strlen(s)/2; i++)
    {
        if(s[i] != s[strlen(s)-i-1])
        {
            space();
            cout << "Numarul nu este palindrom.";
            return false;
        }
    }
    cout << "Numarul este palindrom.";
    space();
    return true;
}

void divizori()
{
    int n = 0;
    cout << "Va rugam introduceti un numar: ";
    cin >> n;
    for(int i=2; i<n/2+1; i++)
        if(n%i==0) cout << i << " ";
    space();
}

bool prim()
{
    int n;
    cout << "Va rugam introduceti un numar: ";
    cin >> n;
    for(int i=2; i<sqrt(n); i++)
    {
        if(n%i==0)
        {
            cout << "Numarul nu este prim.";
            space();
            return false;
        }
    }
    cout << "Numarul este prim.";
    space();
    return true;
}

void factoriPrimi()
{
    int n=0, n2=0;
    cout << "Va rugam introduceti un numar: ";
    cin >> n;
    n2=n;
    for(int i=2; i<sqrt(n2); i++)
    {
        while (n%i==0)
        {
            cout << i << " ";
            n/=i;
        }
    }
    space();
}

void cmmdc()
{
    int a, b, r, cmmmc, cmmdc;
    cout << "Introduceti doua numere, a si b: ";
    cin >> a >> b;
    cout << endl;
    while(b!=0 && a%b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    cmmdc = r;
    cout << cmmdc;
    space();
}

void cmmmc()
{
    int a, b, r, cmmmc;
    cout << "Introduceti doua numere, a si b: ";
    cin >> a >> b;
    cout << endl;
    while(b!=0 && a%b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    cout << cmmmc;
    space();
}

void fromBaseXToBase10()
{
   int baza, n;
    cout << "Introduceti un numar: ";
    cin >> n;

    cout << "Introduceti baza numarului: ";
    cin >> baza;


    int n2 = 0, i = 0;

    while (n != 0) {
        n2 += (n % 10) * pow(baza, i);
        n /= 10;
        i++;
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
            cout << "Stopping... " << endl << endl;
            return 0;
            break;

        case 1:
            descompunere();
            break;

        case 2:
            invers();
            break;

        case 3:
            palindrom();
            break;

        case 4:
            divizori();
            break;

        case 5:
            prim();
            break;

        case 6:
            factoriPrimi();
            break;

        case 7:
            cmmdc();
            break;

        case 8:
            cmmmc();
            break;

        case 9:
            fromBaseXToBase10();
            break;

        

        default:
            cout << "Unknown commmand ID. Please try again.\n";
        }
    }
}
