#include <iostream>

using namespace std;

int main() {
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int mostFrequent = arr[0]; // Assume the first element is the most frequent
    int maxFrequency = 1; // Initialize max frequency to 1 (at least one occurrence)

    for (int i = 0; i < size; i++) {
        int currentFrequency = 1; // Frequency of the current element

        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                currentFrequency++;
            }
        }

        if (currentFrequency > maxFrequency) {
            mostFrequent = arr[i];
            maxFrequency = currentFrequency;
        }
    }

    cout << mostFrequent << endl;

    return 0;
}
