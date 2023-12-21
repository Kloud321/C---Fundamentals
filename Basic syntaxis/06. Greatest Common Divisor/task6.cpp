#include <iostream>

int main() {
    // Read two integer numbers from the console
    int num1, num2;
    std::cin >> num1 >> num2;

    // Ensure that num1 is greater than or equal to num2
    if (num1 < num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Calculate GCD using the Euclidean algorithm
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    // Print the GCD
    std::cout << num1 << std::endl;

    return 0;
}
