#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 0;
    cin >> a >> b;
    int x = 0, y = 0;

    for (int i = a; i <= b; i++) {
        for (int j = i + 1; j <= b; j++) {
            int factorize_i = i;
            int factorize_j = j;
            x = 0, y = 0;

            for (int k = 2; k <= i; k++) {
                while (factorize_i % k == 0) {
                    factorize_i /= k;
                    x++;
                }
            }

            for (int k = 2; k <= j; k++) {
                while (factorize_j % k == 0) {
                    factorize_j /= k;
                    y++;
                }
            }

            if (x == y) {
                cout << i << ", " << j << endl;
            }
        }
    }

    return 0;
}
