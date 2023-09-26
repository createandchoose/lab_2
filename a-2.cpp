#include <iostream>
#include <cctype>

int main() {
    char symbol;

    // Вводим символ с клавиатуры
    std::cout << "Введите один символ: ";
    std::cin >> symbol;

    // Проверяем тип символа и выводим соответствующее сообщение
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