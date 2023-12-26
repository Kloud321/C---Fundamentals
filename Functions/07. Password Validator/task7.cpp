#include <iostream>
#include <string>
#include <cctype> 

using namespace std;


bool checkLength(string text) {
    if (text.length() >= 6 && text.length() <= 10) {
        return true;
    }
    return false;
}

bool isAlphaOrDigit(const string& str) {
    for (char ch : str) {
        // Check if the character is not a digit and not an alphabetic character
        if (!isdigit(ch) && !isalpha(ch)) {
            return false;
        }
    }
    return true;
}

void printResult(string str) {
    cout << findTheVowels(str) << endl;
}

int main() {
    string input;

    cin >> input;

    printResult(input);

    return 0;
}
