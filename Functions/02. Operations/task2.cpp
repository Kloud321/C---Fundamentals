#include <iostream>
using namespace std;

double calculator(double num1, double num2, char symbol) {
    double result = 0;
    switch (symbol) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
    }
    return result;
}

void printResult(double num1, double num2, char symbol) {
    double result = calculator(num1, num2, symbol);
    cout << result << endl;
}

int main() {
    double num1, num2;
    char symbol;

    cin >> num1 >> num2 >> symbol;

    printResult(num1, num2, symbol);

    return 0;
}
