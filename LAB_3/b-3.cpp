#include <iostream>
using namespace std;

int getSumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    std::cout << "Введите n: ";
    std::cin >> n;

    std::cout << "Трехзначные числа с суммой цифр равной " << n << ":\n";
    for (int number = 100; number < 1000; number++) {
        if (getSumOfDigits(number) == n) {
            std::cout << number << " ";
        }
    }

    return 0;
}
