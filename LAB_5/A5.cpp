#include <iostream>
#include <vector>

int main() {
    std::vector<int> sequence;
    int num;
    while (std::cin >> num) {
        sequence.push_back(num);
    }

    int count[9] = {0};

    for (int i : sequence) {
        if (i >= 1 && i <= 9) {
            count[i - 1]++;
        }
    }

    for (int i = 0; i < 9; ++i) {
        std::cout << count[i] << " ";
    }

    return 0;
}
// Пример. Ввод: 11 1 1 4 1 5 8 6 3 5 1 6 Вывод: 4 0 1 1 2 2 0 1 