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

    int closestNum1 = arr[0];
    int closestNum2 = arr[1];
    int minDifference = abs(arr[0] - arr[1]);

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            int currentDifference = abs(arr[i] - arr[j]);

            if (currentDifference < minDifference) {
                minDifference = currentDifference;
                closestNum1 = arr[i];
                closestNum2 = arr[j];
            }
        }
    }

    cout <<  minDifference << endl;

    return 0;
}
