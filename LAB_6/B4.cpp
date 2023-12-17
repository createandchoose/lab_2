#include <iostream>
#include <vector>
#include <cmath>
#include <limits>

struct Point {
    int x;
    double y;
};

double area(const Point& p1, const Point& p2, const Point& p3) {
    return std::abs((p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y)) / 2.0);
}

int main() {
    int n;
    std::cout << "kolichestvo tochek: ";
    std::cin >> n;

    std::vector<Point> points(n);

    std::cout << "voot (x, y):" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << "tochka " << i + 1 << ": ";
        std::cin >> points[i].x >> points[i].y;
    }

    double minArea = std::numeric_limits<double>::max();
    Point p1, p2, p3;

    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                double currentArea = area(points[i], points[j], points[k]);
                if (currentArea < minArea) {
                    minArea = currentArea;
                    p1 = points[i];
                    p2 = points[j];
                    p3 = points[k];
                }
            }
        }
    }

    std::cout << "3 tochki, min:" << std::endl;
    std::cout << "(" << p1.x << ", " << p1.y << ")" << std::endl;
    std::cout << "(" << p2.x << ", " << p2.y << ")" << std::endl;
    std::cout << "(" << p3.x << ", " << p3.y << ")" << std::endl;
    std::cout << "min ploshad triangle: " << minArea << std::endl;

    return 0;
}