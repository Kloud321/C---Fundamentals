#include <iostream>
using namespace std;

int main() {
    const int size = 10; // Specify the size of the array

    int array[size]; // Declare an array of size 10

    for (int i = 0; i < 11; i++) {
        cin >> array[i];
        
    }

    // This prints the address of the array, not the elements
    // If you want to print all elements, you need another loop
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
