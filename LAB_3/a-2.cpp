#include <iostream>
#include <vector>

int main() {
    const int sequenceLength = 9;
    std::vector<double> sequence;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    std::cout << "Введите последовательность из " << sequenceLength << " вещественных чисел:" << std::endl;

    for (int i = 0; i < sequenceLength; ++i) {
        double number;
        std::cout << "Число " << (i + 1) << ": ";
        std::cin >> number;
        sequence.push_back(number);

        if (number > 0) {
            positiveCount++;
        } else if (number < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    std::cout << "Кол. положительных чисел: " << positiveCount << std::endl;
    std::cout << "Кол. отрицательных чисел: " << negativeCount << std::endl;
    std::cout << "Кол. нулей: " << zeroCount << std::endl;

    return 0;
}
