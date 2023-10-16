#include <iostream>
#include <cctype>

int main() {
    char symbol;

    std::cout << "Введите один символ: ";
    std::cin >> symbol;

    if (isdigit(symbol)) {
        std::cout << "DIGIT" << std::endl;
    } else if (isupper(symbol)) {
        std::cout << "CAPITAL" << std::endl;
    } else if (islower(symbol)) {
        std::cout << "LOWERCASE" << std::endl;
    } else {
        std::cout << "NON-ALPHANUMERIC" << std::endl;
    }

    return 0;
}