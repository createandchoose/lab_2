#include <iostream>
#include <vector>

int main() {
    std::cout << "mass: ";
    std::vector<double> numbers;
    double input;
    while (std::cin >> input) {
        numbers.push_back(input);
    }

    for (size_t i = 2; i < numbers.size(); ++i) {
        double sum = numbers[i - 1] + numbers[i - 2];

        if (numbers[i] == sum) {
            std::cout << numbers[i] << " ";
        }
    }

    return 0;
}


// Пример. Ввод: 7 1 2 -3 -1 -4 8 4 Вывод: -1 -4 4