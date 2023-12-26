#include <iostream>
#include <cmath>
using namespace std;

int multiplySumOddEvenDigits(int num) {
    num = abs(num);

    int sumOdd = 0;   // Initialize sumOdd to zero
    int sumEven = 0;  // Initialize sumEven to zero

    while (num > 0) {
        int currentDigit = num % 10;

        if (currentDigit % 2 == 0) {
            sumEven += currentDigit;
        } else {
            sumOdd += currentDigit;
        }

        num /= 10;
    }

    return sumEven * sumOdd;
}


// Function to print coordinates of the point closest to the center
void printResultt(int num) {

    cout << multiplySumOddEvenDigits(num) << endl; 
}

int main() {
    int num;

    // Read coordinates from the user
    cin >> num;

   
    printResultt(num);

    return 0;
}
