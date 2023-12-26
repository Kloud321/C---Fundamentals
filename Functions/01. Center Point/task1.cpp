#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the distance from the center (0, 0)
double calculateDistance(double x, double y) {
    return sqrt(x * x + y * y);
}

// Function to print coordinates of the point closest to the center
void printClosestPoint(double x1, double y1, double x2, double y2) {
    double distance1 = calculateDistance(x1, y1);
    double distance2 = calculateDistance(x2, y2);

    if (distance1 <= distance2) {
        cout << "(" << x1 << ", " << y1 << ")" << endl;
    } else {
        cout << "(" << x2 << ", " << y2 << ")" << endl;
    }
}

int main() {
    double xFirstP, yFirstP, xSecondP, ySecondP;

    // Read coordinates from the user
    cin >> xFirstP;

    cin >> yFirstP;

    cin >> xSecondP;

    cin >> ySecondP;


    printClosestPoint(xFirstP, yFirstP, xSecondP, ySecondP);

    return 0;
}
