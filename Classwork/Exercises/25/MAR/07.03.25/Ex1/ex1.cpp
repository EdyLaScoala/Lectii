#include <iostream>
#include <fstream>

using namespace std;

// Roy-Floyd algorithm

const int MAX = 100;
const int INF = 9999;

int n, a[MAX][MAX], d[MAX][MAX];

void read_data() {
    ifstream in("royfloyd.in");
    in >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            in >> a[i][j];
            if (a[i][j] == 0)
                a[i][j] = INF;
        }
    in.close();
}

void roy_floyd() {
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            d[i][j] = a[i][j];
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (d[i][j] > d[i][k] + d[k][j])
                    d[i][j] = d[i][k] + d[k][j];
}

void write_data() {
    ofstream out("royfloyd.out");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            if (d[i][j] == INF)
                out << "0 ";
            else
                out << d[i][j] << " ";
        out << endl;
    }
    out.close();
}

int main() {
    read_data();
    roy_floyd();
    write_data();
    return 0;
}