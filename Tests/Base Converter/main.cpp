#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int baza, n;
    cout << "Enter the baza of the number: ";
    cin >> baza;

    cout << "Enter the number to convert: ";
    cin >> n;

    int n2 = 0, i = 0;

    while (n != 0) {
        n2 += (n % 10) * pow(baza, i);
        n /= 10;
        i++;
    }
    cout << n2;
    /*
    int convertedValue = 0;
    int placeValue = 1;

    while (n2 != 0) {
        convertedValue += (n2 % 10) * placeValue;
        n2 /= 10;
        placeValue *= 10;
    }

    cout << "The converted value is: " << convertedValue << endl;

*/
    return 0;
}
