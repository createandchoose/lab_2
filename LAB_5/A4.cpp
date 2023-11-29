#include <iostream>
#include <algorithm>

int main() {
    const int n = 5;

    int a[n];
    std::cout << "v A: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    int b[n];
    std::cout << "v B: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> b[i];
    }

    for (int i = 0; i < n; ++i) {
        if (a[i] > b[i]) {
            std::swap(a[i], b[i]);
        }
    }

    std::cout << "A: ";
    for (int i = 0; i < n; ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "B: ";
    for (int i = 0; i < n; ++i) {
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
