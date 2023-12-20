#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("ania3.txt");

int main()
{
    int nr, temp, nr2, i;
    while(fin >> nr && nr!=0)
    {
        i=0;
        nr2=nr;
        while(nr2!=0)
        {
            i++;
            temp = nr2%10;
            nr2 /= 10;
        }
        if(i%2!=0 && temp%10==nr%10)
        {
            cout << nr << " se incadreaza" << endl;
        }
    }
}