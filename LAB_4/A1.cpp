#include <iostream>

long long power(long long x, unsigned k) {
    if (k == 0) {
        return 1;
    }

    long long result = 1;
    for (unsigned i = 0; i < k; i++) {
        result *= x;
    }

    return result;
}

int main() {
    long long x = 2;
    unsigned k = 5;
    long long result = power(x, k);
    std::cout << x << " v stepeni " << k << " = " << result << std::endl;

    return 0;
}
