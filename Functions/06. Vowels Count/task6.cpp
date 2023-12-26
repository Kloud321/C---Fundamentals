#include <iostream>
#include <cctype>  // For isdigit and isalpha
#include <string>
using namespace std;

bool isPasswordValid(const string& password) {
    // Boolean flag to track whether any errors occurred
    bool hasError = false;

    // Check rule: It should contain 6 – 10 characters (inclusive)
    if (password.length() < 6 || password.length() > 10) {
        cout << "Password must be between 6 and 10 characters" << endl;
        hasError = true;
    }

    // Check rule: It should contain only letters and digits
    if (any_of(password.begin(), password.end(), [](char ch) { return !isalnum(ch); })) {
        cout << "Password must consist only of letters and digits" << endl;
        hasError = true;
    }

    // Check rule: It should contain at least 2 digits
    int digitCount = 0;
    for (char ch : password) {
        if (isdigit(ch)) {
            digitCount++;
        }
    }
    if (digitCount < 2) {
        cout << "Password must have at least 2 digits" << endl;
        hasError = true;
    }

    // Return overall validity based on the flag
    return !hasError;
}

int main() {
    string password;

    cout << "Enter a password: ";
    cin >> password;

    if (isPasswordValid(password)) {
        cout << "Password is valid" << endl;
    }

    return 0;
}
