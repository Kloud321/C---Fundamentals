#include <iostream>

int main() {
    // Read an integer number from the console
    int number;
    std::cin >> number;

    int originalNumber = number;
    int sum = 0;

    // Calculate the sum of factorials of each digit
    while (number > 0) {
        int digit = number % 10;

        // Calculate the factorial of the digit
        int factorial = 1;
        for (int i = 1; i <= digit; ++i) {
            factorial *= i;
        }

        sum += factorial;
        number /= 10;
    }

    // Check if the number is strong
    if (sum == originalNumber) {
        std::cout <<  "yes" << std::endl;
    } else {
       std::cout <<  "no" << std::endl;
    }

    return 0;
}
