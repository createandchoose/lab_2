#include <iostream>

int main() {
    int year;

    std::cout << "Введите год (от 1582 до 2200): ";
    std::cin >> year;

    if (year >= 1582 && year <= 2200) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            std::cout << "LEAP" << std::endl; // Год високосный
        } else {
            std::cout << "NORMAL" << std::endl; // Год не високосный
        }
    } else {
        std::cout << "ERROR" << std::endl; // Некоррект
    }

    return 0;
}