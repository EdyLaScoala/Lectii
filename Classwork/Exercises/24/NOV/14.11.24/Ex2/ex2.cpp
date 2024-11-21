#include <iostream>
#include <fstream>

using namespace std;

int v[10][10];

void div(int a, int b, int &mijloc)
{
    mijloc = (a+b)/2;
}

void dei(int start, int final, int &p, int &q)
{
    int mijloc, temporar;
    if(start == final) // daca pozitiile de start si final sunt identice, ceea ce inseamna ca am ajuns la un element individual in loc de un subsir
    {
        temporar = v[start][q]; // aici, start e egal cu finalul si atunci nu conteaza ce punem, start si final reprezinta indexul elementului in vector
        v[start][q] = v[start][p];
        v[start][p] = temporar; // inlocuim elementele din coloane
        return; // daca se ajunge aici, am ajuns la elemente individuale si nu mai e nevoie sa impartim mai departe sirul
    }

    div(start, final, mijloc); // mijlocul e egal cu media aritmetica a pozitiilor

    dei(start, mijloc, p, q); // facem aceeasi chestie recursiv in prima jumatate a sirului
    dei(mijloc+1, final, p, q); // apoi trecem in a doua parte a sirului, cu mijloc+1, ca sa nu repetam elementul si sa intram intr-o bucla infinita
}

int main()
{
    int n, q, p;
    ifstream fin("date.in");
    fin >> n >> q >> p;
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) fin >> v[i][j];
    dei(0, n, p, q);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++) cout << v[i][j] << " ";
        cout << endl;
    }
    return 0;
}