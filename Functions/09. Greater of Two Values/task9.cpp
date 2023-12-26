#include <iostream>
#include <string>
using namespace std;

// Function to compare and return the greater of two integers
int compareAndReturnGreater(int value1, int value2) {
    return (value1 > value2) ? value1 : value2;
}

// Function to compare and return the greater of two characters
char compareAndReturnGreater(char value1, char value2) {
    return (value1 > value2) ? value1 : value2;
}

// Function to compare and return the greater of two strings
string compareAndReturnGreater(const string& value1, const string& value2) {
    return (value1 > value2) ? value1 : value2;
}

int main() {
    string type;
    cin >> type;

    if (type == "int") {

        int value1, value2;
        cin >> value1 >> value2;
        
        int result = compareAndReturnGreater(value1, value2);
        cout << result << endl;

    } else if (type == "char") {

        char value1, value2;
        cin >> value1 >> value2;

        char result = compareAndReturnGreater(value1, value2);
        cout << result << endl;

    } else if (type == "string") {

        string value1, value2;
        cin >> value1 >> value2;

        string result = compareAndReturnGreater(value1, value2);
        cout << result << endl;
    }

    return 0;
}
