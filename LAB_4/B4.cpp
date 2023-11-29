#include <iostream>

int my_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void simplify(int &num, int &denom) {
    int gcd = my_gcd(num, denom);
    if (gcd != 0) {
        num /= gcd;
        denom /= gcd;
    }
}

int main() {
    int numerator, denominator;

    std::cout << "chislitel: ";
    std::cin >> numerator;

    std::cout << "znaminatel: ";
    std::cin >> denominator;

    if (denominator == 0) {
        std::cout << "error 0" << std::endl;
        return 1;
    }

    simplify(numerator, denominator);

    std::cout << "Drob: " << numerator << "/" << denominator << std::endl;

    return 0;
}


// Введите числитель: 24
// Введите знаменатель: 36
// Сокращенная дробь: 2/3