#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bac.in");

int main() {
    int n, m;
    fin >> n >> m;

    int matrix[100][100], sums[100]={0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            fin >> matrix[i][j];
            sums[i] += matrix[i][j];
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sums[i] > sums[j]) {
                for (int k = 0; k < m; k++) {
                    swap(matrix[i][k], matrix[j][k]);
                }
                swap(sums[i], sums[j]);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
