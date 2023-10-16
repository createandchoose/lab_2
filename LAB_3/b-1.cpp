#include <iostream>

int main() {
    int n;
    std::cout << "Введите значение n: ";
    std::cin >> n;

    int count = 0;
    for (int i = 1; count < n; i++) {
        for (int j = 0; j < i && count < n; j++) {
            std::cout << i << " ";
            count++;
        }
    }

    return 0;
}