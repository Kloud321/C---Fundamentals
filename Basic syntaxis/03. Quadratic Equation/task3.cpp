#include <iostream>
#include <cmath>

int main() {
    double a, b, c;

    // Input coefficients
    std::cin >> a >> b >> c;

    // Calculate discriminant
    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        // No real roots
        std::cout << "no roots" << std::endl;
    } else if (discriminant == 0) {
        // One real root
        double root = -b / (2 * a);
        std::cout << root << std::endl;
    } else {
        // Two real roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        std::cout << root1 << " " << root2 << std::endl;
    }

    return 0;
}
