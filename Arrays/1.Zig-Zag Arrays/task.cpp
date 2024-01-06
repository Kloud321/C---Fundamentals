//
// Created by Ivan on 6.1.2024 г..
//
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num1[n], num2[n];

    for (int i = 0; i < n; i++) {
        int currentNum1, currentNum2;
        cin >> currentNum1 >> currentNum2;

        // Alternate assignment to num1 and num2 based on the index
        if (i % 2 == 0) {
            num1[i] = currentNum1;
            num2[i] = currentNum2;
        } else {
            num2[i] = currentNum1;
            num1[i] = currentNum2;
        }
    }

    // Output the modified arrays
    for (int i = 0; i < n; i++) {
        cout << num1[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << num2[i] << " ";
    }


    return 0;
}
