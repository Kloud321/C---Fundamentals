#include <iostream>
#include <iomanip>
using namespace std;

double factorialNum(double num) {
    double result = 1;

    while (num > 0) {
        result *= num;
        num -= 1;
    }

    return result;
}

void printResult(double num1, double num2) {
    double result = factorialNum(num1) / factorialNum(num2);
    cout << fixed << setprecision(2);
    cout << result << endl;
}

int main() {
    double num1, num2;

    cin >> num1 >> num2;

    printResult(num1, num2);

    return 0;
}
