#include <iostream>
#include <vector>

void solve(std::vector<int> &a) {
    if (a.size() < 3) {
        // Массив должен содержать как минимум 3 элемента, чтобы выполнять удаление.
        std::cerr << "error" << std::endl;
        return;
    }

    int min1 = 2e9, max1 = -2e9;

    // Находим минимальное и максимальное значение в массиве.
    for (auto &n : a) {
        min1 = std::min(min1, n);
        max1 = std::max(max1, n);
    }

    std::vector<int> ans;

    // Проверяем каждый элемент массива и добавляем в новый массив те, которые соответствуют условиям.
    for (auto &n : a) {
        if (std::abs(n - min1) <= 1 || std::abs(n - max1) <= 1) {
            ans.push_back(n);
        }
    }

    // Заменяем оригинальный массив новым массивом.
    a = ans;
}

int main() {
    std::vector<int> arr = {6, 1, 3, 5, 4, 2, 6};

    std::cout << "vvod: ";
    for (const auto &num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    solve(arr);

    std::cout << "result: ";
    for (size_t i = 1; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
