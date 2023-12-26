#include <iostream>
#include <cctype>  // For isdigit and isalpha
#include <string>
#include <vector>
using namespace std;

bool isPasswordValid(const string& password) {
    // Vector to store error messages
    vector<string> errorMessages;

    // Check rule: It should contain only letters and digits
    for (char ch : password) {
        if (!isalnum(ch)) {
            errorMessages.push_back("Password must consist only of letters and digits.");
            // No return here to continue checking other conditions
        }
    }

    // ... (other rules, each with a push_back if condition is not met)

    // Print error messages and return validity
    if (!errorMessages.empty()) {
        for (const string& message : errorMessages) {
            cout << message << endl;
        }
        return false;
    }

    // If no errors, return true
    return true;
}

int main() {
    string password;
    cout << "Enter a password: ";
    cin >> password;

    if (isPasswordValid(password)) {
        cout << "Password is valid." << endl;
    } else {
        cout << "Password is not valid." << endl;
    }

    return 0;
}
