#include <iostream>
#include <cassert>

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

void test_digit_root() {
    // Test cases
    long long num1 = 942;
    digit_root(num1);
    assert(num1 == 6);

    long long num2 = 12345;
    digit_root(num2);
    assert(num2 == 6);

    long long num3 = 87654321;
    digit_root(num3);
    assert(num3 == 9);

    long long num4 = 987654321;
    digit_root(num4);
    assert(num4 == 9);

    long long num5 = 123456789987654321;
    digit_root(num5);
    assert(num5 == 9);

    std::cout << "All tests passed successfully!" << std::endl;
}

int main() {
    test_digit_root();

    return 0;
}
