#include <iostream>
#include <array>

using namespace std;

int main() {
    int size, sum = 0, average;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    average = sum / size;

    for (int i = 0; i < size; i++) {
        if (arr[i] >= average) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
