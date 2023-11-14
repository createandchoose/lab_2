#include <iostream>
#include <cassert>

void sort_by_last(int &a, int &b, int &c) {
    // Получаем последние цифры
    int lastA = a % 10;
    int lastB = b % 10;
    int lastC = c % 10;

    // Сортируем по последним цифрам
    if (lastA < lastB) std::swap(a, b);
    if (lastA < lastC) std::swap(a, c);
    if (lastB < lastC) std::swap(b, c);
}

int main() {
    // Dulustan's tests
    {
        {
            int a = 138, b = 2647, c = 36971;
            sort_by_last(a, b, c);
            assert(a == 36971 && b == 2647 && c == 138);
        }
        {
            int a = 456, b = 123, c = 789;
            sort_by_last(a, b, c);
            assert(a == 123 && b == 456 && c == 789);
        }

#ifndef NDEBUG
        std::cout << "Dulustan's tests passed!" << std::endl;
#endif
    }

    // Student's tests
    {
        // Тест 1: a < b < c
        {
            int a = 123, b = 456, c = 789;
            sort_by_last(a, b, c);
            assert(a == 123 && b == 456 && c == 789);
        }

        // Тест 2: c < b < a
        {
            int a = 987, b = 654, c = 321;
            sort_by_last(a, b, c);
            assert(a == 321 && b == 654 && c == 987);
        }

        // Тест 3: a < c < b
        {
            int a = 111, b = 333, c = 222;
            sort_by_last(a, b, c);
            assert(a == 111 && b == 333 && c == 222);
        }

        // Тест 4: b < a < c
        {
            int a = 543, b = 321, c = 765;
            sort_by_last(a, b, c);
            assert(a == 321 && b == 543 && c == 765);
        }

#ifndef NDEBUG
        std::cout << "Student's tests passed!" << std::endl;
#endif
    }

    return 0;
}
