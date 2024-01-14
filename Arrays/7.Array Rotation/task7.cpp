#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main() {
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int rotations;

    cin >> rotations;

    for (int i = 0; i < rotations; i++) {
        int temp = arr[0];
        for (int j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
   
    return 0;
}
