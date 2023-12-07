#include <iostream>
#include <cmath>
#include <limits>
#include <vector>

// Вспомогательная функция для вычисления расстояния между двумя точками
double dist(double x1, double y1, double x2, double y2) {
    return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
}

int main() {
    // Ввод массивов x и y
    int n;
    std::cout << "Введите количество точек n: ";
    std::cin >> n;

    std::cout << "Введите массив x из " << n << " вещественных чисел: ";
    std::vector<double> x(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> x[i];
    }

    std::cout << "Введите массив y из " << n << " вещественных чисел: ";
    std::vector<double> y(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> y[i];
    }

    // Инициализация переменной для хранения минимального расстояния
    double minDistance = std::numeric_limits<double>::max();

    // Поиск наименьшего расстояния между всеми парами точек
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            double distance = dist(x[i], y[i], x[j], y[j]);
            if (distance < minDistance) {
                minDistance = distance;
            }
        }
    }

    // Вывод результата
    std::cout << "Наименьшее расстояние между двумя точками: " << minDistance << std::endl;

    return 0;
}
