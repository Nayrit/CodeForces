#include <bits/stdc++.h>

double quadcopter_area(int radius) {
    double width = 2.0 * radius;
    double length = sqrt(2.0) * (4.0 * radius);  // D = 4 * radius
    double area = width * length;
    return area;
}

int main() {
    int T;
    std::cin >> T;  // Number of test cases

    for (int i = 0; i < T; ++i) {
        int X;
        std::cin >> X;  // Radius of the propellers
        double result = quadcopter_area(X);
        std::cout << std::fixed << std::setprecision(9) << result << std::endl;  // Print the result with 9 decimal places
    }

    return 0;
}
