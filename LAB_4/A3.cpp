#include <iostream>
#include <cmath>

double dist(double x1, double y1, double x2, double y2) {
    return std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main() {
    double x1, y1, x2, y2, x3, y3;

    std::cout << "#1 (x1 y1): ";
    std::cin >> x1 >> y1;

    std::cout << "#2 (x2 y2): ";
    std::cin >> x2 >> y2;

    std::cout << "#3 (x3 y3): ";
    std::cin >> x3 >> y3;

    double side1 = dist(x1, y1, x2, y2);
    double side2 = dist(x2, y2, x3, y3);
    double side3 = dist(x3, y3, x1, y1);

    double max_side = std::max(std::max(side1, side2), side3);

    if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2) {
        std::cout << "most long treugolnik: " << max_side << std::endl;
    } else {
        std::cout << "error treugolnik not correct" << std::endl;
        max_side = -1;
    }

    return 0;
}
