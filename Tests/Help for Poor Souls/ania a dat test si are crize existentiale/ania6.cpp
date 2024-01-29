#include <iostream>

using namespace std;

int main()
{
    int n=0, tmp, sumcif = 0; // Variabila tmp va fi folosita pentru descompunerea numarului a[i], ca sa nu distrugem valoarea originala din vector
    cin >> n;
    int a[n];
    int gasit = 0; // Variabila pentru a tine cont de cate ori se gaseste un numar divizibil
    for(int i=0; i<n; i++)
    {
        sumcif = 0;
        cin >> a[i];
        tmp = a[i];
        while(tmp>9)
        {
            sumcif += tmp%10;
            tmp/=10;
        }
        if(a[i] % sumcif == 0)
        {
            for(int j=i; j<n-1; j++) // j merge pana la elementul n-1, deoarece pe elementul n ar incerca sa copieze numere din afara sirului, lucru care ar da erori
            {
                a[j] = a[j+1];
            }
            a[n-gasit] = 0; // Folosim numarul de elemente sterse ca sa setam noul ultim element al acestui sir la 0
        }
    }
    for(int i=0; i<n-gasit; i++)
    {
        cout << a[i] << " ";
    }
}