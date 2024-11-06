#include <fstream>

using namespace std;

ofstream fout("data.out");

int main()
{
    for(int i = 1; i<1001; i++)
    {
        fout << i << " ";
    }
}