#include <iostream>
#include <cmath>
using namespace std;

double distanceToOrigin(double x, double y) {
    return sqrt(x * x + y * y);
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    
    cout << "Введите координаты первой точки (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Введите координаты второй точки (x2, y2): ";
    cin >> x2 >> y2;

    cout << "Введите координаты третьей точки (x3, y3): ";
    cin >> x3 >> y3;

    double distance1 = distanceToOrigin(x1, y1);
    double distance2 = distanceToOrigin(x2, y2);
    double distance3 = distanceToOrigin(x3, y3);

    int closestPoint;
    if (distance1 <= distance2 && distance1 <= distance3) {
        closestPoint = 1;
    } else if (distance2 <= distance1 && distance2 <= distance3) {
        closestPoint = 2;
    } else {
        closestPoint = 3;
    }

    cout << "Ближайшая точка к началу координат: Точка " << closestPoint << endl;

    double area = 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    cout << "Площадь треугольника: " << area << endl;

    return 0;
}
