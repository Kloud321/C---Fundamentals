#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int arr[N];
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }

    int currentElement = arr[0];
    int currentCount = 1;
    int maxElement = arr[0];
    int maxCount = 1;

    for (int i = 1; i < N; ++i) {
        if (arr[i] == currentElement) {
            currentCount++;
        } else {
            currentElement = arr[i];
            currentCount = 1;
        }

        if (currentCount >= maxCount) {
            maxElement = currentElement;
            maxCount = currentCount;
        }
    }

    // Print the longest sequence
    for (int i = 0; i < maxCount; ++i) {
        std::cout << maxElement << " ";
    }

    return 0;
}
