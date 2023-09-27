#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;

    cout << "Введите длину стороны a: ";
    cin >> a;

    cout << "Введите длину стороны b: ";
    cin >> b;

    if (a <= 0 || b <= 0) {
        cout << "Ошибка! Введите корректные положительные числа." << endl;
        return 1;
    }

    double perimeter = 2 * (a + b);
    double diagonal = sqrt(a * a + b * b);

    cout << "Периметр прямоугольника: " << perimeter << endl;
    cout << "Длина диагонали прямоугольника: " << diagonal << endl;

    return 0;
}