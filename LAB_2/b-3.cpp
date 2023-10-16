#include <iostream>

struct Point {
    float x;
    float y;
};

int main() {
    Point p1, p2, p3, missingPoint;

    std::cout << "Введите координаты первой вершины (x1, y1): ";
    std::cin >> p1.x >> p1.y;
    std::cout << "Введите координаты второй вершины (x2, y2): ";
    std::cin >> p2.x >> p2.y;
    std::cout << "Введите координаты третьей вершины (x3, y3): ";
    std::cin >> p3.x >> p3.y;

    if (p1.x == p2.x) {
        missingPoint.x = p3.x;
    } else if (p1.x == p3.x) {
        missingPoint.x = p2.x;
    } else {
        missingPoint.x = p1.x;
    }

    if (p1.y == p2.y) {
        missingPoint.y = p3.y;
    } else if (p1.y == p3.y) {
        missingPoint.y = p2.y;
    } else {
        missingPoint.y = p1.y;
    }

    std::cout << "Ощибка: (" << missingPoint.x << ", " << missingPoint.y << ")\n";

    return 0;
}
