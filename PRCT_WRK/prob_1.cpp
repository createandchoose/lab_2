#include <iostream>
using namespace std;

int main() {
    double side;

    cout << "Введите длину стороны куба (x > 0): ";
    cin >> side;

    if (side <= 0) {
        cout << "Ошибка! Введите корректное положительное число." << endl;
        return 1;
    }

    double perimeter = 12 * side;
    double surface_area = 6 * side * side;

    cout << "Периметр куба: " << perimeter << endl;
    cout << "Площадь поверхности куба: " << surface_area << endl;

    return 0;
}