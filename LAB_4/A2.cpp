#include <iostream>
#include <cmath>

long long power(int base, int power) {
    long long result = 1;
    for (int i = 0; i < power; i++) {
        result *= base;
    }
    return result;
}

long long sum_p(int p, int n) {
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += power(i, p);
    }
    return sum;
}

int main() {
    int p, n;
    std::cout << "p: ";
    std::cin >> p;
    std::cout << "n: ";
    std::cin >> n;

    long long result = sum_p(p, n);
    std::cout << "Сумма " << p << "-х степеней чисел от 1 до " << n << " равна: " << result << std::endl;

    return 0;
}
