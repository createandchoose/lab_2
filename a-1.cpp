#include <iostream>

int main() {
    int number;

    // Вводим число с клавиатуры
    std::cout << "Введите целое число: ";
    std::cin >> number;

    // Проверяем значение числа и выводим соответствующее сообщение
    if (number > 0) {
        std::cout << "POL" << std::endl;
    } else if (number < 0) {
        std::cout << "OTR" << std::endl;
    } else {
        std::cout << "NUL" << std::endl;
    }

    return 0;
}