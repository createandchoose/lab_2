#include <iostream>

int main() {
    int number;

    std::cout << "Введите целое число: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "POL" << std::endl;
    } else if (number < 0) {
        std::cout << "OTR" << std::endl;
    } else {
        std::cout << "NUL" << std::endl;
    }

    return 0;
}