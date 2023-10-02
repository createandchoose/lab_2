#include <iostream>

int main() {
    int n;
    std::cout << "Введите положительное четырехзначное число: ";
    std::cin >> n;
    int digit;
    bool containsOddDigit = false;
    while (n > 0) {
        digit = n % 10;
        if (digit % 2 != 0) {
            containsOddDigit = true;
            break;
        }
        n /= 10;
    }
    if (containsOddDigit) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    
    return 0;
}
