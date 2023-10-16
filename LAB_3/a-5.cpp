#include <iostream>

int main() {
    unsigned int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;
    int maxDigit = 0;
    int minDigit = 9;

    unsigned int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        maxDigit = std::max(maxDigit, digit);
        minDigit = std::min(minDigit, digit);
        temp /= 10;
    }

    std::cout << "Наибольшая цифра: " << maxDigit << std::endl;
    std::cout << "Наименьшая цифра: " << minDigit << std::endl;

    return 0;
}
