#include <iostream>

void digit_root(long long &n) {
    while (n >= 10) {
        long long sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
}

int main() {
    long long number;

    std::cout << "vvod: ";
    std::cin >> number;

    digit_root(number);

    std::cout << "koren: " << number << std::endl;

    return 0;
}
