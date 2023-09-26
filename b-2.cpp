#include <iostream>
#include <cmath>

int main() {
    double a, b, c;

    // Вводим длины сторон треугольника с клавиатуры
    std::cout << "Введите длину стороны a: ";
    std::cin >> a;
    std::cout << "Введите длину стороны b: ";
    std::cin >> b;
    std::cout << "Введите длину стороны c: ";
    std::cin >> c;

    // Проверяем, существует ли треугольник с такими длинами сторон
    if (a + b > c && a + c > b && b + c > a) {
        // Вычисляем квадраты длин сторон
        double a_squared = a * a;
        double b_squared = b * b;
        double c_squared = c * c;

        // Проверяем, является ли треугольник прямоугольным
        if (a_squared + b_squared == c_squared || a_squared + c_squared == b_squared || b_squared + c_squared == a_squared) {
            std::cout << "1" << std::endl; // Прямоугольный треугольник
        } else {
            // Вычисляем косинусы углов
            double cos_a = (b_squared + c_squared - a_squared) / (2 * b * c);
            double cos_b = (a_squared + c_squared - b_squared) / (2 * a * c);
            double cos_c = (a_squared + b_squared - c_squared) / (2 * a * b);

            // Проверяем, является ли треугольник тупоугольным
            if (cos_a < 0 || cos_b < 0 || cos_c < 0) {
                std::cout << "2" << std::endl; // Тупоугольный треугольник
            } else {
                std::cout << "3" << std::endl; // Остроугольный треугольник
            }
        }
    } else {
        std::cout << "()" << std::endl; // Треугольник не существует
    }

    return 0;
}