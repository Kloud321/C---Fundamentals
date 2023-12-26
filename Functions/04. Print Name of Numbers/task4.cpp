#include <iostream>
#include <string>

using namespace std;

string convertLessThanHundred(int num) {
    if (num == 0) {
        return "";
    } else if (num < 10) {
        return {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}[num - 1];
    } else if (num > 10 && num < 20) {
        return {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"}[num - 11];
    } else {
        return {"ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"}[num / 10 - 1] + ((num % 10 != 0) ? " " + convertLessThanHundred(num % 10) : "");
    }
}

string convertLessThanThousand(int num) {
    if (num == 0) {
        return "";
    } else if (num < 100) {
        return convertLessThanHundred(num);
    } else {
        return {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"}[num / 100 - 1] + " hundred" + ((num % 100 != 0) ? " and " + convertLessThanHundred(num % 100) : "");
    }
}

void printNumberName(int number) {
    if (number >= 0 && number <= 9999) {
        string result;
        if (number == 0) {
            result = "zero";
        } else if (number < 1000) {
            result = convertLessThanThousand(number);
        } else {
            result = convertLessThanThousand(number / 1000) + " thousand" + ((number % 1000 != 0) ? " " + convertLessThanThousand(number % 1000) : "");
        }
        cout << result << endl;
    } else {
        cout << "Number out of range (0-9999)" << endl;
    }
}

int main() {
    int userInput;
    cout << "Enter an integer number (0-9999): ";
    cin >> userInput;
    printNumberName(userInput);

    return 0;
}
