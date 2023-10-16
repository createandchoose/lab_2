#include <iostream>
#include <vector>
#include <sstream>
#include <cmath>

int main() {
    std::cout << "Введите последовательность чисел, разделенных пробелами: ";
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    std::vector<int> numbers;

    int number;
    while (iss >> number) {
        numbers.push_back(number);
    }

    double squaredSum = 0.0;
    for (int num : numbers) {
        squaredSum += std::pow(num, 2);
    }

    double meanSquare = squaredSum / numbers.size();

    double roundedMeanSquare = std::floor(meanSquare * 10) / 10;

    std::cout << "Среднее квадратичное: " << roundedMeanSquare << std::endl;

    return 0;
}
