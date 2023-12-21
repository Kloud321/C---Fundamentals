#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;
    int counterNegative = 0;
    char sign;

    cin >> num1 >> num2 >> num3;

    if (num1 == 0 || num2 == 0 || num3 == 0) {
        sign = '+';
    } else {
        if (num1 < 0) counterNegative++;
        if (num2 < 0) counterNegative++;
        if (num3 < 0) counterNegative++;
        sign = (counterNegative % 2 == 0) ? '+' : '-';
    }

    // Print the sign of the product
    cout << sign << endl;

    return 0;
}
