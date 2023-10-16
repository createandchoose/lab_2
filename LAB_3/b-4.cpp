#include <iostream>
#include <vector>

int countLocalMaxima(const std::vector<double>& sequence) {
    int count = 0;
    int n = sequence.size();

    for (int i = 1; i < n - 1; ++i) {
        if (sequence[i] > sequence[i - 1] && sequence[i] > sequence[i + 1]) {
            count++;
        }
    }

    return count;
}

int main() {
    std::vector<double> sequence;
    double number;

    std::cout << "Введите последовательность чисел:" << std::endl;

    while (std::cin >> number) {
        sequence.push_back(number);
    }

    int localMaximaCount = countLocalMaxima(sequence);
    std::cout << "Количество локальных максимумов: " << localMaximaCount << std::endl;

    return 0;
}
