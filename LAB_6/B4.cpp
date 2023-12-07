#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// Структура для представления точки (xi, yi)
struct Point {
    int x;
    double y;
    
    Point(int x, double y) : x(x), y(y) {}
};

// Функция для вычисления площади треугольника по координатам его трех точек
double area(const Point& p1, const Point& p2, const Point& p3) {
    return abs((p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y)) / 2.0);
}

// Функция для поиска трех точек с заданной площадью треугольника
void findPointsWithArea(const vector<Point>& points, double targetArea) {
    int n = points.size();
    Point p1 = points[0], p2 = points[1], p3 = points[2];
    double minArea = area(p1, p2, p3);

    // Перебираем все тройки точек и находим треугольник с заданной площадью
    for (int i = 0; i < n - 2; ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                double currentArea = area(points[i], points[j], points[k]);
                if (abs(currentArea - targetArea) < abs(minArea - targetArea)) {
                    minArea = currentArea;
                    p1 = points[i];
                    p2 = points[j];
                    p3 = points[k];
                }
            }
        }
    }

    // Выводим результат
    cout << "Треугольник с ближайшей площадью к " << targetArea << ":\n";
    cout << "(" << p1.x << ", " << p1.y << ")\n";
    cout << "(" << p2.x << ", " << p2.y << ")\n";
    cout << "(" << p3.x << ", " << p3.y << ")\n";
    cout << "Фактическая площадь: " << minArea << endl;
}

int main() {
    // Вводим количество точек
    int n;
    cout << "Введите количество точек: ";
    cin >> n;

    // Вводим координаты точек
    vector<Point> points;
    for (int i = 0; i < n; ++i) {
        int x;
        double y;
        cout << "Введите координаты точки " << i + 1 << " (x y): ";
        cin >> x >> y;
        points.push_back(Point(x, y));
    }

    // Вводим значение площади
    double targetArea;
    cout << "Введите значение площади треугольника: ";
    cin >> targetArea;

    // Вызываем функцию поиска треугольника с ближайшей площадью
    findPointsWithArea(points, targetArea);

    return 0;
}
