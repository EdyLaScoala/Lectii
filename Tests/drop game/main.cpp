#include <iostream>
#include <fstream>

using namespace std;

char gameboard[5][6];

void createDefaultTable(unsigned short &col, unsigned short &row)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            gameboard[i][j] = '_';
        }
    }

}


void drawTable(unsigned short &col, unsigned short &row)
{
    for(unsigned short i=0; i<row; i++)
    {
        cout << '|';
        for(unsigned short j=0; j<col; j++)
        {
            cout << gameboard[i][j] << '|';
        }
        cout << endl;
    }
}

int main()
{
    unsigned short col=6, row=5;
    createDefaultTable(col, row);
    drawTable(col, row);
}
