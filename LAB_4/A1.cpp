#include <iostream>
#include <cassert>

long long power(long long x, unsigned k) {
    long long result = 1;
    for (unsigned i = 0; i < k; ++i) {
        result *= x;
    }
    return result;
}

int main() {
    // Тесты Dulustan's
    {
        assert(power(1, 100) == 1);
        assert(power(2, 7) == 128);
        assert(power(2, 10) == 1024);
        assert(power(6, 5) == 7776);
        assert(power(7, 13) == 96889010407);

        #ifndef NDEBUG
        std::cout << "SUCCESS 1!" << std::endl;
        #endif
    }

    // Ваши тесты
    {
        assert(power(2, 11) == 2048);

        // Добавьте еще 3 своих теста
        assert(power(3, 0) == 1);  // Любое число в степени 0 равно 1
        assert(power(5, 1) == 5);  // Любое число в степени 1 равно самому себе
        assert(power(4, 3) == 64); // 4^3 = 64

        #ifndef NDEBUG
        std::cout << "SUCCESS 2!" << std::endl;
        #endif
    }

    return 0;
}
