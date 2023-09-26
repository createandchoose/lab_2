#include <iostream>

int main() {
    int age;

    // Вводим возраст с клавиатуры
    std::cout << "Введите возраст: ";
    std::cin >> age;

    // Проверяем возраст и выводим соответствующее сообщение
    if (age >= 1 && age < 100) {
        // Определяем правильное слово для возраста
        std::string years_word;
        if (age == 1 || (age % 10 == 1 && age != 11)) {
            years_word = "GOD";
        } else if ((age >= 2 && age <= 4) || (age % 10 >= 2 && age % 10 <= 4 && (age % 100 < 10 || age % 100 >= 20))) {
            years_word = "GODA";
        } else {
            years_word = "LET";
        }

        std::cout << "VAM " << age << " " << years_word << std::endl;
    } else {
        std::cout << "ERROR" << std::endl;
    }

    return 0;
}